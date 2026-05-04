#include "aes_eax.h"
#include "profiler.h"
#include <string.h>

/*************
 * AES EAX MODE 
 * Based on The EAX MODE of Operation 
 * Input: 
 * - Nonce N (Nonce_len) 
 * - Message M (in_len) 
 * - Header H (Associated Data) (header_len)  
 * - Tag Length (tag_len) 
 * - Key K 
 * 
 * Procedure: 
 * N' = OMAC^0 (N) Tweak = 0 (concatenazione della rapprs. binaria di 0) 
 * H' = OMAC^1 (H) Tweak = 1 ('''''' di 1) 
 * C = AES-CTR (M, N') (N' viene usato come counter) 
 * C' = OMAC^2 (C) Tweak = 2 
 *
 * Tag = N' XOR C' XOR H' (Troncato a tag_len) 
 *
 * Output: C || Tag
 *
 * As ecall allows us to pass a maximum of 6 parameters we need to encapsule params in a struct 
 * or pass an array of bytes which must be structured in a specific way 
 *
 *
*************/


/* SOFTWARE */ 

int sm_software_aes_eax_encrypt(eax_params *eax_p, BYTE *output, size_t tag_len, const WORD key[], int keysize) {
    PROFILE("sw_aes_eax_encrypt")
    {
        BYTE counter[AES_BLOCK_SIZE] = {0};

        keys_cmac k_cmac;
        if (!sm_software_aes_cmac_subkey_gen(&k_cmac, key, keysize)) return 0;

        // AES-CMAC for Nonce to obtain N'
        size_t nonce_len = eax_p->nonce_len;

        BYTE n_cmac[AES_BLOCK_SIZE];
        BYTE n_input[AES_BLOCK_SIZE + nonce_len];

        // NOTE: counter is not modified because tweak for Nonce is binary representation of 0
        memcpy(n_input, counter, AES_BLOCK_SIZE);
        memcpy(n_input + AES_BLOCK_SIZE, eax_p->nonce, nonce_len);
        if (!sm_software_aes_cmac_with_keys(n_input, AES_BLOCK_SIZE + nonce_len, n_cmac, AES_BLOCK_SIZE, &k_cmac, key, keysize)) return 0;
        printf("\n[SM_SW_EAX_ENC] Nonce CMAC in Encryption: 0x");
        for (size_t i = 0; i < AES_BLOCK_SIZE; i++) {
            printf("%02X", n_cmac[i]);
        };
        printf("\n");

        // AES-CMAC for Header to obtain H'
        size_t header_len = eax_p->header_len;
        BYTE h_cmac[AES_BLOCK_SIZE];
        BYTE h_input[AES_BLOCK_SIZE + header_len];
        counter[AES_BLOCK_SIZE - 1] = 0x01; // Tweak for Header is binary representation of 1

        memcpy(h_input, counter, AES_BLOCK_SIZE);
        memcpy(h_input + AES_BLOCK_SIZE, eax_p->header, header_len);
        if (!sm_software_aes_cmac_with_keys(h_input, AES_BLOCK_SIZE + header_len, h_cmac, AES_BLOCK_SIZE, &k_cmac, key, keysize)) return 0;
        printf("\n[SM_SW_EAX_ENC] Header CMAC in Encryption: 0x");
        for (size_t i = 0; i < AES_BLOCK_SIZE; i++) {
            printf("%02X", h_cmac[i]);
        };
        printf("\n");

        // AES-CTR to obtain C
        size_t in_len = eax_p->in_len;
        BYTE C[in_len];
        if (!sm_software_aes_encrypt_ctr(eax_p->in, C, in_len, key, keysize, n_cmac)) return 0;

        // AES-CMAC for Ciphertext to obtain C'
        BYTE c_cmac[AES_BLOCK_SIZE];
        BYTE c_input[AES_BLOCK_SIZE + in_len];
        counter[AES_BLOCK_SIZE - 1] = 0x02; // Tweak for Cipher Text is binary representation of 2

        memcpy(c_input, counter, AES_BLOCK_SIZE);
        memcpy(c_input + AES_BLOCK_SIZE, C, in_len);
        if (!sm_software_aes_cmac_with_keys(c_input, AES_BLOCK_SIZE + in_len, c_cmac, AES_BLOCK_SIZE, &k_cmac, key, keysize)) return 0;
        printf("\n[SM_SW_EAX_ENC] Cipher CMAC in Encryption: 0x");
        for (size_t i = 0; i < AES_BLOCK_SIZE; i++) {
            printf("%02X", c_cmac[i]);
        };
        printf("\n");

        BYTE tag[tag_len];

        for (size_t i = 0; i < tag_len; i++) {
            tag[i] = (BYTE)(n_cmac[i] ^ c_cmac[i] ^ h_cmac[i]);  // XOR
        };

        memcpy(output, C, in_len);
        memcpy(output + in_len, tag, tag_len);
    };
    return 1;
};

