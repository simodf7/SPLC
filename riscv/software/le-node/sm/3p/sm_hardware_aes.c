// Driver per il modulo hardware AES del Security Manager

#include "inc/sm_hardware_aes.h"
#include "profiler.h"
#include <string.h>

#define AES_BLOCK_SIZE 16 

// Identificatori per verificare che il core AES sia presente
#define AES_CORE_NAME0 0x61657320  // "aes " in esadecimale
#define AES_CORE_NAME1 0x20202020  // "    " spazi

// Variabile globale per tenere traccia se stiamo usando AES-256 (1) o AES-128 (0)
static int g_aes_keylen256 = 0;

// Inizializza e verifica che il modulo AES hardware sia presente
// Ritorna: 1 se il modulo è presente, 0 se non trovato
int sm_hardware_aes_init(void) {
    // Legge i registri di identificazione del core AES
    uint32_t name0 = AES_READ(AES_NAME0_REG);
    uint32_t name1 = AES_READ(AES_NAME1_REG);
    
    // Verifica che i valori letti corrispondano a quelli attesi
    return (name0 == AES_CORE_NAME0 && name1 == AES_CORE_NAME1) ? 1 : 0;
}

// Configura la chiave AES nell'hardware
// key: puntatore alla chiave (16 o 32 byte)
// key_length: lunghezza della chiave in byte
void sm_hardware_aes_set_key(const uint8_t *key, int key_length) {
    // PROFILE("hw_aes_set_key")
    // {
        // Determina se usare AES-256 (chiave >= 32 byte) o AES-128
        g_aes_keylen256 = (key_length >= 32) ? 1 : 0;
        
        // Configura il registro: modalità cifratura + lunghezza chiave
        AES_WRITE(AES_CONFIG_REG, (0 << AES_CONFIG_ENCDEC_BIT) |
                                   (g_aes_keylen256 << AES_CONFIG_KEYLEN_BIT));
        
        // Scrive la chiave nei registri dell'hardware (fino a 8 word da 32-bit)
        for (int i = 0; i < 8; i++) {
            uint32_t w = 0;  // Word da scrivere nel registro
            
            // Usa solo i registri necessari (4 per AES-128, 8 per AES-256)
            if (i < (g_aes_keylen256 ? 8 : 4)) {
                // Converte 4 byte della chiave in una word a 32-bit (big-endian)
                for (int j = 0; j < 4; j++) {
                    w |= ((uint32_t)key[i*4+j]) << (24 - j*8);
                }
            }
            // Scrive la word nel registro chiave
            AES_WRITE(AES_KEY0_REG + i, w);
        }
        
        // Inizializza il core AES con la nuova chiave
        AES_WRITE(AES_CTRL_REG, 1 << AES_CTRL_INIT_BIT);
    // }
}

int sm_hardware_aes_wait_ready(uint32_t timeout) {
    for (uint32_t i = 0; i < timeout; i++) {
        if (AES_READ(AES_STATUS_REG) & (1 << AES_STATUS_READY_BIT)) return 1;
    }
    return 0;
}

int sm_hardware_aes_wait_valid(uint32_t timeout) {
    for (uint32_t i = 0; i < timeout; i++) {
        if (AES_READ(AES_STATUS_REG) & (1 << AES_STATUS_VALID_BIT)) return 1;
    }
    return 0;
}

// Cifra un singolo blocco AES (AES_BLOCK_SIZE byte)
// pt: plaintext (testo in chiaro) - AES_BLOCK_SIZE byte
// ct: ciphertext (testo cifrato) - AES_BLOCK_SIZE byte
// Ritorna: 1 se successo, 0 se errore
int sm_hardware_aes_encrypt_block(const uint8_t *pt, uint8_t *ct) {
    // PROFILE("hw_aes_encrypt_block")
    // {
        // Passo 1: Aspetta che l'hardware sia pronto
        if (!sm_hardware_aes_wait_ready(10000)) return 0;
        
        // Passo 2: Configura per cifratura
        AES_WRITE(AES_CONFIG_REG, (0 << AES_CONFIG_ENCDEC_BIT) |  // 0 = cifra
                                   (g_aes_keylen256 << AES_CONFIG_KEYLEN_BIT));
        
        // Passo 3: Scrive i 16 byte del plaintext nei registri (4 word da 32-bit)
        for (int i = 0; i < 4; i++) {
            uint32_t w = 0;
            // Converte 4 byte in una word (big-endian)
            for (int j = 0; j < 4; j++) {
                w |= ((uint32_t)pt[i*4+j]) << (24 - j*8);
            }
            AES_WRITE(AES_BLOCK0_REG + i, w);
        }
        
        // Passo 4: Avvia l'operazione di cifratura
        AES_WRITE(AES_CTRL_REG, 1 << AES_CTRL_NEXT_BIT);
        
        //Piccolo ritardo per evitare problemi con il flag VALID
        volatile int delay;
        for (delay = 0; delay < 10; delay++);
        
        // Passo 5: Aspetta che il risultato sia pronto
        if (!sm_hardware_aes_wait_valid(10000)) return 0;
        
        // Passo 6: Legge i AES_BLOCK_SIZE byte del ciphertext dai registri risultato
        for (int i = 0; i < 4; i++) {
            uint32_t r = AES_READ(AES_RESULT0_REG + i);
            // Converte la word in 4 byte (big-endian)
            for (int j = 0; j < 4; j++) {
                ct[i*4+j] = (r >> (24 - j*8)) & 0xFF;
            }
        }
    // }
    return 1;  // Operazione completata con successo
}

