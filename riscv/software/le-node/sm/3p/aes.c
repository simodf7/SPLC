/*********************************************************************
* Filename:   aes.c (T-table optimized)
* Details:    Implementazione AES con round table (Te/Td) per ridurre i cicli,
*             compatibile con l'API esistente (aes.h). Le tabelle sono
*             generate a runtime dalla S-box per evitare dipendenze da sorgenti
*             esterni e mantenere coerenza.
*********************************************************************/

#include <string.h>
#include "aes.h"

#define TRUE  1
#define FALSE 0

#define AES_128_ROUNDS 10
#define AES_192_ROUNDS 12
#define AES_256_ROUNDS 14

// Big-endian load/store helpers (state/round keys usano big-endian per word)
#define GETU32(pt) ((WORD)(pt)[0] << 24 ^ (WORD)(pt)[1] << 16 ^ (WORD)(pt)[2] << 8 ^ (WORD)(pt)[3])
#define PUTU32(ct, v)            \
	do {                         \
		(ct)[0] = (BYTE)((v) >> 24); \
		(ct)[1] = (BYTE)((v) >> 16); \
		(ct)[2] = (BYTE)((v) >> 8);  \
		(ct)[3] = (BYTE)(v);         \
	} while (0)

// S-box e inv-S-box (costanti standard AES)
static const BYTE Sbox[256] = {
	0x63,0x7C,0x77,0x7B,0xF2,0x6B,0x6F,0xC5,0x30,0x01,0x67,0x2B,0xFE,0xD7,0xAB,0x76,
	0xCA,0x82,0xC9,0x7D,0xFA,0x59,0x47,0xF0,0xAD,0xD4,0xA2,0xAF,0x9C,0xA4,0x72,0xC0,
	0xB7,0xFD,0x93,0x26,0x36,0x3F,0xF7,0xCC,0x34,0xA5,0xE5,0xF1,0x71,0xD8,0x31,0x15,
	0x04,0xC7,0x23,0xC3,0x18,0x96,0x05,0x9A,0x07,0x12,0x80,0xE2,0xEB,0x27,0xB2,0x75,
	0x09,0x83,0x2C,0x1A,0x1B,0x6E,0x5A,0xA0,0x52,0x3B,0xD6,0xB3,0x29,0xE3,0x2F,0x84,
	0x53,0xD1,0x00,0xED,0x20,0xFC,0xB1,0x5B,0x6A,0xCB,0xBE,0x39,0x4A,0x4C,0x58,0xCF,
	0xD0,0xEF,0xAA,0xFB,0x43,0x4D,0x33,0x85,0x45,0xF9,0x02,0x7F,0x50,0x3C,0x9F,0xA8,
	0x51,0xA3,0x40,0x8F,0x92,0x9D,0x38,0xF5,0xBC,0xB6,0xDA,0x21,0x10,0xFF,0xF3,0xD2,
	0xCD,0x0C,0x13,0xEC,0x5F,0x97,0x44,0x17,0xC4,0xA7,0x7E,0x3D,0x64,0x5D,0x19,0x73,
	0x60,0x81,0x4F,0xDC,0x22,0x2A,0x90,0x88,0x46,0xEE,0xB8,0x14,0xDE,0x5E,0x0B,0xDB,
	0xE0,0x32,0x3A,0x0A,0x49,0x06,0x24,0x5C,0xC2,0xD3,0xAC,0x62,0x91,0x95,0xE4,0x79,
	0xE7,0xC8,0x37,0x6D,0x8D,0xD5,0x4E,0xA9,0x6C,0x56,0xF4,0xEA,0x65,0x7A,0xAE,0x08,
	0xBA,0x78,0x25,0x2E,0x1C,0xA6,0xB4,0xC6,0xE8,0xDD,0x74,0x1F,0x4B,0xBD,0x8B,0x8A,
	0x70,0x3E,0xB5,0x66,0x48,0x03,0xF6,0x0E,0x61,0x35,0x57,0xB9,0x86,0xC1,0x1D,0x9E,
	0xE1,0xF8,0x98,0x11,0x69,0xD9,0x8E,0x94,0x9B,0x1E,0x87,0xE9,0xCE,0x55,0x28,0xDF,
	0x8C,0xA1,0x89,0x0D,0xBF,0xE6,0x42,0x68,0x41,0x99,0x2D,0x0F,0xB0,0x54,0xBB,0x16
};

