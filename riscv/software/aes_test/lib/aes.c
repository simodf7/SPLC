// Implementazione Driver Modulo AES Hardware
// Copyright 2025

#include "aes.h"
#include "system.h"
#include <string.h>

#define ENABLE_PROFILER
#include "profiler.h"

// Valori di identificazione del core AES attesi
#define AES_CORE_NAME0 0x61657320  // "aes "
#define AES_CORE_NAME1 0x20202020  // "    "

int aes_init(void) {
    // Verifica se il core AES è presente leggendo i registri di identificazione
    uint32_t name0 = AES_READ(AES_NAME0_REG);
    uint32_t name1 = AES_READ(AES_NAME1_REG);
    
    printf("Debug AES: NAME0=0x");
    puthex(name0);
    printf(" NAME1=0x");
    puthex(name1);
    printf("\n");
    
    return (name0 == AES_CORE_NAME0 && name1 == AES_CORE_NAME1) ? 1 : 0;
}

void aes_set_key(const uint8_t *key, int key_length) {
    // Imposta la lunghezza della chiave nel registro di configurazione
    uint32_t config = (key_length & 1) << AES_CONFIG_KEYLEN_BIT;
    AES_WRITE(AES_CONFIG_REG, config);
    
    // Scrive i dati della chiave (converte byte in parole a 32-bit, big-endian)
    for (int i = 0; i < 8; i++) {
        uint32_t key_word = 0;
        if (i < (key_length ? 8 : 4)) {
            // Converte 4 byte in una parola a 32-bit (big-endian)
            for (int j = 0; j < 4; j++) {
                if ((i * 4 + j) < (key_length ? 32 : 16)) {
                    key_word |= ((uint32_t)key[i * 4 + j]) << (24 - j * 8);
                }
            }
        }
        AES_WRITE(AES_KEY0_REG + i, key_word);
    }
    
    //Scrittura per l'inizializzazione della chiave
    AES_WRITE(AES_CTRL_REG, 1 << AES_CTRL_INIT_BIT);
}

int aes_wait_ready(uint32_t timeout_cycles) {
    for (uint32_t i = 0; i < timeout_cycles; i++) {
        uint32_t status = AES_READ(AES_STATUS_REG);
        if (status & (1 << AES_STATUS_READY_BIT)) {
            return 1;
        }
    }
    return 0;
}

int aes_wait_valid(uint32_t timeout_cycles) {
    for (uint32_t i = 0; i < timeout_cycles; i++) {
        uint32_t status = AES_READ(AES_STATUS_REG);
        if (status & (1 << AES_STATUS_VALID_BIT)) {
            return 1;
        }
    }
    return 0;
}

int aes_encrypt_block(const uint8_t *plaintext, uint8_t *ciphertext) {
    // Attende che AES sia pronto
    PROFILE("AES_ENCRYPT_WAIT_READY") {
        if (!aes_wait_ready(10000)) {
            return 0;
        }
    }
    
    // Imposta modalità crittografia e scrive i dati
    PROFILE("AES_ENCRYPT_SETUP") {
        // Imposta modalità crittografia
        uint32_t config = AES_READ(AES_CONFIG_REG);
        config &= ~(1 << AES_CONFIG_ENCDEC_BIT);  // 0 = crittografia
        AES_WRITE(AES_CONFIG_REG, config);
        
        // Scrive il blocco di input (converte byte in parole a 32-bit, big-endian)
        for (int i = 0; i < 4; i++) {
            uint32_t block_word = 0;
            for (int j = 0; j < 4; j++) {
                block_word |= ((uint32_t)plaintext[i * 4 + j]) << (24 - j * 8);
            }
            AES_WRITE(AES_BLOCK0_REG + i, block_word);
        }
    }
    
    // Innesca la crittografia e attende il risultato
    PROFILE("AES_ENCRYPT_CORE_OPERATION") {
        // Innesca la crittografia
        AES_WRITE(AES_CTRL_REG, 1 << AES_CTRL_NEXT_BIT);
        
        // Attende che il risultato sia valido
        if (!aes_wait_valid(10000)) {
            return 0;
        }
    }
    
    // Legge il risultato
    PROFILE("AES_ENCRYPT_READ_RESULT") {
        // Legge il risultato (converte parole a 32-bit in byte, big-endian)
        for (int i = 0; i < 4; i++) {
            uint32_t result_word = AES_READ(AES_RESULT0_REG + i);
            for (int j = 0; j < 4; j++) {
                ciphertext[i * 4 + j] = (result_word >> (24 - j * 8)) & 0xFF;
            }
        }
    }
    
    return 1;
}

int aes_decrypt_block(const uint8_t *ciphertext, uint8_t *plaintext) {
    // Attende che AES sia pronto
    PROFILE("AES_DECRYPT_WAIT_READY") {
        if (!aes_wait_ready(10000)) {
            return 0;
        }
    }
    
    // Imposta modalità decrittografia e reinizializza la chiave
    PROFILE("AES_DECRYPT_SETUP_AND_KEY_INIT") {
        // Imposta modalità decrittografia
        uint32_t config = AES_READ(AES_CONFIG_REG);
        config |= (1 << AES_CONFIG_ENCDEC_BIT);  // 1 = decrittografia
        AES_WRITE(AES_CONFIG_REG, config);
        
        // Il core AES necessita dell'espansione della chiave per la decrittografia
        AES_WRITE(AES_CTRL_REG, 1 << AES_CTRL_INIT_BIT);
        
        // Attende il completamento dell'inizializzazione della chiave
        if (!aes_wait_ready(10000)) {
            return 0;
        }
    }
    
    // Scrive i dati di input
    PROFILE("AES_DECRYPT_WRITE_DATA") {
        // Scrive il blocco di input (converte byte in parole a 32-bit, big-endian)
        for (int i = 0; i < 4; i++) {
            uint32_t block_word = 0;
            for (int j = 0; j < 4; j++) {
                block_word |= ((uint32_t)ciphertext[i * 4 + j]) << (24 - j * 8);
            }
            AES_WRITE(AES_BLOCK0_REG + i, block_word);
        }
    }
    
    // Innesca la decrittografia e attende il risultato
    PROFILE("AES_DECRYPT_CORE_OPERATION") {
        // Innesca la decrittografia
        AES_WRITE(AES_CTRL_REG, 1 << AES_CTRL_NEXT_BIT);
        
        // Attende che il risultato sia valido
        if (!aes_wait_valid(10000)) {
            return 0;
        }
    }
    
    // Legge il risultato
    PROFILE("AES_DECRYPT_READ_RESULT") {
        // Legge il risultato (converte parole a 32-bit in byte, big-endian)
        for (int i = 0; i < 4; i++) {
            uint32_t result_word = AES_READ(AES_RESULT0_REG + i);
            for (int j = 0; j < 4; j++) {
                plaintext[i * 4 + j] = (result_word >> (24 - j * 8)) & 0xFF;
            }
        }
    }
    
    return 1;
}