// Decifra un singolo blocco AES (16 byte)
// ct: ciphertext (testo cifrato) - 16 byte
// pt: plaintext (testo in chiaro) - 16 byte
// Ritorna: 1 se successo, 0 se errore
int sm_hardware_aes_decrypt_block(const uint8_t *ct, uint8_t *pt) {
    // PROFILE("hw_aes_decrypt_block")
    // {
        // Passo 1: Aspetta che l'hardware sia pronto
        if (!sm_hardware_aes_wait_ready(10000)) return 0;
        
        // Passo 2: Scrive i 16 byte del ciphertext nei registri (4 word da 32-bit)
        for (int i = 0; i < 4; i++) {
            uint32_t w = 0;
            // Converte 4 byte in una word (big-endian)
            for (int j = 0; j < 4; j++) {
                w |= ((uint32_t)ct[i*4+j]) << (24 - j*8);
            }
            AES_WRITE(AES_BLOCK0_REG + i, w);
        }
        
        // Passo 3: Avvia l'operazione di decifratura
        AES_WRITE(AES_CTRL_REG, 1 << AES_CTRL_NEXT_BIT);
        
        //Piccolo ritardo per evitare problemi con il flag VALID
        volatile int delay;
        for (delay = 0; delay < 10; delay++);
        
        // Passo 4: Aspetta che il risultato sia pronto
        if (!sm_hardware_aes_wait_valid(10000)) return 0;
        
        // Passo 5: Legge i AES_BLOCK_SIZE byte del plaintext dai registri risultato
        for (int i = 0; i < 4; i++) {
            uint32_t r = AES_READ(AES_RESULT0_REG + i);
            // Converte la word in 4 byte (big-endian)
            for (int j = 0; j < 4; j++) {
                pt[i*4+j] = (r >> (24 - j*8)) & 0xFF;
            }
        }
    // }
    return 1;  // Operazione completata con successo
}

// Cifra dati usando AES-CBC (Cipher Block Chaining)
// pt: plaintext (testo in chiaro)
// ct: ciphertext (testo cifrato) - deve avere la stessa lunghezza di pt
// len: lunghezza dati (deve essere multiplo di AES_BLOCK_SIZE)
// key: chiave AES (AES_BLOCK_SIZE byte per AES-128)
// iv: Initialization Vector (AES_BLOCK_SIZE byte)
// Ritorna: 1 se successo, 0 se errore
int sm_hardware_aes_encrypt_cbc(const uint8_t *pt, uint8_t *ct, size_t len,
                                const uint8_t *key, const uint8_t *iv) {
    // PROFILE("hw_aes_encrypt_cbc")
    // {
        // Controllo 1: La lunghezza deve essere multiplo di AES_BLOCK_SIZE (dimensione blocco AES)
        if (len % AES_BLOCK_SIZE) return 0;
        
        // Controllo 2: Verifica che l'hardware AES sia presente
        if (!sm_hardware_aes_init()) return 0;
        
        // Passo 1: Imposta la chiave nell'hardware
        sm_hardware_aes_set_key(key, AES_BLOCK_SIZE);
        
        // Passo 2: Aspetta che l'hardware sia pronto
        if (!sm_hardware_aes_wait_ready(10000)) return 0;
        
        // Passo 3: Configura per cifratura CBC
        AES_WRITE(AES_CONFIG_REG, (0 << AES_CONFIG_ENCDEC_BIT) |  // 0 = cifra
                                   (g_aes_keylen256 << AES_CONFIG_KEYLEN_BIT));
        
        // Passo 4: Inizializza il vettore precedente con IV
        uint8_t prev[AES_BLOCK_SIZE];
        memcpy(prev, iv, AES_BLOCK_SIZE);
        
        // Passo 5: Calcola quanti blocchi da AES_BLOCK_SIZE byte dobbiamo processare
        size_t blocks = len / AES_BLOCK_SIZE;
        
        // Passo 6: Cifra ogni blocco usando la modalità CBC
        for (size_t b = 0; b < blocks; b++) {
            uint8_t in[AES_BLOCK_SIZE];  // Blocco da cifrare dopo XOR
            
            // CBC: XOR del blocco corrente con il precedente (o IV per il primo)
            for (int i = 0; i < AES_BLOCK_SIZE; i++) {
                in[i] = pt[b*AES_BLOCK_SIZE+i] ^ prev[i];
            }
            
            // Cifra il blocco risultante
            if (!sm_hardware_aes_encrypt_block(in, &ct[b*AES_BLOCK_SIZE])) return 0;
            
            // Il blocco cifrato diventa il "precedente" per il prossimo
            memcpy(prev, &ct[b*AES_BLOCK_SIZE], 16);
        }
    // }
    return 1;  // Operazione completata con successo
}