static const BYTE iSbox[256] = {
	0x52,0x09,0x6A,0xD5,0x30,0x36,0xA5,0x38,0xBF,0x40,0xA3,0x9E,0x81,0xF3,0xD7,0xFB,
	0x7C,0xE3,0x39,0x82,0x9B,0x2F,0xFF,0x87,0x34,0x8E,0x43,0x44,0xC4,0xDE,0xE9,0xCB,
	0x54,0x7B,0x94,0x32,0xA6,0xC2,0x23,0x3D,0xEE,0x4C,0x95,0x0B,0x42,0xFA,0xC3,0x4E,
	0x08,0x2E,0xA1,0x66,0x28,0xD9,0x24,0xB2,0x76,0x5B,0xA2,0x49,0x6D,0x8B,0xD1,0x25,
	0x72,0xF8,0xF6,0x64,0x86,0x68,0x98,0x16,0xD4,0xA4,0x5C,0xCC,0x5D,0x65,0xB6,0x92,
	0x6C,0x70,0x48,0x50,0xFD,0xED,0xB9,0xDA,0x5E,0x15,0x46,0x57,0xA7,0x8D,0x9D,0x84,
	0x90,0xD8,0xAB,0x00,0x8C,0xBC,0xD3,0x0A,0xF7,0xE4,0x58,0x05,0xB8,0xB3,0x45,0x06,
	0xD0,0x2C,0x1E,0x8F,0xCA,0x3F,0x0F,0x02,0xC1,0xAF,0xBD,0x03,0x01,0x13,0x8A,0x6B,
	0x3A,0x91,0x11,0x41,0x4F,0x67,0xDC,0xEA,0x97,0xF2,0xCF,0xCE,0xF0,0xB4,0xE6,0x73,
	0x96,0xAC,0x74,0x22,0xE7,0xAD,0x35,0x85,0xE2,0xF9,0x37,0xE8,0x1C,0x75,0xDF,0x6E,
	0x47,0xF1,0x1A,0x71,0x1D,0x29,0xC5,0x89,0x6F,0xB7,0x62,0x0E,0xAA,0x18,0xBE,0x1B,
	0xFC,0x56,0x3E,0x4B,0xC6,0xD2,0x79,0x20,0x9A,0xDB,0xC0,0xFE,0x78,0xCD,0x5A,0xF4,
	0x1F,0xDD,0xA8,0x33,0x88,0x07,0xC7,0x31,0xB1,0x12,0x10,0x59,0x27,0x80,0xEC,0x5F,
	0x60,0x51,0x7F,0xA9,0x19,0xB5,0x4A,0x0D,0x2D,0xE5,0x7A,0x9F,0x93,0xC9,0x9C,0xEF,
	0xA0,0xE0,0x3B,0x4D,0xAE,0x2A,0xF5,0xB0,0xC8,0xEB,0xBB,0x3C,0x83,0x53,0x99,0x61,
	0x17,0x2B,0x04,0x7E,0xBA,0x77,0xD6,0x26,0xE1,0x69,0x14,0x63,0x55,0x21,0x0C,0x7D
};

// Tabelle Te/Td (round tables) generate a runtime dalla Sbox per migliore portabilità
static WORD Te0[256], Te1[256], Te2[256], Te3[256];
static WORD Td0[256], Td1[256], Td2[256], Td3[256];
static BYTE gm2[256], gm3[256], gm9[256], gmB[256], gmD[256], gmE[256];
static int tables_ready = 0;

