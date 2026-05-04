#include "aes_ctr.h" 
#include "profiler.h"
#include <string.h>

#define AES_BLOCK_SIZE 16


void increment_counter(uint8_t *counter, size_t len)
{
        uint8_t *b = NULL;
        for(int i = len - 1; i >= 0; --i)
        {
                b = &counter[i];
                if(++(*b) != 0) break;
        };
};

// void aes_encrypt(const BYTE in[], BYTE out[], const WORD key[], int keysize)

			
int sm_software_aes_encrypt_ctr(const BYTE pt[], BYTE ct[], size_t in_len, const WORD key[], int keysize, const BYTE counter[]) {
	PROFILE("sw_aes_encrypt_ctr")
	{
	
		/* Modifica: Il counter non deve essere modificato in-place, è necessario copiarlo */ 
		BYTE c[AES_BLOCK_SIZE]; 
		memcpy(c, counter, 16); 

		size_t n = in_len / AES_BLOCK_SIZE; 
		if(in_len % AES_BLOCK_SIZE != 0) n++;
		
		BYTE keystream[n * AES_BLOCK_SIZE];  // In questo array sarà depositato il Keystream = la concatenazione dei risultati AES 

		for(size_t b = 0; b < n; b++)
		{
			increment_counter(c, AES_BLOCK_SIZE);
		        aes_encrypt(c, &keystream[b * AES_BLOCK_SIZE], key, keysize); 
		} 
	
		for(size_t i = 0; i < in_len; i++) 
		{
			ct[i] = (BYTE) (pt[i] ^ keystream[i]); 	// XOR tra il Plain Text e il Key stream 
		} 
	}; 

	return 1; 
}; 

int sm_software_aes_encrypt_mctr(const BYTE pt[], BYTE ct[], size_t in_len, size_t out_len, const WORD key[], int keysize) {
    PROFILE("sw_aes_encrypt_mctr")
    {
        if (in_len % AES_BLOCK_SIZE != 0) return 0;   // La lunghezza deve essere multiplo di AES_BLOCK_SIZE
        if (out_len % AES_BLOCK_SIZE != 0) return 0;  // La lunghezza dell'output deve essere multipla di AES_BLOCK_SIZE

        BYTE counter[AES_BLOCK_SIZE] = {0};
        BYTE inter[AES_BLOCK_SIZE];

        // Cifra il blocco iniziale (pt) via software
        aes_encrypt(pt, inter, key, keysize);

        // Calcoliamo quanti blocchi è necessario produrre
        size_t blocks = out_len / AES_BLOCK_SIZE;

        BYTE buf[AES_BLOCK_SIZE];  // Buffer nel quale viene inserito la XOR tra il risultato intermedio e il counter
        for (size_t b = 0; b < blocks; b++)
        {
            increment_counter(counter, AES_BLOCK_SIZE);  // Il counter parte da 1
            for (size_t k = 0; k < AES_BLOCK_SIZE; k++) buf[k] = (BYTE)(inter[k] ^ counter[k]);  // XOR

            aes_encrypt(buf, &ct[b * AES_BLOCK_SIZE], key, keysize);  // AES del buf via software
        }
    }
    return 1;  // Operazione completata con successo
}


/* HARDWARE */ 


/********
 * AES in Counter Mode 
 * Output is the same lenght as the input message so no out_len param 
********/ 

int sm_hardware_aes_encrypt_ctr(const uint8_t *pt, uint8_t *ct, size_t in_len, const uint8_t *key, uint8_t *counter) {
	PROFILE("hw_aes_encrypt_ctr")
	{
        	// if (in_len % AES_BLOCK_SIZE != 0) return 0;   // La lunghezza deve essere multiplo di AES_BLOCK_SIZE (dimensione blocco AES)

		// Verifica che l'hardware AES sia presente
		if (!sm_hardware_aes_init()) return 0;
		
		// Imposta la chiave nell'hardware
		sm_hardware_aes_set_key(key, AES_BLOCK_SIZE);
	       
		// Aspetta che l'hardware sia pronto
		if (!sm_hardware_aes_wait_ready(10000)) return 0;
	
		/* Modifica: Il counter non deve essere modificato in-place, è necessario copiarlo */ 
		uint8_t c[AES_BLOCK_SIZE]; 
		memcpy(c, counter, 16); 

		size_t n = in_len / AES_BLOCK_SIZE; 
		if(in_len % AES_BLOCK_SIZE != 0) n++;
		
		uint8_t keystream[n * AES_BLOCK_SIZE];  // In questo array sarà depositato il Keystream = la concatenazione dei risultati AES 

		for(size_t b = 0; b < n; b++)
		{
			increment_counter(c, AES_BLOCK_SIZE); 
			if (!sm_hardware_aes_encrypt_block(c, &keystream[b * AES_BLOCK_SIZE])) return 0; 
		} 
	
		for(size_t i = 0; i < in_len; i++) 
		{
			ct[i] = (uint8_t) (pt[i] ^ keystream[i]); 	// XOR tra il Plain Text e il Key stream 
		} 
	}; 

	return 1; 
}; 


/* Modified Counter Mode */ 

int sm_hardware_aes_encrypt_mctr(const uint8_t *pt, uint8_t *ct, size_t in_len, size_t out_len, 
                                const uint8_t *key) {
    PROFILE("hw_aes_encrypt_mctr")
    {
        if (in_len % AES_BLOCK_SIZE != 0) return 0;   // La lunghezza deve essere multiplo di AES_BLOCK_SIZE (dimensione blocco AES)
	if (out_len % AES_BLOCK_SIZE != 0) return 0;  // La lunghezza dell'output deve essere multipla di AES_BLOCK_SIZE 
        
	// Verifica che l'hardware AES sia presente
        if (!sm_hardware_aes_init()) return 0;
        
        // Imposta la chiave nell'hardware
        sm_hardware_aes_set_key(key, AES_BLOCK_SIZE);
       
        // Aspetta che l'hardware sia pronto
        if (!sm_hardware_aes_wait_ready(10000)) return 0;
        
        
	uint8_t counter[AES_BLOCK_SIZE] = {0}; 
	uint8_t inter[AES_BLOCK_SIZE]; 

	
        // Cifra il blocco rise
        if (!sm_hardware_aes_encrypt_block(pt, inter)) return 0;
       
	// Calcoliamo quanti blocchi è necessario produrre 	
        size_t blocks = out_len / AES_BLOCK_SIZE;
        
	uint8_t buf[AES_BLOCK_SIZE];  // Buffer nel quale viene inserito la XOR tra il risultato intermedio e il counter 

   	for(size_t b = 0; b < blocks; b++)
       	{
	   	increment_counter(counter, AES_BLOCK_SIZE); // Il counter parte da 1  
		for(size_t k = 0; k < AES_BLOCK_SIZE; k++) buf[k] = (uint8_t) (inter[k] ^ counter[k]);  // XOR 
		
            	if (!sm_hardware_aes_encrypt_block(buf, &ct[b*AES_BLOCK_SIZE])) return 0; // AES del buf 
	}; 		
            
    }
    return 1;  // Operazione completata con successo
}

