#define DEFINE_SEHEAD
#include "se.h"
#include "smapi.h"
#include "user.h"
#include "errno.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>


// Funzioni di test per la verifica del funzionamento dell'enclave
long func1(void *p)
{
    int i = *(int *)p;
    return i + 1;
}

long func2(void *p)
{
    int i = *(int *)p;
    return 2*i;
}
// ========================================================
// La funzione arrotonda per eccesso al multiplo di 16
// (è utile in quanto AES lavora con blocchi di 16 byte)
static size_t round_up16(size_t n) { return (n + 15u) & ~((size_t)15u); }

/* 
* FUNZIONE PER LA CIFRATURA AES-CBC CON CHIAVE DERIVATA
* La funzione esegue le seguenti operazioni:
* 1) Calcola il digest autenticato e lo copia in shared memory
* 2) Deriva una nuova chiave usando src_keyID e seed=digest 
* 3) Prepara l'IV (vettore di inizializzazione). Se è tutto zero, ne genera uno random
* 4) Prepara il testo da cifrare, limita la lunghezza e aggiunge padding a 16 byte
* 5) Cifra con la chiave derivata
* 6) Decifra subito per controllare che tutto sia andato a buon fine
*/
long func3(void *p)
{
    struct shared_crypto *sh = (struct shared_crypto *)p;
    uint8_t digest[32];
    int r;

    //1) Check che il puntatore non sia nullo 
    if (!sh) return -1;

    // 2) Calcola digest autenticato e lo copia in shared memory
    r = smapi_get_authd_digest(0, digest);
    if (r != 0) {
        sh->retval = r;
        return r;
    }
    memcpy(sh->digest, digest, 32);

    // 2) Deriva la nuova chiave usando src_keyID e seed=digest
    //    new_keyID deve essere fornito nella shared memory
    if (sh->src_keyID[0] == '\0' || sh->new_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }
    /* La funzione permette di ottenere l'id di una chiave che è memorizzata e gestita
    * dal SM. La chiave derivata viene creata a partire da una chiave sorgente, identificata 
    * interamente dal suo keyID, e da un seed (un array di byte) che viene usato per la derivazione.
    */
    r = smapi_derive_key(sh->new_keyID, sh->src_keyID, sh->digest, 32);

    // 3) Preparo l'IV (vettore di inizializzazione). Se è tutto zero, ne genero uno random
    int all_zero = 1;
    for (int i = 0; i < 16; ++i){
        if (sh->iv[i] != 0) { all_zero = 0; break; }
    }
    if (all_zero) {
        // genero un IV con 4 numeri random da 32 bit (= 16 bytes totali)
        uint32_t r1 = (uint32_t)smapi_random_num();
        uint32_t r2 = (uint32_t)smapi_random_num();
        uint32_t r3 = (uint32_t)smapi_random_num();
        uint32_t r4 = (uint32_t)smapi_random_num();
        memcpy(sh->iv + 0, &r1, 4);
        memcpy(sh->iv + 4, &r2, 4);
        memcpy(sh->iv + 8, &r3, 4);
        memcpy(sh->iv + 12, &r4, 4);
    }

    // 4) Preparo il testo da cifrare, limito la lunghezza e aggiungo padding a 16 byte
    size_t in_len = sh->ptext_len;
    if (in_len > sizeof(sh->ptext)) in_len = sizeof(sh->ptext);
    size_t blen = round_up16(in_len);
    if (blen > sizeof(sh->ctext)) {
        sh->retval = -1;
        return -1;
    }
    uint8_t tmp_in[256];
    memset(tmp_in, 0, blen);
    memcpy(tmp_in, sh->ptext, in_len);

    // 5) Cifro con la chiave derivata 
    r = smapi_encrypt_data_aescbc(sh->new_keyID, tmp_in, blen, sh->iv, sh->ctext);
    if (r != 0) {
        sh->ctext_len = 0;
        sh->retval = r;
        return r;
    }
    sh->ctext_len = (uint32_t)blen;

    // 6) Decifro subito per controllare che tutto sia andato a buon fine
    uint8_t tmp_out[256];
    r = smapi_decrypt_data_aescbc(sh->new_keyID, sh->ctext, sh->ctext_len, sh->iv, tmp_out);
    if (r != 0) {
        sh->retval = r;
        return r;
    }
    // 7) Copio solo i byte originali (visto che ho usato zero padding)
    memset(sh->dec_ptext, 0, sizeof(sh->dec_ptext));
    memcpy(sh->dec_ptext, tmp_out, in_len);

    if (in_len < sizeof(sh->dec_ptext)) {
        sh->dec_ptext[in_len] = '\0';  
    }

    sh->retval = 0;
    return 0;
}