// GF(2^8) helper: xtime e moltiplicazioni per costanti richieste
static inline BYTE xtime(BYTE x) { BYTE t = (BYTE)(x << 1); return (BYTE)(t ^ ((x & 0x80) ? 0x1B : 0x00)); }

static void aes_init_tables(void)
{
	if (tables_ready) return;

	for (int i = 0; i < 256; ++i) {
		BYTE x = (BYTE)i;
		BYTE x2 = xtime(x);
		BYTE x4 = xtime(x2);
		BYTE x8 = xtime(x4);
		gm2[i] = x2;
		gm3[i] = (BYTE)(x2 ^ x);
		gm9[i] = (BYTE)(x8 ^ x);
		gmB[i] = (BYTE)(x8 ^ x2 ^ x);      // 0x0B = 8+2+1
		gmD[i] = (BYTE)(x8 ^ x4 ^ x);      // 0x0D = 8+4+1
		gmE[i] = (BYTE)(x8 ^ x4 ^ x2);     // 0x0E = 8+4+2
	}

	for (int i = 0; i < 256; ++i) {
		BYTE sb = Sbox[i];
		WORD t0 = (WORD)gm2[sb] << 24 ^ (WORD)sb << 16 ^ (WORD)sb << 8 ^ (WORD)gm3[sb];
		WORD t1 = (WORD)gm3[sb] << 24 ^ (WORD)gm2[sb] << 16 ^ (WORD)sb << 8 ^ (WORD)sb;
		WORD t2 = (WORD)sb << 24 ^ (WORD)gm3[sb] << 16 ^ (WORD)gm2[sb] << 8 ^ (WORD)sb;
		WORD t3 = (WORD)sb << 24 ^ (WORD)sb << 16 ^ (WORD)gm3[sb] << 8 ^ (WORD)gm2[sb];
		Te0[i] = t0; Te1[i] = t1; Te2[i] = t2; Te3[i] = t3;

		BYTE ib = iSbox[i];
		WORD u0 = (WORD)gmE[ib] << 24 ^ (WORD)gm9[ib] << 16 ^ (WORD)gmD[ib] << 8 ^ (WORD)gmB[ib];
		WORD u1 = (WORD)gmB[ib] << 24 ^ (WORD)gmE[ib] << 16 ^ (WORD)gm9[ib] << 8 ^ (WORD)gmD[ib];
		WORD u2 = (WORD)gmD[ib] << 24 ^ (WORD)gmB[ib] << 16 ^ (WORD)gmE[ib] << 8 ^ (WORD)gm9[ib];
		WORD u3 = (WORD)gm9[ib] << 24 ^ (WORD)gmD[ib] << 16 ^ (WORD)gmB[ib] << 8 ^ (WORD)gmE[ib];
		Td0[i] = u0; Td1[i] = u1; Td2[i] = u2; Td3[i] = u3;
	}

	tables_ready = 1;
}

