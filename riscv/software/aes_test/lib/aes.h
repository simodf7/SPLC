// Driver Modulo AES Hardware
// Copyright 2025

#ifndef AES_H_
#define AES_H_

#include <stdint.h>
#include "dev_access.h"
#include "system_regs.h"

// Offset Registri AES
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

// Bit di controllo
#define AES_CTRL_INIT_BIT  0
#define AES_CTRL_NEXT_BIT  1

// Bit di stato
#define AES_STATUS_READY_BIT 0
#define AES_STATUS_VALID_BIT 1

// Bit di configurazione
#define AES_CONFIG_ENCDEC_BIT  0  // 0=crittografia, 1=decrittografia
#define AES_CONFIG_KEYLEN_BIT  1  // 0=128bit, 1=256bit

// Macro di aiuto
#define AES_REG_ADDR(reg) (AES_BASE + ((reg) << 2))
#define AES_WRITE(reg, val) DEV_WRITE(AES_REG_ADDR(reg), val)
#define AES_READ(reg) DEV_READ(AES_REG_ADDR(reg))

// Inizializza il modulo AES e verifica se è presente
// Ritorna 1 se il modulo AES è rilevato, 0 altrimenti
int aes_init(void);

// Imposta la chiave AES (128-bit o 256-bit)
// key: Puntatore ai dati della chiave (16 o 32 byte)
// key_length: 0 per 128-bit, 1 per 256-bit
void aes_set_key(const uint8_t *key, int key_length);

// Crittografa un blocco a 128-bit
// plaintext: Blocco di input da 16 byte
// ciphertext: Blocco di output da 16 byte
// Ritorna 1 in caso di successo, 0 in caso di fallimento
int aes_encrypt_block(const uint8_t *plaintext, uint8_t *ciphertext);

// Decrittografa un blocco a 128-bit
// ciphertext: Blocco di input da 16 byte
// plaintext: Blocco di output da 16 byte
// Ritorna 1 in caso di successo, 0 in caso di fallimento
int aes_decrypt_block(const uint8_t *ciphertext, uint8_t *plaintext);

// Attende il completamento dell'operazione AES
// timeout_cycles: Cicli massimi da attendere
// Ritorna 1 se pronto, 0 se timeout
int aes_wait_ready(uint32_t timeout_cycles);

// Attende che il risultato AES sia valido
// timeout_cycles: Cicli massimi da attendere
// Ritorna 1 se valido, 0 se timeout
int aes_wait_valid(uint32_t timeout_cycles);

#endif // AES_H_