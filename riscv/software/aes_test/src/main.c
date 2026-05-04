#include "system.h"
#include "aes.h"
#include <string.h>

#define ENABLE_PROFILER
#define DEFINE_PROFILER_STRUCT
#include "profiler.h"

int main(void) {
    system_init();
    
    init_profiler();
    
    puts("=== Test Modulo AES ===\n");
    
    // Verifica della presenza del modulo AES
    if (!aes_init()) {
        puts("ERRORE: Modulo AES non rilevato!\n");
        halt();
        return -1;
    }
    
    puts("Modulo AES rilevato con successo!\n");
    
    // Chiave AES (128-bit) - "ProvaChiaveAES!'\0'"
    uint8_t aes_key[16] = {
        'P', 'r', 'o', 'v', 'a', 'C', 'h', 'i',
        'a', 'v', 'e', 'A', 'E', 'S', '!', '\0'
    };
    
    printf("Impostazione chiave AES: ");
    for (int i = 0; i < 16; i++) {
        putchar(aes_key[i] ? aes_key[i] : '.');
    }
    puts("\n");
    
    // Impostazione della chiave
    aes_set_key(aes_key, 0);  // 0 = chiave 128-bit
    
    // Attesa del completamento dell'inizializzazione della chiave
    if (!aes_wait_ready(10000)) {
        puts("ERRORE: Timeout inizializzazione chiave AES!\n");
        halt();
        return -1;
    }
    
    puts("Chiave AES impostata con successo!\n");
    
    // Preparazione del messaggio "prova modulo aes" (padded a 16 byte)
    uint8_t plaintext[16] = {
        'p', 'r', 'o', 'v', 'a', ' ', 'm', 'o',
        'd', 'u', 'l', 'o', ' ', 'a', 'e', 's'
    };
    
    uint8_t ciphertext[16];
    uint8_t decrypted[16];
    
    printf("Messaggio originale: ");
    for (int i = 0; i < 16; i++) {
        putchar(plaintext[i]);
    }
    puts("\n");
    
    // Crittografia del messaggio
    puts("Crittografia in corso...\n");
    int encrypt_result;
    PROFILE("AES_ENCRYPT") {
        encrypt_result = aes_encrypt_block(plaintext, ciphertext);
    }
    
    if (!encrypt_result) {
        puts("ERRORE: Crittografia AES fallita!\n");
        halt();
        return -1;
    }
    
    printf("Dati crittografati (hex): ");
    for (int i = 0; i < 16; i++) {
        putbyte(ciphertext[i]);
        if (i < 15) putchar(' ');
    }
    puts("\n");
    
    // Decrittografia del messaggio
    puts("Decrittografia in corso...\n");
    int decrypt_result;
    PROFILE("AES_DECRYPT") {
        decrypt_result = aes_decrypt_block(ciphertext, decrypted);
    }
    
    if (!decrypt_result) {
        puts("ERRORE: Decrittografia AES fallita!\n");
        halt();
        return -1;
    }
    
    printf("Messaggio decrittografato: ");
    for (int i = 0; i < 16; i++) {
        putchar(decrypted[i]);
    }
    puts("\n");
    
    // Verifica della corrispondenza tra plaintext e decrypted
    int match = 1;
    for (int i = 0; i < 16; i++) {
        if (plaintext[i] != decrypted[i]) {
            match = 0;
            break;
        }
    }
    
    if (match) {
        puts("SUCCESSO: Test di crittografia/decrittografia superato!\n");
        puts("Il modulo AES funziona correttamente!\n");
    } else {
        puts("ERRORE: I dati decrittografati non corrispondono all'originale!\n");
    }
    
    // Stampa risultati del profiler
    print_profiler_results();
    
    puts("=== Test AES Completato ===");
    
    halt();
    return 0;
}