// Decrypt a single 16-byte block with precomputed decryption round keys
static inline void decrypt_block_with_drk(const BYTE* inb, BYTE* outb, const WORD* drk, int Nr)
{
	const WORD* rk = &drk[4 * Nr];
	WORD s0 = GETU32(inb) ^ rk[0];
	WORD s1 = GETU32(inb + 4) ^ rk[1];
	WORD s2 = GETU32(inb + 8) ^ rk[2];
	WORD s3 = GETU32(inb + 12) ^ rk[3];
	WORD t0, t1, t2, t3;
	for (int rr = Nr - 1; rr > 0; --rr) {
		rk -= 4;
		t0 = Td0[s0 >> 24] ^ Td1[(s3 >> 16) & 0xFF] ^ Td2[(s2 >> 8) & 0xFF] ^ Td3[s1 & 0xFF] ^ rk[0];
		t1 = Td0[s1 >> 24] ^ Td1[(s0 >> 16) & 0xFF] ^ Td2[(s3 >> 8) & 0xFF] ^ Td3[s2 & 0xFF] ^ rk[1];
		t2 = Td0[s2 >> 24] ^ Td1[(s1 >> 16) & 0xFF] ^ Td2[(s0 >> 8) & 0xFF] ^ Td3[s3 & 0xFF] ^ rk[2];
		t3 = Td0[s3 >> 24] ^ Td1[(s2 >> 16) & 0xFF] ^ Td2[(s1 >> 8) & 0xFF] ^ Td3[s0 & 0xFF] ^ rk[3];
		s0 = t0; s1 = t1; s2 = t2; s3 = t3;
	}
	rk -= 4;
	WORD r0 = (WORD)iSbox[s0 >> 24] << 24 ^ (WORD)iSbox[(s3 >> 16) & 0xFF] << 16 ^ (WORD)iSbox[(s2 >> 8) & 0xFF] << 8 ^ (WORD)iSbox[s1 & 0xFF] ^ rk[0];
	WORD r1 = (WORD)iSbox[s1 >> 24] << 24 ^ (WORD)iSbox[(s0 >> 16) & 0xFF] << 16 ^ (WORD)iSbox[(s3 >> 8) & 0xFF] << 8 ^ (WORD)iSbox[s2 & 0xFF] ^ rk[1];
	WORD r2 = (WORD)iSbox[s2 >> 24] << 24 ^ (WORD)iSbox[(s1 >> 16) & 0xFF] << 16 ^ (WORD)iSbox[(s0 >> 8) & 0xFF] << 8 ^ (WORD)iSbox[s3 & 0xFF] ^ rk[2];
	WORD r3 = (WORD)iSbox[s3 >> 24] << 24 ^ (WORD)iSbox[(s2 >> 16) & 0xFF] << 16 ^ (WORD)iSbox[(s1 >> 8) & 0xFF] << 8 ^ (WORD)iSbox[s0 & 0xFF] ^ rk[3];
	PUTU32(outb, r0); PUTU32(outb + 4, r1); PUTU32(outb + 8, r2); PUTU32(outb + 12, r3);
}

static inline WORD inv_mix_word(WORD x)
{
	BYTE b0 = (BYTE)(x >> 24), b1 = (BYTE)(x >> 16), b2 = (BYTE)(x >> 8), b3 = (BYTE)x;
	BYTE c0 = (BYTE)(gmE[b0] ^ gmB[b1] ^ gmD[b2] ^ gm9[b3]);
	BYTE c1 = (BYTE)(gm9[b0] ^ gmE[b1] ^ gmB[b2] ^ gmD[b3]);
	BYTE c2 = (BYTE)(gmD[b0] ^ gm9[b1] ^ gmE[b2] ^ gmB[b3]);
	BYTE c3 = (BYTE)(gmB[b0] ^ gmD[b1] ^ gm9[b2] ^ gmE[b3]);
	return (WORD)c0 << 24 | (WORD)c1 << 16 | (WORD)c2 << 8 | (WORD)c3;
}

/*******************
* AES - CBC (wrapper sulle primitive single-block)
*******************/
int aes_encrypt_cbc(const BYTE in[], size_t in_len, BYTE out[], const WORD key[], int keysize, const BYTE iv[])
{
	if (in_len % AES_BLOCK_SIZE != 0) return FALSE;
	BYTE prev[AES_BLOCK_SIZE];
	memcpy(prev, iv, AES_BLOCK_SIZE);

	size_t blocks = in_len / AES_BLOCK_SIZE;
	for (size_t b = 0; b < blocks; ++b) {
		BYTE buf[AES_BLOCK_SIZE];
		const BYTE* pi = &in[b * AES_BLOCK_SIZE];
		for (int i = 0; i < AES_BLOCK_SIZE; ++i) buf[i] = (BYTE)(pi[i] ^ prev[i]);
		aes_encrypt(buf, &out[b * AES_BLOCK_SIZE], key, keysize);
		memcpy(prev, &out[b * AES_BLOCK_SIZE], AES_BLOCK_SIZE);
	}
	return TRUE;
}