// Decifra dati usando AES-CBC (Cipher Block Chaining)
// ct: ciphertext (testo cifrato)
// pt: plaintext (testo in chiaro) - deve avere la stessa lunghezza di ct
// len: lunghezza dati (deve essere multiplo di AES_BLOCK_SIZE)
// key: chiave AES (AES_BLOCK_SIZE byte per AES-128)
// iv: Initialization Vector (AES_BLOCK_SIZE byte)
// Ritorna: 1 se successo, 0 se errore
int sm_hardware_aes_decrypt_cbc(const uint8_t *ct, uint8_t *pt, size_t len,
                                const uint8_t *key, const uint8_t *iv) {
    // PROFILE("hw_aes_decrypt_cbc")
    // {
        // Controllo 1: La lunghezza deve essere multiplo di AES_BLOCK_SIZE (dimensione blocco AES)
        if (len % AES_BLOCK_SIZE) return 0;
        
        // Controllo 2: Verifica che l'hardware AES sia presente
        if (!sm_hardware_aes_init()) return 0;
        
        // Passo 1: Imposta la chiave nell'hardware
        sm_hardware_aes_set_key(key, AES_BLOCK_SIZE);
        
        // Passo 2: Aspetta che l'hardware sia pronto
        if (!sm_hardware_aes_wait_ready(10000)) return 0;
        
        // Passo 3: Configura per decifratura CBC
        AES_WRITE(AES_CONFIG_REG, (1 << AES_CONFIG_ENCDEC_BIT) |  // 1 = decifra
                                   (g_aes_keylen256 << AES_CONFIG_KEYLEN_BIT));
        
        // Passo 4: Inizializza nuovamente il core per la decifratura
        AES_WRITE(AES_CTRL_REG, 1 << AES_CTRL_INIT_BIT);
        if (!sm_hardware_aes_wait_ready(10000)) return 0;

        // Passo 5: Inizializza il vettore precedente con IV
        uint8_t prev[AES_BLOCK_SIZE];
        memcpy(prev, iv, AES_BLOCK_SIZE);
        
        // Passo 6: Calcola quanti blocchi da AES_BLOCK_SIZE byte dobbiamo processare
        size_t blocks = len / AES_BLOCK_SIZE;
        
        // Passo 7: Decifra ogni blocco usando la modalità CBC
        for (size_t b = 0; b < blocks; b++) {
            // IMPORTANTE: Salva il blocco cifrato corrente PRIMA di sovrascriverlo
            // Questo permette operazioni "in-place" sicure (pt e ct possono essere lo stesso buffer)
            uint8_t cur_ct[AES_BLOCK_SIZE];
            memcpy(cur_ct, &ct[b*AES_BLOCK_SIZE], 16);

            // Decifra il blocco corrente
            uint8_t dec[AES_BLOCK_SIZE];
            if (!sm_hardware_aes_decrypt_block(cur_ct, dec)) return 0;

            // CBC: XOR del blocco decifrato con il precedente (o IV per il primo)
            for (int i = 0; i < AES_BLOCK_SIZE; i++) {
                pt[b*AES_BLOCK_SIZE+i] = dec[i] ^ prev[i];
            }
            
            // Il blocco cifrato corrente diventa il "precedente" per il prossimo
            memcpy(prev, cur_ct, AES_BLOCK_SIZE);
        }
    // }
    return 1;  // Operazione completata con successo
}




