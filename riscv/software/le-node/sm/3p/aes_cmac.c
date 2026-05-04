#include "aes_cmac.h" 
#include "profiler.h"
#include <string.h>

#define AES_BLOCK_SIZE 16

void shift_string(uint8_t *b){

        int carry = 0;
        int new_carry = 0;
        for(int i = AES_BLOCK_SIZE-1; i >= 0; --i)
        {
                uint8_t *bt = &b[i];
                new_carry = ((*bt) >> 7) & 1;
                *bt = *bt << 1;
                if(i != AES_BLOCK_SIZE-1) *bt |= carry;
                carry = new_carry;
        };
};

int get_msb_value(uint8_t *bt){
        return (*bt >> 7) & 1;

};

/* SOFTWARE */ 

int sm_software_aes_cmac_subkey_gen(keys_cmac *k_cmac, const WORD key[], int keysize) {
    PROFILE("sw_aes_cmac_subkey")
    {
        BYTE rb[AES_BLOCK_SIZE] = {0};
        rb[AES_BLOCK_SIZE - 1] = 0x87;

        memset(k_cmac, 0, sizeof(*k_cmac));

        BYTE L[AES_BLOCK_SIZE];
        const BYTE zero[AES_BLOCK_SIZE] = {0};

        aes_encrypt(zero, L, key, keysize);

        int msb = get_msb_value(&L[0]);

        shift_string(L);
        if (msb == 1) {
            for (size_t k = 0; k < AES_BLOCK_SIZE; k++) L[k] = (BYTE)(L[k] ^ rb[k]);
        };

        memcpy(k_cmac->k1, L, AES_BLOCK_SIZE);

        BYTE buf[AES_BLOCK_SIZE];
        memcpy(buf, k_cmac->k1, AES_BLOCK_SIZE);

        msb = get_msb_value(&buf[0]);

        shift_string(buf);
        if (msb == 1) {
            for (size_t k = 0; k < AES_BLOCK_SIZE; k++) buf[k] = (BYTE)(buf[k] ^ rb[k]);
        };

        memcpy(k_cmac->k2, buf, AES_BLOCK_SIZE);
    };
    return 1;
};

int sm_software_aes_cmac(const BYTE in[], size_t in_len, BYTE out[], size_t out_len, const WORD key[], int keysize) {
    PROFILE("sw_aes_cmac")
    {
        if (out_len > AES_BLOCK_SIZE || out_len == 0) return 0;

        keys_cmac k_cmac;
        if (!sm_software_aes_cmac_subkey_gen(&k_cmac, key, keysize)) return 0;

        size_t num_blocks = 0;
        size_t significant_bytes = 0;

        BYTE input[in_len + AES_BLOCK_SIZE];
        memset(input, 0, sizeof(input));
        memcpy(input, in, in_len);

        int flag = 0;

        if (in_len == 0) {
            num_blocks = 1;
            flag = 0;
        } else {
            significant_bytes = in_len % AES_BLOCK_SIZE;
            if (significant_bytes != 0) {
                num_blocks = (in_len / AES_BLOCK_SIZE) + 1;
                flag = 1;
            } else {
                num_blocks = in_len / AES_BLOCK_SIZE;
                flag = 0;
            };
        }

        BYTE *bt = &input[(num_blocks - 1) * AES_BLOCK_SIZE];

        if (flag) {
            bt[significant_bytes] = 0x80;
            for (size_t k = 0; k < AES_BLOCK_SIZE; k++) bt[k] = (BYTE)(bt[k] ^ k_cmac.k2[k]);
        } else {
            for (size_t k = 0; k < AES_BLOCK_SIZE; k++) bt[k] = (BYTE)(bt[k] ^ k_cmac.k1[k]);
        }

        BYTE prev[AES_BLOCK_SIZE] = {0};

        for (size_t b = 0; b < num_blocks; ++b) {
            BYTE *pi = &input[b * AES_BLOCK_SIZE];
            for (size_t k = 0; k < AES_BLOCK_SIZE; k++) pi[k] = (BYTE)(pi[k] ^ prev[k]);
            aes_encrypt(pi, prev, key, keysize);
        };

        memcpy(out, prev, out_len);
    };
    return 1;
};