int aes_encrypt_cbc_mac(const BYTE in[], size_t in_len, BYTE out[], const WORD key[], int keysize, const BYTE iv[])
{
	if (in_len % AES_BLOCK_SIZE != 0) return FALSE;
	BYTE prev[AES_BLOCK_SIZE];
	memcpy(prev, iv, AES_BLOCK_SIZE);
	BYTE buf[AES_BLOCK_SIZE];

	size_t blocks = in_len / AES_BLOCK_SIZE;
	for (size_t b = 0; b < blocks; ++b) {
		const BYTE* pi = &in[b * AES_BLOCK_SIZE];
		for (int i = 0; i < AES_BLOCK_SIZE; ++i) buf[i] = (BYTE)(pi[i] ^ prev[i]);
		aes_encrypt(buf, prev, key, keysize); // riusa prev come stato MAC
	}
	memcpy(out, prev, AES_BLOCK_SIZE);
	return TRUE;
}

int aes_decrypt_cbc(const BYTE in[], size_t in_len, BYTE out[], const WORD key[], int keysize, const BYTE iv[])
{
	if (in_len % AES_BLOCK_SIZE != 0) return FALSE;
	BYTE prev[AES_BLOCK_SIZE];
	memcpy(prev, iv, AES_BLOCK_SIZE);

	// Prepara una decryption round key schedule una sola volta per tutte le block
	int Nr = (keysize == 128) ? AES_128_ROUNDS : (keysize == 192) ? AES_192_ROUNDS : AES_256_ROUNDS;
	WORD drk[4 * (AES_256_ROUNDS + 1)];
	const WORD* fk = key;
	// init tables (for inv_mix_word)
	aes_init_tables();
	for (int j = 0; j < 4; ++j) drk[4 * Nr + j] = fk[4 * Nr + j];
	for (int r = Nr - 1; r > 0; --r) {
		for (int j = 0; j < 4; ++j) drk[4 * r + j] = inv_mix_word(fk[4 * r + j]);
	}
	for (int j = 0; j < 4; ++j) drk[j] = fk[j];

	size_t blocks = in_len / AES_BLOCK_SIZE;
	for (size_t b = 0; b < blocks; ++b) {
		BYTE ct[AES_BLOCK_SIZE], pt[AES_BLOCK_SIZE];
		memcpy(ct, &in[b * AES_BLOCK_SIZE], AES_BLOCK_SIZE);
		decrypt_block_with_drk(ct, pt, drk, Nr);
		for (int i = 0; i < AES_BLOCK_SIZE; ++i) out[b * AES_BLOCK_SIZE + i] = (BYTE)(pt[i] ^ prev[i]);
		memcpy(prev, ct, AES_BLOCK_SIZE);
	}
	return TRUE;
}

/*******************
* Key expansion (stesso layout dell'implementazione precedente)
*******************/
#define KE_ROTWORD(x) (((x) << 8) | ((x) >> 24))
static inline WORD SubWord(WORD w)
{
	return (WORD)Sbox[w & 0xFF] | (WORD)Sbox[(w >> 8) & 0xFF] << 8 | (WORD)Sbox[(w >> 16) & 0xFF] << 16 | (WORD)Sbox[(w >> 24) & 0xFF] << 24;
}

