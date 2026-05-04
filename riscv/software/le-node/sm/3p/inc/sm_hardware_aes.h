
// AES Hardware Module Driver Header for SM
// Copyright 2025

#ifndef SM_HARDWARE_AES_H_
#define SM_HARDWARE_AES_H_

#include <stdint.h>
#include <stddef.h>
#include "dev_access.h"
#include "system_regs.h"

// AES Register Offsets
#define AES_NAME0_REG     0x00
#define AES_NAME1_REG     0x01
#define AES_VERSION_REG   0x02
#define AES_CTRL_REG      0x08
#define AES_STATUS_REG    0x09
#define AES_CONFIG_REG    0x0A
#define AES_KEY0_REG      0x10
#define AES_KEY1_REG      0x11
#define AES_KEY2_REG      0x12
#define AES_KEY3_REG      0x13
#define AES_KEY4_REG      0x14
#define AES_KEY5_REG      0x15
#define AES_KEY6_REG      0x16
#define AES_KEY7_REG      0x17
#define AES_BLOCK0_REG    0x20
#define AES_BLOCK1_REG    0x21
#define AES_BLOCK2_REG    0x22
#define AES_BLOCK3_REG    0x23
#define AES_RESULT0_REG   0x30
#define AES_RESULT1_REG   0x31
#define AES_RESULT2_REG   0x32
#define AES_RESULT3_REG   0x33

#define AES_CTRL_INIT_BIT  0
#define AES_CTRL_NEXT_BIT  1

#define AES_STATUS_READY_BIT 0
#define AES_STATUS_VALID_BIT 1

#define AES_CONFIG_ENCDEC_BIT  0  // 0=encrypt, 1=decrypt
#define AES_CONFIG_KEYLEN_BIT  1  // 0=128bit, 1=256bit

#define AES_REG_ADDR(reg) (AES_BASE + ((reg) << 2))
#define AES_WRITE(reg, val) DEV_WRITE(AES_REG_ADDR(reg), val)
#define AES_READ(reg) DEV_READ(AES_REG_ADDR(reg))

// Inizializza e verifica che il modulo AES hardware sia presente
// Ritorna: 1 se il modulo è presente, 0 se non trovato
int sm_hardware_aes_init(void);

// Configura la chiave AES nell'hardware (128-bit o 256-bit)
// key: puntatore alla chiave (16 o 32 byte)
// key_length: lunghezza della chiave in byte
void sm_hardware_aes_set_key(const uint8_t *key, int key_length);

// Cifra un singolo blocco AES (16 byte)
// plaintext: testo in chiaro (16 byte)
// ciphertext: testo cifrato (16 byte)
// Ritorna: 1 se successo, 0 se errore
int sm_hardware_aes_encrypt_block(const uint8_t *plaintext, uint8_t *ciphertext);

// Decifra un singolo blocco AES (16 byte)
// ciphertext: testo cifrato (16 byte)
// plaintext: testo in chiaro (16 byte)
// Ritorna: 1 se successo, 0 se errore
int sm_hardware_aes_decrypt_block(const uint8_t *ciphertext, uint8_t *plaintext);

// Aspetta che l'hardware AES sia pronto per una nuova operazione
// timeout_cycles: numero massimo di cicli da aspettare
// Ritorna: 1 se pronto, 0 se timeout
int sm_hardware_aes_wait_ready(uint32_t timeout_cycles);

// Aspetta che il risultato dell'operazione AES sia valido
// timeout_cycles: numero massimo di cicli da aspettare
// Ritorna: 1 se valido, 0 se timeout
int sm_hardware_aes_wait_valid(uint32_t timeout_cycles);

// Cifra dati usando AES-CBC con hardware AES
// plaintext: dati in ingresso (deve essere multiplo di 16 byte)
// ciphertext: buffer di uscita (stessa dimensione del plaintext)
// len: lunghezza dati (deve essere multiplo di 16)
// key: chiave AES-128 (16 byte)
// iv: vettore di inizializzazione (16 byte)
// Ritorna: 1 se successo, 0 se errore
int sm_hardware_aes_encrypt_cbc(const uint8_t *plaintext, uint8_t *ciphertext, 
                                 size_t len, const uint8_t *key, const uint8_t *iv);

// Decifra dati usando AES-CBC con hardware AES
// ciphertext: dati in ingresso (deve essere multiplo di 16 byte)
// plaintext: buffer di uscita (stessa dimensione del ciphertext)
// len: lunghezza dati (deve essere multiplo di 16)
// key: chiave AES-128 (16 byte)
// iv: vettore di inizializzazione (16 byte)
// Ritorna: 1 se successo, 0 se errore
int sm_hardware_aes_decrypt_cbc(const uint8_t *ciphertext, uint8_t *plaintext, 
                                 size_t len, const uint8_t *key, const uint8_t *iv);

#endif // SM_HARDWARE_AES_H_