int sm_software_aes_cmac_with_keys(const BYTE in[], size_t in_len, BYTE out[], size_t out_len, keys_cmac *k_cmac, const WORD key[], int keysize) {
    PROFILE("sw_aes_cmac_with_keys")
    {
        if (out_len > AES_BLOCK_SIZE || out_len == 0) return 0;

        // NO SUBKEY GENERATION

        size_t num_blocks = 0;
        size_t significant_bytes = 0;

        int flag = 0;

        BYTE input[in_len + AES_BLOCK_SIZE];
        memset(input, 0, sizeof(input));
        memcpy(input, in, in_len);

        if (in_len == 0) {
            num_blocks = 1;
            flag = 0;
        } else {
            significant_bytes = in_len % AES_BLOCK_SIZE;
            if (significant_bytes != 0) {
                num_blocks = (in_len / AES_BLOCK_SIZE) + 1;
                flag = 1;
            } else {
                num_blocks = in_len / AES_BLOCK_SIZE;
                flag = 0;
            };
        }

        BYTE *bt = &input[(num_blocks - 1) * AES_BLOCK_SIZE];

        if (flag) {
            bt[significant_bytes] = 0x80;
            for (size_t k = 0; k < AES_BLOCK_SIZE; k++) bt[k] = (BYTE)(bt[k] ^ k_cmac->k2[k]);
        } else {
            for (size_t k = 0; k < AES_BLOCK_SIZE; k++) bt[k] = (BYTE)(bt[k] ^ k_cmac->k1[k]);
        }

        BYTE prev[AES_BLOCK_SIZE] = {0};

        for (size_t b = 0; b < num_blocks; ++b) {
            BYTE *pi = &input[b * AES_BLOCK_SIZE];
            for (size_t k = 0; k < AES_BLOCK_SIZE; k++) pi[k] = (BYTE)(pi[k] ^ prev[k]);
            aes_encrypt(pi, prev, key, keysize);
        };

        memcpy(out, prev, out_len);
    };
    return 1;
};

int sm_software_aes_ckdf_counter(const BYTE in[], size_t in_len, BYTE out[], size_t out_len, const WORD key[], int keysize) {
    PROFILE("sw_aes_ckdf_counter")
    {
        if (out_len < AES_BLOCK_SIZE) return 0;

        keys_cmac k_cmac;
        if (!sm_software_aes_cmac_subkey_gen(&k_cmac, key, keysize)) return 0;

        BYTE input[4 + in_len];
        memcpy(input + 4, in, in_len);

        BYTE *counter = input;
        memset(counter, 0, 4);

        int flag = 0;
        size_t n = out_len / AES_BLOCK_SIZE;

        if (out_len % AES_BLOCK_SIZE != 0) {
            flag = 1;
            n += 1;
        }

        if (n > 0xFFFFFFFFu) return 0;

        for (size_t b = 0; b < n; ++b) {
            increment_counter(counter, 4);
            if (b != n - 1) {
                if (!sm_software_aes_cmac_with_keys(input, 4 + in_len, out + b * AES_BLOCK_SIZE, AES_BLOCK_SIZE, &k_cmac, key, keysize)) return 0;
            } else {
                size_t last_len = out_len % AES_BLOCK_SIZE;
                if (!flag) last_len = AES_BLOCK_SIZE;
                if (!sm_software_aes_cmac_with_keys(input, 4 + in_len, out + b * AES_BLOCK_SIZE, last_len, &k_cmac, key, keysize)) return 0;
            }
        };
    }
    return 1;
};



/* HARDWARE */ 

/****************
 * AES-CMAC (Cipher Based Message Authentication Code)   
 * Implenetation is based on RFC 4493: The AES-CMAC Algorithm 
 * It Requires a module whose aim is to generate two subkeys from the key  	
****************/	