void aes_key_setup(const BYTE key[], WORD w[], int keysize)
{
	int Nr, Nk;
	switch (keysize) {
		case 128: Nr = AES_128_ROUNDS; Nk = 4; break;
		case 192: Nr = AES_192_ROUNDS; Nk = 6; break;
		case 256: Nr = AES_256_ROUNDS; Nk = 8; break;
		default: return; // keysize non valido
	}

	for (int i = 0; i < Nk; ++i) {
		w[i] = (WORD)key[4 * i] << 24 | (WORD)key[4 * i + 1] << 16 | (WORD)key[4 * i + 2] << 8 | (WORD)key[4 * i + 3];
	}

	static const WORD Rcon[] = {
		0x01000000,0x02000000,0x04000000,0x08000000,0x10000000,0x20000000,0x40000000,0x80000000,0x1B000000,0x36000000,
		0x6C000000,0xD8000000,0xAB000000,0x4D000000,0x9A000000
	};

	int Nb = 4;
	for (int i = Nk; i < Nb * (Nr + 1); ++i) {
		WORD temp = w[i - 1];
		if (i % Nk == 0) temp = SubWord(KE_ROTWORD(temp)) ^ Rcon[(i / Nk) - 1];
		else if (Nk > 6 && (i % Nk) == 4) temp = SubWord(temp);
		w[i] = w[i - Nk] ^ temp;
	}
}

/*******************
* AES Encrypt/Decrypt single block (T-tables)
*******************/
void aes_encrypt(const BYTE in[], BYTE out[], const WORD key[], int keysize)
{
	aes_init_tables();

	int Nr = (keysize == 128) ? AES_128_ROUNDS : (keysize == 192) ? AES_192_ROUNDS : AES_256_ROUNDS;
	const WORD* rk = key;

	WORD s0 = GETU32(in) ^ rk[0];
	WORD s1 = GETU32(in + 4) ^ rk[1];
	WORD s2 = GETU32(in + 8) ^ rk[2];
	WORD s3 = GETU32(in + 12) ^ rk[3];

	WORD t0, t1, t2, t3;
	int r = 1;
	for (; r < Nr; ++r) {
		rk += 4;
		t0 = Te0[s0 >> 24] ^ Te1[(s1 >> 16) & 0xFF] ^ Te2[(s2 >> 8) & 0xFF] ^ Te3[s3 & 0xFF] ^ rk[0];
		t1 = Te0[s1 >> 24] ^ Te1[(s2 >> 16) & 0xFF] ^ Te2[(s3 >> 8) & 0xFF] ^ Te3[s0 & 0xFF] ^ rk[1];
		t2 = Te0[s2 >> 24] ^ Te1[(s3 >> 16) & 0xFF] ^ Te2[(s0 >> 8) & 0xFF] ^ Te3[s1 & 0xFF] ^ rk[2];
		t3 = Te0[s3 >> 24] ^ Te1[(s0 >> 16) & 0xFF] ^ Te2[(s1 >> 8) & 0xFF] ^ Te3[s2 & 0xFF] ^ rk[3];
		s0 = t0; s1 = t1; s2 = t2; s3 = t3;
	}

	rk += 4;
	// Round finale senza MixColumns
	WORD r0 = (WORD)Sbox[s0 >> 24] << 24 ^ (WORD)Sbox[(s1 >> 16) & 0xFF] << 16 ^ (WORD)Sbox[(s2 >> 8) & 0xFF] << 8 ^ (WORD)Sbox[s3 & 0xFF] ^ rk[0];
	WORD r1 = (WORD)Sbox[s1 >> 24] << 24 ^ (WORD)Sbox[(s2 >> 16) & 0xFF] << 16 ^ (WORD)Sbox[(s3 >> 8) & 0xFF] << 8 ^ (WORD)Sbox[s0 & 0xFF] ^ rk[1];
	WORD r2 = (WORD)Sbox[s2 >> 24] << 24 ^ (WORD)Sbox[(s3 >> 16) & 0xFF] << 16 ^ (WORD)Sbox[(s0 >> 8) & 0xFF] << 8 ^ (WORD)Sbox[s1 & 0xFF] ^ rk[2];
	WORD r3 = (WORD)Sbox[s3 >> 24] << 24 ^ (WORD)Sbox[(s0 >> 16) & 0xFF] << 16 ^ (WORD)Sbox[(s1 >> 8) & 0xFF] << 8 ^ (WORD)Sbox[s2 & 0xFF] ^ rk[3];

	PUTU32(out, r0); PUTU32(out + 4, r1); PUTU32(out + 8, r2); PUTU32(out + 12, r3);
}