int sm_software_aes_eax_decrypt(eax_params *eax_p, BYTE *valid, BYTE *output, size_t tag_len, const WORD key[], int keysize) {
    PROFILE("sw_aes_eax_decrypt")
    {
        *valid = 1;
        if (eax_p->in_len < tag_len) {
            *valid = 0;
            return 1;
        }

        // CT (in_len = c_len + tag_len) = C (in_len - tag_len) || T (tag_len)
        size_t c_len = eax_p->in_len - tag_len;

        printf("\n[SM_SW_EAX_DEC] in_len = %zu\n", eax_p->in_len);
        printf("[SM_SW_EAX_DEC] tag_len = %zu\n", tag_len);
        printf("[SM_SW_EAX_DEC] c_len = %zu\n", c_len);

        BYTE ct[c_len];
        memcpy(ct, eax_p->in, c_len);
        BYTE tag_rec[tag_len];
        memcpy(tag_rec, eax_p->in + c_len, tag_len);

        BYTE counter[AES_BLOCK_SIZE] = {0};

        keys_cmac k_cmac;
        if (!sm_software_aes_cmac_subkey_gen(&k_cmac, key, keysize)) return 0;

        // AES-CMAC for Nonce to obtain N'
        size_t nonce_len = eax_p->nonce_len;

        BYTE n_cmac[AES_BLOCK_SIZE];
        BYTE n_input[AES_BLOCK_SIZE + nonce_len];

        printf("\n[SM_SW_EAX_DEC] Tweak Nonce in Decryption: 0x");
        for (size_t i = 0; i < AES_BLOCK_SIZE; i++) {
            printf("%02X", counter[i]);
        };
        printf("\n");

        // NOTE: counter is not modified because tweak for Nonce is binary representation of 0
        memcpy(n_input, counter, AES_BLOCK_SIZE);
        memcpy(n_input + AES_BLOCK_SIZE, eax_p->nonce, nonce_len);
        if (!sm_software_aes_cmac_with_keys(n_input, AES_BLOCK_SIZE + nonce_len, n_cmac, AES_BLOCK_SIZE, &k_cmac, key, keysize)) return 0;
        printf("\n[SM_SW_EAX_DEC] Nonce CMAC in Decryption: 0x");
        for (size_t i = 0; i < AES_BLOCK_SIZE; i++) {
            printf("%02X", n_cmac[i]);
        };
        printf("\n");

        // AES-CMAC for Header to obtain H'
        size_t header_len = eax_p->header_len;
        BYTE h_cmac[AES_BLOCK_SIZE];
        BYTE h_input[AES_BLOCK_SIZE + header_len];
        counter[AES_BLOCK_SIZE - 1] = 0x01; // Tweak for Header is binary representation of 1

        printf("[SM_SW_EAX_DEC] Tweak Header in Decryption: 0x");
        for (size_t i = 0; i < AES_BLOCK_SIZE; i++) {
            printf("%02X", counter[i]);
        };
        printf("\n");

        memcpy(h_input, counter, AES_BLOCK_SIZE);
        memcpy(h_input + AES_BLOCK_SIZE, eax_p->header, header_len);
        if (!sm_software_aes_cmac_with_keys(h_input, AES_BLOCK_SIZE + header_len, h_cmac, AES_BLOCK_SIZE, &k_cmac, key, keysize)) return 0;
        printf("\n[SM_SW_EAX_DEC] Header CMAC in Decryption: 0x");
        for (size_t i = 0; i < AES_BLOCK_SIZE; i++) {
            printf("%02X", h_cmac[i]);
        };
        printf("\n");

        // AES-CMAC for Ciphertext to obtain C'
        BYTE c_cmac[AES_BLOCK_SIZE];
        BYTE c_input[AES_BLOCK_SIZE + c_len];
        counter[AES_BLOCK_SIZE - 1] = 0x02; // Tweak for Cipher Text is binary representation of 2

        printf("[SM_SW_EAX_DEC] Tweak Cipher in Decryption: 0x");
        for (size_t i = 0; i < AES_BLOCK_SIZE; i++) {
            printf("%02X", counter[i]);
        };
        printf("\n");

        memcpy(c_input, counter, AES_BLOCK_SIZE);
        memcpy(c_input + AES_BLOCK_SIZE, ct, c_len);
        if (!sm_software_aes_cmac_with_keys(c_input, AES_BLOCK_SIZE + c_len, c_cmac, AES_BLOCK_SIZE, &k_cmac, key, keysize)) return 0;
        printf("\n[SM_SW_EAX_DEC] Cipher CMAC in Decryption: 0x");
        for (size_t i = 0; i < AES_BLOCK_SIZE; i++) {
            printf("%02X", c_cmac[i]);
        };
        printf("\n");

        BYTE tag[tag_len];

        for (size_t i = 0; i < tag_len; i++) {
            tag[i] = (BYTE)(n_cmac[i] ^ c_cmac[i] ^ h_cmac[i]);  // XOR
        };

        printf("[SM_SW_EAX_DEC] Tag Obtained in Decryption: 0x");
        for (size_t i = 0; i < tag_len; i++) {
            printf("%02X", tag[i]);
        };
        printf("\n");

        if (memcmp(tag, tag_rec, tag_len) != 0) {
            *valid = 0;
            return 1;
        };

        // AES-CTR to obtain M
        if (!sm_software_aes_encrypt_ctr(ct, output, c_len, key, keysize, n_cmac)) return 0;
    };
    return 1;
};