int sm_hardware_aes_cmac_subkey_gen(keys_cmac *k_cmac, const uint8_t *key){
	PROFILE("hw_aes_cmac_subkey") 
	{ 
		
		// Verifica che l'hardware AES sia presente
        	if (!sm_hardware_aes_init()) return 0;
		
		// Imposta la chiave nell'hardware
		sm_hardware_aes_set_key(key, AES_BLOCK_SIZE);
		
		// Aspetta che l'hardware sia pronto
		if (!sm_hardware_aes_wait_ready(10000)) return 0;


		uint8_t rb[AES_BLOCK_SIZE] = {0};  // è necessaria una stringa costante che dipende dallo specifico algoritmo di cifratura
		rb[AES_BLOCK_SIZE-1] = 0x87; // 1000_0111 per AES 

		memset(k_cmac, 0, sizeof(*k_cmac)); // si inizializzano a 0 le due sottochiavi
		
		uint8_t L[AES_BLOCK_SIZE];    // L è il risultato della prima cifratura AES che prende in input un blocco di tutti 0  
		const uint8_t zero[AES_BLOCK_SIZE] = {0};  	
				
		if (!sm_hardware_aes_encrypt_block(zero, L)) return 0;
		
		int msb = get_msb_value(&L[0]);  // Ricaviamo MSB di L 
		
		// se il MSB di L è 1, per ottenere K1, oltre allo shift di L è necessario fare lo XOR con Rb 

		shift_string(L);
		if(msb == 1) 
		{
			for(size_t k = 0; k < AES_BLOCK_SIZE; k++) L[k] = (uint8_t) L[k] ^ rb[k]; 
		}; 

		memcpy(k_cmac->k1, L, AES_BLOCK_SIZE);
		
		// Per ricavare K2 invece si parte da K1, quindi salviamo K1 in un buffer

		uint8_t buf[AES_BLOCK_SIZE]; 
		memcpy(buf, k_cmac->k1, AES_BLOCK_SIZE); 

		msb = get_msb_value(&buf[0]);  // ricaviamo MSB di K1 

		// Come prima se MSB di K1, per ottenere K2, è necessario fare anche lo XOR con rb 

		shift_string(buf); 
		if(msb == 1)
		{	
			for(size_t k = 0; k < AES_BLOCK_SIZE; k++) buf[k] = (uint8_t) buf[k] ^ rb[k]; 
		}; 	

		memcpy(k_cmac->k2, buf, AES_BLOCK_SIZE); 

	}; 
	return 1; 
}; 	