/*
* FUNZIONE PER CONFRONTO DI CIFRATURA AES-CBC SOFTWARE/HARDWARE
* La funzione esegue le seguenti operazioni:
* 1) Calcola il digest autenticato e lo copia in shared memory
* 2) Deriva una nuova chiave usando src_keyID e seed=digest
* 3) Prepara l'IV: se è nullo, ne genera uno random
* 4) Prepara il plaintext, lo riduco se eccede e aggiungo padding
* 5) Confronto tra cifratura AES-CBC software e hardware
* 6) Verifica dei risultati
*/
long func4(void *p)
{
    struct shared_crypto *sh = (struct shared_crypto *)p;
    uint8_t digest[32];
    int r;
    if (!sh) return -1;

    /*1) Calcolo il digest e lo metto nella shared memory*/
    r = smapi_get_authd_digest(0, digest);
    if (r != 0) {
        sh->retval = r;
        return r;
    }
    memcpy(sh->digest, digest, 32);

    /*2) Creo la nuova chiave usando quella di partenza e il digest*/
    if (sh->src_keyID[0] == '\0' || sh->new_keyID[0] == '\0') {
        sh->retval = -1;
        return -1;
    }

    r = smapi_derive_key(sh->new_keyID, sh->src_keyID, sh->digest, 32);

    /*3) Preparo l'IV: se è nullo, ne genero uno random*/
    int all_zero = 1;
    for (int i = 0; i < 16; ++i) if (sh->iv[i] != 0) { all_zero = 0; break; }
    if (all_zero) {
        // genero IV con 4 numeri random da 32 bit = 16 byte
        uint32_t r1 = (uint32_t)smapi_random_num();
        uint32_t r2 = (uint32_t)smapi_random_num();
        uint32_t r3 = (uint32_t)smapi_random_num();
        uint32_t r4 = (uint32_t)smapi_random_num();
        memcpy(sh->iv + 0, &r1, 4);
        memcpy(sh->iv + 4, &r2, 4);
        memcpy(sh->iv + 8, &r3, 4);
        memcpy(sh->iv + 12, &r4, 4);
    }

    /*4) Preparo il plaintext, lo riduco se eccede e aggiungo padding in caso sia necessario*/
    size_t in_len = sh->ptext_len;
    if (in_len > sizeof(sh->ptext)) in_len = sizeof(sh->ptext);
    size_t blen = round_up16(in_len);
    if (blen > sizeof(sh->ctext)) {
        sh->retval = -1;
        return -1;
    }

    static uint8_t tmp_in[256];
    memset(tmp_in, 0, blen);
    memcpy(tmp_in, sh->ptext, in_len);

    /********************************************/
    /* 5) CONFRONTO TRA AES SOFTWARE E HARDWARE */
    /********************************************/

    // Salvo i dati originali per il confronto
    uint8_t original_iv[16];
    memcpy(original_iv, sh->iv, 16);
    
    // Buffer per i risultati delle due versioni (ridotti per evitare stack overflow)
    static uint8_t sw_ctext[256], hw_ctext[256];
    static uint8_t sw_dec[256], hw_dec[256];
    
    // === TEST AES SOFTWARE ===
    // Riazzero l'IV per il test software
    memcpy(sh->iv, original_iv, 16);
    
    // Cifratura software
    r = smapi_encrypt_data_aescbc(sh->new_keyID, tmp_in, blen, sh->iv, sw_ctext);
    if (r != 0) {
        sh->retval = r;
        return r;
    }
    
    // Decifratura software
    r = smapi_decrypt_data_aescbc(sh->new_keyID, sw_ctext, blen, sh->iv, sw_dec);
    if (r != 0) {
        sh->retval = r;
        return r;
    }
    
    // === TEST AES HARDWARE ===
    // Riazzero l'IV per il test hardware
    memcpy(sh->iv, original_iv, 16);
    
    //L'hardware AES usa la stessa chiave derivata per coerenza
    
    // Cifratura hardware (ora usa keyID come il software)
    r = smapi_hw_aes_encrypt_cbc(sh->new_keyID, tmp_in, blen, sh->iv, hw_ctext);
    if (r != 0) {
        sh->retval = r;
        return r;
    }
    
    // Decifratura hardware (ora usa keyID come il software)
    r = smapi_hw_aes_decrypt_cbc(sh->new_keyID, hw_ctext, blen, sh->iv, hw_dec);
    if (r != 0) {
        sh->retval = r;
        return r;
    }

    /*****************************/
    /* 6) VERIFICA DEI RISULTATI */
    /*****************************/

    int results_match = 1;
    // Confronto i testi decifrati (solo i primi in_len byte)
    if (memcmp(sw_dec, hw_dec, in_len) != 0) {
        results_match = 0;
    }
    
    // Controllo anche rispetto all'input originale
    if (memcmp(tmp_in, sw_dec, in_len) != 0) {
        results_match = 0;
    }
    
    if (memcmp(tmp_in, hw_dec, in_len) != 0) {
        results_match = 0;
    }
    
    // Copio i risultati hardware nella memoria condivisa
    memcpy(sh->ctext, hw_ctext, blen);
    sh->ctext_len = (uint32_t)blen;
    
    memset(sh->dec_ptext, 0, sizeof(sh->dec_ptext));
    memcpy(sh->dec_ptext, hw_dec, in_len);
    if (in_len < sizeof(sh->dec_ptext)) {
        sh->dec_ptext[in_len] = '\0';  
    }

    sh->retval = results_match ? 0 : -1;
    return sh->retval;
}

/*
* Registrare le funzioni di servizio nell'enclave
* permette di potervi accedere dall'esterno facendo
* riferimento al rispettivo indice associato.
* E' un'operazione necessaria per richiamare le 
* funzioni di servizio dall'esterno.
*/

REGISTER_SE_SERVICE(func1, 0);
REGISTER_SE_SERVICE(func2, 1);
REGISTER_SE_SERVICE(func3, 2);
REGISTER_SE_SERVICE(func4, 3);