/* HARDWARE */ 


int sm_hardware_aes_eax_encrypt(eax_params *eax_p, uint8_t *output, size_t tag_len, const uint8_t *key){ 
	PROFILE("hw_aes_eax_encrypt")
	{ 
	
		if (!sm_hardware_aes_init()) return 0;

		// define counters 
		uint8_t counter[AES_BLOCK_SIZE] = {0}; 	
		
		keys_cmac k_cmac; 
		if(!sm_hardware_aes_cmac_subkey_gen(&k_cmac, key)) return 0;
		
		// AES-CMAC for Nonce to obtain N'
		size_t nonce_len = eax_p->nonce_len; 
			
		uint8_t n_cmac[AES_BLOCK_SIZE]; 
		uint8_t n_input[AES_BLOCK_SIZE + nonce_len]; 
		
		
		// NOTE: counter is not modified because tweak for Nonce is binary representation of 0
		memcpy(n_input, counter, AES_BLOCK_SIZE); 
		memcpy(n_input + AES_BLOCK_SIZE, eax_p->nonce, nonce_len);  

		if(!sm_hardware_aes_cmac_with_keys(n_input, AES_BLOCK_SIZE + nonce_len, n_cmac, AES_BLOCK_SIZE, &k_cmac)) return 0; 


		printf("\n[SM_HW_EAX_ENC] Nonce CMAC in Encryption: 0x"); 
		for(size_t i=0; i < AES_BLOCK_SIZE; i++){
			printf("%02X", n_cmac[i]); 
		}; 		
		printf("\n"); 



		// AES-CMAC for Header to obtaint H' 
		
		size_t header_len = eax_p->header_len; 
		uint8_t h_cmac[AES_BLOCK_SIZE]; 
		uint8_t h_input[AES_BLOCK_SIZE + header_len]; 
		counter[AES_BLOCK_SIZE - 1] = 0x01; // Tweak for Header is binary representation of 1
					
		memcpy(h_input, counter, AES_BLOCK_SIZE); 
		memcpy(h_input + AES_BLOCK_SIZE, eax_p->header, header_len); 

		if(!sm_hardware_aes_cmac_with_keys(h_input, AES_BLOCK_SIZE + header_len, h_cmac, AES_BLOCK_SIZE, &k_cmac)) return 0;

		
		printf("\n[SM_HW_EAX_ENC] Header CMAC in Encryption: 0x"); 
		for(size_t i=0; i < AES_BLOCK_SIZE; i++){
			printf("%02X", h_cmac[i]); 
		}; 		
		printf("\n"); 


		// AES-CTR to obtain C
		
		size_t in_len = eax_p->in_len; 
		uint8_t C[in_len]; 
		if(!sm_hardware_aes_encrypt_ctr(eax_p->in, C, in_len, key, n_cmac)) return 0;
		
		// AES-CMAC for Ciphertext to obtain C' 
		uint8_t c_cmac[AES_BLOCK_SIZE]; 
		uint8_t c_input[AES_BLOCK_SIZE + in_len]; 

		counter[AES_BLOCK_SIZE - 1] = 0x02; // Tweak for Cipher Text is binary representation of 2
				
		memcpy(c_input, counter, AES_BLOCK_SIZE); 
		memcpy(c_input + AES_BLOCK_SIZE, C, in_len); 
		if(!sm_hardware_aes_cmac_with_keys(c_input, AES_BLOCK_SIZE + in_len, c_cmac, AES_BLOCK_SIZE, &k_cmac)) return 0; 

		printf("\n[SM_HW_EAX_ENC] Cipher CMAC in Encryption: 0x"); 
		for(size_t i=0; i < AES_BLOCK_SIZE; i++){
			printf("%02X", c_cmac[i]); 
		}; 		
		printf("\n"); 
		
		uint8_t tag[tag_len]; 
       		
		for(size_t i = 0; i < tag_len; i++) 
		{
			tag[i] = (uint8_t) (n_cmac[i] ^ c_cmac[i] ^ h_cmac[i]);  // XOR 

		}; 
			
		memcpy(output, C, in_len);
	       	memcpy(output + in_len, tag, tag_len); 

	}; 
	return 1; 

}; 	