int sm_hardware_aes_cmac(const uint8_t in[], size_t in_len, uint8_t out[], size_t out_len, const uint8_t *key){
	PROFILE("hw_aes_cmac") 
	{ 
		// out len è la lunghezza del mac desiderato (Non deve essere superiore alla dimensione del blocco o 0 
		if (out_len > AES_BLOCK_SIZE || out_len == 0) return 0;  
		if (!sm_hardware_aes_init()) return 0;


		// in questo caso la generazione è esplictamente riportata
		// in questa funzione non viene settata la chiave perchè viene fatto in subkey gen 

		keys_cmac k_cmac; 
		if(!sm_hardware_aes_cmac_subkey_gen(&k_cmac, key)) return 0;  
			
		// Parte l'algoritmo vero e proprio 
		
		size_t num_blocks = 0; 
		size_t significant_bytes = 0; 

		// l'algoritmo prevede di suddividere il messaggio in blocchi di dim pari al blocco di AES 
		// pottebbe però capitare che il messaggio non sia esattamente multiplo del block size
		// è necessario fare un padding in tal caso 

			
		uint8_t input[in_len + AES_BLOCK_SIZE]; // dichiariamo un array che al massimo avrà 16 byte in più 
		memset(input, 0, sizeof(input)); 
		memcpy(input, in, in_len); // Nei primi in_len byte si copia il messaggio  				


		int flag = 0; 

		if(in_len == 0)
		{
			num_blocks = 1; 
			flag = 0; 
		} 
		else 
		{
			significant_bytes = in_len % AES_BLOCK_SIZE; // numero di byte significativi nell'ultimo blocco  
			if(significant_bytes != 0)
			{
				// caso di concatenazione 
				// in particolare aggiungendo ulteriori byte a 0 per arrivare alla dimensione del blocco AES 	
				num_blocks = (in_len / AES_BLOCK_SIZE) + 1;
				flag = 1; // deve essere concatenato	
			}	 
			else
			{
				// Non c'è concatenazione 
				num_blocks = in_len / AES_BLOCK_SIZE; 
				flag = 0; 
			}; 
		} 

		// prendiamo il riferimento all'ultimo blocco 
		// la concatenazione infatti non va fatta semplicemente aggiungendo byte a 0 
		// ma aggiungendo una stringa di 1 seguita da tanti 0 tanti quanti sono necessari per raggiungere la dim del blocco 

		uint8_t *bt = &input[(num_blocks - 1) * AES_BLOCK_SIZE]; 

		if(flag)
		{
			// NOTA: il memset con 0 fatto inizilamente ci consente di avere già gli zeri finali 
			// che servono nel padding 
			bt[significant_bytes] = 0x80; // è necessario aggiungere solo quell'uno  
						     
			// NOTA 2: NEl caso del padding, il blocco fa XORato con K2
			for(size_t k=0; k < AES_BLOCK_SIZE; k++) bt[k] = (uint8_t) (bt[k] ^ k_cmac.k2[k]);  
		}
		else
		{
			// Nel caso non concatenato, il blocco va XORato con K1
			for(size_t k=0; k < AES_BLOCK_SIZE; k++) bt[k] = (uint8_t) (bt[k] ^ k_cmac.k1[k]);  

		}

		// A quel punto si procede con la Modalità Cifratura a blocchi  
		
		uint8_t prev[AES_BLOCK_SIZE] = {0}; 

		for(size_t b = 0; b < num_blocks; ++b)
		{
			uint8_t *pi = &input[b * AES_BLOCK_SIZE]; 
			for(size_t k = 0; k < AES_BLOCK_SIZE; k++) pi[k] = (uint8_t) (pi[k] ^ prev[k]); 
			if (!sm_hardware_aes_encrypt_block(pi, prev)) return 0;
		
		}; 

		// l'algoritmo prevede che il risultato finale sia l'ultimo blocco cifrato troncato con la dimensione richiesta
		memcpy(out, prev, out_len); 
	};

	return 1; 
	
}; 


/* Versione nella quale invece viene fornita la struttura keys_cmac come parametro */ 

int sm_hardware_aes_cmac_with_keys(const uint8_t in[], size_t in_len, uint8_t out[], size_t out_len, keys_cmac *k_cmac){
	PROFILE("hw_aes_cmac_with_keys") 
	{ 
		if (out_len > AES_BLOCK_SIZE || out_len == 0) return 0; 
		if (!sm_hardware_aes_init()) return 0;

		// NO SUBKEY GENERATION
	
		// L'algoritmo è identico 

		size_t num_blocks = 0; 
		size_t significant_bytes = 0; 

		int flag = 0; 

		uint8_t input[in_len + AES_BLOCK_SIZE]; 
		memset(input, 0, sizeof(input)); 
		memcpy(input, in, in_len); 

		if(in_len == 0)
		{
			num_blocks = 1; 
			flag = 0; 
		} 
		else 
		{
			significant_bytes = in_len % AES_BLOCK_SIZE; // numero di byte significativi nell'ultimo blocco  
			if(significant_bytes != 0)
			{	
				num_blocks = (in_len / AES_BLOCK_SIZE) + 1;
				flag = 1; // deve essere concatenato	
			}	 
			else
			{	
				num_blocks = in_len / AES_BLOCK_SIZE; 
				flag = 0; 
			}; 
		} 


		uint8_t *bt = &input[(num_blocks - 1) * AES_BLOCK_SIZE]; 

		if(flag)
		{
			// in questo caso l'ultimo blocco non è interamente coperto 
			// NOTA: il memset con 0 fatto inizilamente ci consente di avere già gli zeri finali 
			// che servono nel padding 
			bt[significant_bytes] = 0x80; 
			for(size_t k=0; k < AES_BLOCK_SIZE; k++) bt[k] = (uint8_t) (bt[k] ^ k_cmac->k2[k]);  
		}
		else
		{
			for(size_t k=0; k < AES_BLOCK_SIZE; k++) bt[k] = (uint8_t) (bt[k] ^ k_cmac->k1[k]);  

		}

		uint8_t prev[AES_BLOCK_SIZE] = {0}; 

		for(size_t b = 0; b < num_blocks; ++b)
		{
			uint8_t *pi = &input[b * AES_BLOCK_SIZE]; 
			for(size_t k = 0; k < AES_BLOCK_SIZE; k++) pi[k] = (uint8_t) (pi[k] ^ prev[k]); 
			if (!sm_hardware_aes_encrypt_block(pi, prev)) return 0;
		
		}; 

		memcpy(out, prev, out_len); 
	};

	return 1; 
	
}; 