void aes_decrypt(const BYTE in[], BYTE out[], const WORD key[], int keysize)
{
	aes_init_tables();

	int Nr = (keysize == 128) ? AES_128_ROUNDS : (keysize == 192) ? AES_192_ROUNDS : AES_256_ROUNDS;
	// Prepara una schedule di round keys per il decrypt applicando InvMixColumns alle chiavi intermedie
	WORD drk[4 * (AES_256_ROUNDS + 1)]; // dimensione massima
	const WORD* fk = key;
	// copia last round key
	for (int j = 0; j < 4; ++j) drk[4 * Nr + j] = fk[4 * Nr + j];
	// chiavi intermedie trasformate
	for (int r = Nr - 1; r > 0; --r) {
		for (int j = 0; j < 4; ++j) drk[4 * r + j] = inv_mix_word(fk[4 * r + j]);
	}
	// copia first round key (round 0)
	for (int j = 0; j < 4; ++j) drk[j] = fk[j];

	const WORD* rk = &drk[4 * Nr];

	WORD s0 = GETU32(in) ^ rk[0];
	WORD s1 = GETU32(in + 4) ^ rk[1];
	WORD s2 = GETU32(in + 8) ^ rk[2];
	WORD s3 = GETU32(in + 12) ^ rk[3];

	WORD t0, t1, t2, t3;
	for (int r = Nr - 1; r > 0; --r) {
		rk -= 4;
		t0 = Td0[s0 >> 24] ^ Td1[(s3 >> 16) & 0xFF] ^ Td2[(s2 >> 8) & 0xFF] ^ Td3[s1 & 0xFF] ^ rk[0];
		t1 = Td0[s1 >> 24] ^ Td1[(s0 >> 16) & 0xFF] ^ Td2[(s3 >> 8) & 0xFF] ^ Td3[s2 & 0xFF] ^ rk[1];
		t2 = Td0[s2 >> 24] ^ Td1[(s1 >> 16) & 0xFF] ^ Td2[(s0 >> 8) & 0xFF] ^ Td3[s3 & 0xFF] ^ rk[2];
		t3 = Td0[s3 >> 24] ^ Td1[(s2 >> 16) & 0xFF] ^ Td2[(s1 >> 8) & 0xFF] ^ Td3[s0 & 0xFF] ^ rk[3];
		s0 = t0; s1 = t1; s2 = t2; s3 = t3;
	}

	rk -= 4;
	WORD r0 = (WORD)iSbox[s0 >> 24] << 24 ^ (WORD)iSbox[(s3 >> 16) & 0xFF] << 16 ^ (WORD)iSbox[(s2 >> 8) & 0xFF] << 8 ^ (WORD)iSbox[s1 & 0xFF] ^ rk[0];
	WORD r1 = (WORD)iSbox[s1 >> 24] << 24 ^ (WORD)iSbox[(s0 >> 16) & 0xFF] << 16 ^ (WORD)iSbox[(s3 >> 8) & 0xFF] << 8 ^ (WORD)iSbox[s2 & 0xFF] ^ rk[1];
	WORD r2 = (WORD)iSbox[s2 >> 24] << 24 ^ (WORD)iSbox[(s1 >> 16) & 0xFF] << 16 ^ (WORD)iSbox[(s0 >> 8) & 0xFF] << 8 ^ (WORD)iSbox[s3 & 0xFF] ^ rk[2];
	WORD r3 = (WORD)iSbox[s3 >> 24] << 24 ^ (WORD)iSbox[(s2 >> 16) & 0xFF] << 16 ^ (WORD)iSbox[(s1 >> 8) & 0xFF] << 8 ^ (WORD)iSbox[s0 & 0xFF] ^ rk[3];

	PUTU32(out, r0); PUTU32(out + 4, r1); PUTU32(out + 8, r2); PUTU32(out + 12, r3);
}
