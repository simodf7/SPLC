# Ottimizzazione dell'algoritmo AES
### Implementazione dell'enclave di test per l'algoritmo AES
I file d'implementazione relativi all'enclave di test per l'algoritmo aes si trovano della directory `software/le-node/se/testenc`.

### Gestione File AES
I file di libreria relativi all'implementazione software e hardware dell'algoritmo AES si trovano nella directory  `software/le-node/sm/3p/` e vengono richiamati nel file `./include/sm.h`
## Guida per Aggiungere Nuove Funzioni SMAPI

Questa guida spiega come aggiungere una nuova funzione SMAPI al Security Manager (SM), utilizzando `encrypt_data_aescbc()` come esempio pratico.

### Panoramica del Sistema

Il sistema SMAPI funziona attraverso diversi livelli:
1. Interfaccia per i Secure Enclaves (SE)
2. Implementazione effettiva nel Secure Monitor
3. Gestione del vettore delle ecall per la gestione delle chiamate

Esempio: Implementazione della funzione di encrypt hardware dell'algoritmo AES:
```
SE: smapi_hw_aes_encrypt_cbc(): Funzione richiamate nel serivzio del Secure Enclave. File `main.c` del relativo Secure Enclave.
   
↓ (ecall)

SM: sm_hw_aes_encrypt_cbc() Funzione associata alla specifica chiamata SMAPI. File `platform/ecall_u.c`.

↓

SM: encrypt_data_aes_cbc_hw() Funzione wrapper nel file di libreria `crypto.c` che richiama l'effettiva funzione della libreria che implementa AES hardware

↓  

SM: sm_hardware_aes_encrypt_cbc() Funzione nel file di libreria hardware_aes.c che permette d'interfacciarsi con l'hardware

↓

HARDWARE AES: Esecuzione della funzionalità richiesta
```

### File da Modificare

### 1. `smapi_nums.h` - Definire il numero della chiamata
```c
// Aggiungere una nuova entry nella enum
#define SMNUM_ENCRYPT_AESCBC        25
```


### 2. `smapi.h` - Definire l'interfaccia frontend
```c
// Aggiungere la dichiarazione della funzione wrapper
static inline struct seret smapi_encrypt_data_aescbc(const char *keyID, 
    const uint8_t *ptext, size_t ptext_len, const uint8_t *iv, uint8_t *ctext)
{
    // Implementazione della ecall verso il SM
    return __smapi_call5(SMNUM_ENCRYPT_AESCBC, 
        (uintptr_t)keyID, (uintptr_t)ptext, ptext_len, 
        (uintptr_t)iv, (uintptr_t)ctext);
}
```


### 3. `platform/ecall_u.c` - Implementare il backend

#### 3a. Aggiungere la funzione backend
```c
// Backend per cifratura AES-CBC software - usa le chiavi gestite dal SM
static struct smret sm_encrypt_data_aescbc(const char *keyID, const uint8_t *ptext,
                    size_t ptext_len, const uint8_t *iv, uint8_t *ctext)
{
    struct smret r;
    ...
    return r;
}
```


#### 3b. Aggiungere al vettore delle ecall
```c
volatile const uintptr_t ecall_u_vector[] = 
{
    ...
    [SMNUM_ENCRYPT_AESCBC] = (uintptr_t)sm_encrypt_data_aescbc,
    ...
};
```