/***************
 * CKDF (Cipher Based Key Derivation Function)
 * Implementation Based on NIST SP 800 108
 * Feedback Mode
***************/

int sm_hardware_aes_ckdf_feedback(const uint8_t in[], size_t in_len, uint8_t out[], size_t out_len, const uint8_t iv[], const uint8_t *key){
	PROFILE("hw_aes_ckdf")
	{
		if(out_len < AES_BLOCK_SIZE) return 0;
		if (!sm_hardware_aes_init()) return 0;


		keys_cmac k_cmac;
		if(!sm_hardware_aes_cmac_subkey_gen(&k_cmac,key)) return 0;
		
		/*******
		 * IV è il vettore di inizializzazione
		 * l'input deve essere nella forma Label || 0x00 || Context || [lunghezza del KO]_2 
		 * si fa un pre-pend dell'input opzionale con un contatore [i]_2
		 * NOTA: [x]_2 è la rappresentazione binaria dell'intero x su r bit 
		 * L è la lubghezza del KO in bit 
		 * h è la lunghezza dell'output della PRF in bit (nel caso di AES-CMAC è 128 bit / 16 byte) 
		*******/ 

		/*****
		 K(i) = PRF(KI, K(i-1) || [i]_2 || Label || 0x00 || Context || [L]_2) 
		 Result(i) = Result(i-1) || K(i) 
		*****/ 

		// Dichiariamo un array di byte di dimensione opportunamente impostata per inserire il blocco cifrato precedente + counter 
		// NOTA: il counter in questo caso è su 32 bit 

		uint8_t input[AES_BLOCK_SIZE + 4 + in_len];
		memcpy(input + AES_BLOCK_SIZE + 4, in, in_len); // Dopo lo spazio per K(i-1) e il counter viene inserito il plaintext descritto prima

		uint8_t *counter = &input[AES_BLOCK_SIZE];
		memset(counter, 0, 4);

		int flag = 0;
		size_t n = out_len / AES_BLOCK_SIZE; // viene calcolato il numero di cifrature AES necessarie per ottenere il KO 

		if(out_len % AES_BLOCK_SIZE != 0)
		{
			flag = 1;
			n += 1;
		}

		if(n > 0xFFFFFFFFu) return 0; // NOTA: c'è un errore se n supera il valore massimo rappresentabile con r bit del contatore

		uint8_t prev[AES_BLOCK_SIZE]; // si dichiara un array prev inizializzato con iv, in esso sarà posto il blocco ottenuto 
					      // dalla cifratura AES da inserire nell'input 
		memcpy(prev, iv, AES_BLOCK_SIZE);

		for(size_t b = 0; b < n; ++b)
		{
			memcpy(input, prev, AES_BLOCK_SIZE);
			increment_counter(counter, 4); // si incrementa il counter 
			// si richama AES_CMAC usato come PRF, sull'input e il risultato va in prev
			if(!sm_hardware_aes_cmac_with_keys(input, AES_BLOCK_SIZE + 4 + in_len, prev, AES_BLOCK_SIZE, &k_cmac)) return 0;
			
			// Il risultato della cifratura AES va inserito non solo in prev ma corrisponde anche a parte dell'output 
			// quindi si copia nel blocco corrente di out 

			if(b != n-1) memcpy(out + b * AES_BLOCK_SIZE, prev, AES_BLOCK_SIZE);
			else
			{	
				// NOTA: KO è il Keying material che voglio generare potrebbe capitare che il KO non sia esattamemte multiplo 
				// di AES BLOCK SIZE e quindi nell'ultimo trasferimento in out va effettuato un troncamento 
				if(flag) memcpy(out + b * AES_BLOCK_SIZE, prev, out_len % AES_BLOCK_SIZE);
			        else memcpy(out + b * AES_BLOCK_SIZE, prev, AES_BLOCK_SIZE);
			};

		};
	}

	return 1;
};