/*  Algorithm EAX.Decrypt (CT)  
  
    if len(CT) < TAG_LEN then return INVALID
    Let C ‖ T ← CT where |T| = TAG_LEN
    N' = AES_CMAC_128(TEK, [0]_2 || N) 
    H' = AES_CMAC_128(TEK, [1]_2 || H) 
    C' = AES_CMAC_128(TEK, [2]_2 || C) 

    Tag' = N XOR C XOR H 
    T′ = Tag′ [first TAG_LEN bits]
    if T = T′ then return I NVALID
	
    M = AES-CTR(TEK, N' (counter), C) 
    return M
*/ 



int sm_hardware_aes_eax_decrypt(eax_params *eax_p, uint8_t *valid, uint8_t *output, size_t tag_len, const uint8_t *key){ 
	PROFILE("hw_aes_eax_decrypt")
	{ 
	
		if (!sm_hardware_aes_init()) return 0;
		
		*valid = 1; 
		if (eax_p->in_len < tag_len) 
		{ 
			*valid = 0;
			return 1; 
		} 	

		/* IN input abbiamo il Ciphertext concatenato con il Tag */ 
			
		// CT (in_len = c_len + tag_len) = C (in_len - tag_len)|| T (tag_len)
		size_t c_len = eax_p->in_len - tag_len; 

		
		printf("\n[SM_HW_EAX_DEC] in_len = %zu\n", eax_p->in_len);
		printf("[SM_HW_EAX_DEC] tag_len = %zu\n", tag_len);
		printf("[SM_HW_EAX_DEC] c_len = %zu\n", c_len);



		/* Si procede con la separazione delle due parti */ 
		uint8_t ct[c_len]; 
		memcpy(ct, eax_p->in, c_len); 

		uint8_t tag_rec[tag_len]; 
		memcpy(tag_rec, eax_p->in + c_len, tag_len); 

		// define counters 
		uint8_t counter[AES_BLOCK_SIZE] = {0}; 	
		
		keys_cmac k_cmac; 
		if(!sm_hardware_aes_cmac_subkey_gen(&k_cmac, key)) return 0;
		
		// AES-CMAC for Nonce to obtain N'
		size_t nonce_len = eax_p->nonce_len; 
			
		uint8_t n_cmac[AES_BLOCK_SIZE]; 
		uint8_t n_input[AES_BLOCK_SIZE + nonce_len]; 	
	
		
		printf("\n[SM_HW_EAX_DEC] Tweak Nonce in Decryption: 0x"); 
		for(size_t i=0; i < AES_BLOCK_SIZE; i++){
			printf("%02X", counter[i]); 
		}; 		
		printf("\n"); 

		// NOTE: counter is not modified because tweak for Nonce is binary representation of 0
		memcpy(n_input, counter, AES_BLOCK_SIZE); 
		memcpy(n_input + AES_BLOCK_SIZE, eax_p->nonce, nonce_len);  

		if(!sm_hardware_aes_cmac_with_keys(n_input, AES_BLOCK_SIZE + nonce_len, n_cmac, AES_BLOCK_SIZE, &k_cmac)) return 0; 

		printf("\n[SM_HW_EAX_DEC] Nonce CMAC in Decryption: 0x"); 
		for(size_t i=0; i < AES_BLOCK_SIZE; i++){
			printf("%02X", n_cmac[i]); 
		}; 		
		printf("\n"); 

		// AES-CMAC for Header to obtain H' 
		
		size_t header_len = eax_p->header_len; 
		uint8_t h_cmac[AES_BLOCK_SIZE]; 
		uint8_t h_input[AES_BLOCK_SIZE + header_len]; 
		counter[AES_BLOCK_SIZE - 1] = 0x01; // Tweak for Header is binary representation of 1

		
		printf("[SM_HW_EAX_DEC] Tweak Header in Decryption: 0x"); 
		for(size_t i=0; i < AES_BLOCK_SIZE; i++){
			printf("%02X", counter[i]); 
		}; 		
		printf("\n"); 

		memcpy(h_input, counter, AES_BLOCK_SIZE); 
		memcpy(h_input + AES_BLOCK_SIZE, eax_p->header, header_len); 

		if(!sm_hardware_aes_cmac_with_keys(h_input, AES_BLOCK_SIZE + header_len, h_cmac, AES_BLOCK_SIZE, &k_cmac)) return 0;

		
		printf("\n[SM_HW_EAX_DEC] Header CMAC in Decryption: 0x"); 
		for(size_t i=0; i < AES_BLOCK_SIZE; i++){
			printf("%02X", h_cmac[i]); 
		}; 		
		printf("\n"); 
		
		
		// AES-CMAC for Ciphertext to obtain C' 
		uint8_t c_cmac[AES_BLOCK_SIZE]; 
		uint8_t c_input[AES_BLOCK_SIZE + c_len]; 

		counter[AES_BLOCK_SIZE - 1] = 0x02; // Tweak for Cipher Text is binary representation of 2
			
		
		printf("[SM_HW_EAX_DEC] Tweak Cipher in Decryption: 0x"); 
		for(size_t i=0; i < AES_BLOCK_SIZE; i++){
			printf("%02X", counter[i]); 
		}; 		
		printf("\n"); 

		memcpy(c_input, counter, AES_BLOCK_SIZE); 
		memcpy(c_input + AES_BLOCK_SIZE, ct, c_len);  
		if(!sm_hardware_aes_cmac_with_keys(c_input, AES_BLOCK_SIZE + c_len, c_cmac, AES_BLOCK_SIZE, &k_cmac)) return 0; 

		
		printf("\n[SM_HW_EAX_DEC] Cipher CMAC in Decryption: 0x"); 
		for(size_t i=0; i < AES_BLOCK_SIZE; i++){
			printf("%02X", c_cmac[i]); 
		}; 		
		printf("\n"); 
		
		
		uint8_t tag[tag_len]; 
       		
		for(size_t i = 0; i < tag_len; i++) 
		{
			tag[i] = (uint8_t) (n_cmac[i] ^ c_cmac[i] ^ h_cmac[i]);  // XOR 

		}; 
			
		/* 
	        The memcmp() function returns  an  integer  less  than,  equal  to,  or
	        greater than zero if the first n bytes of s1 is found, respectively, to
	        be less than, to match, or be greater than the first n bytes of s2.
		*/

		printf("[SM_HW_EAX_DEC] Tag Obtained in Decryption: 0x"); 
		for(size_t i=0; i < tag_len; i++){
			printf("%02X", tag[i]); 
		}; 		
		printf("\n"); 
		
		if(memcmp(tag, tag_rec, tag_len) != 0) {
			*valid = 0; 
			return 1; 	
		}; 

		// AES-CTR to obtain M
		if(!sm_hardware_aes_encrypt_ctr(ct, output, c_len, key, n_cmac)) return 0;
	}; 
	return 1; 

}; 	