/***************
 * CKDF (Cipher Based Key Derivation Function)
 * Implementation Based on NIST SP 800 108
 * Counter Mode KDF
***************/

int sm_hardware_aes_ckdf_counter(const uint8_t in[], size_t in_len, uint8_t out[], size_t out_len, const uint8_t *key){
	PROFILE("hw_aes_ckdf")
	{
		if(out_len < AES_BLOCK_SIZE) return 0;
		if (!sm_hardware_aes_init()) return 0;


		keys_cmac k_cmac;
		if(!sm_hardware_aes_cmac_subkey_gen(&k_cmac,key)) return 0;
		
		/*******
		 * l'input deve essere nella forma Label || 0x00 || Context || [lunghezza del KO]_2 
		 * si fa un pre-pend dell'input con un contatore [i]_2
		 * NOTA: [x]_2 è la rappresentazione binaria dell'intero x su r bit 
		 * L è la lubghezza del KO in bit 
		 * h è la lunghezza dell'output della PRF in bit (nel caso di AES-CMAC è 128 bit / 16 byte) 
		*******/ 

		/*****
		 K(i) = PRF(KI, [i]_2 || Label || 0x00 || Context || [L]_2) 
		 Result(i) = Result(i-1) || K(i) 
		*****/ 

		// Dichiariamo un array di byte di dimensione opportunamente impostata per inserire il counter 
		// NOTA: il counter in questo caso è su 32 bit 

		uint8_t input[4 + in_len]; 
		memcpy(input + 4, in, in_len); // Dopo il counter viene inserito il plaintext descritto prima

		uint8_t *counter = input;
		memset(counter, 0, 4);

		int flag = 0;
		size_t n = out_len / AES_BLOCK_SIZE; // viene calcolato il numero di cifrature AES necessarie per ottenere il KO 

		if(out_len % AES_BLOCK_SIZE != 0)
		{
			flag = 1;
			n += 1;
		}

		if(n > 0xFFFFFFFFu) return 0; // NOTA: c'è un errore se n supera il valore massimo rappresentabile con r bit del contatore


		for(size_t b = 0; b < n; ++b)
		{
			increment_counter(counter, 4); // si incrementa il counter 
			// si richama AES_CMAC usato come PRF, sull'input e il risultato va in out
			if(b != n-1){
			       	if(!sm_hardware_aes_cmac_with_keys(input, 4 + in_len, out + b * AES_BLOCK_SIZE, AES_BLOCK_SIZE, &k_cmac)) return 0;
			}
			else
			{
			        size_t last_len = out_len % AES_BLOCK_SIZE; 	
				// NOTA: KO è il Keying material che voglio generare potrebbe capitare che il KO non sia esattamemte multiplo 
				// di AES BLOCK SIZE e quindi nell'ultimo trasferimento in out va effettuato un troncamento
				 
				if(!flag) last_len = AES_BLOCK_SIZE; 

				if(!sm_hardware_aes_cmac_with_keys(input, 4 + in_len, out + b * AES_BLOCK_SIZE, last_len, &k_cmac)) return 0;
			}


		};
	}

	return 1;
};


