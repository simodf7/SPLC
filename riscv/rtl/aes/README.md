# Modulo AES – Interfaccia e Uso Standalone

Questo documento descrive come utilizzare il modulo AES in modo indipendente, fornendo una guida completa per l'integrazione standalone del core AES al di fuori del contesto SoC.

## Panoramica
Il modulo AES implementa l'algoritmo di cifratura Advanced Encryption Standard con supporto per chiavi a 128, 192 e 256 bit. Il core espone un'interfaccia basata su registri accessibili tramite segnali di controllo: `cs`, `we`, `address[7:0]`, `write_data[31:0]`, `read_data[31:0]`.

## Interfaccia del Core AES
Il modulo AES espone la seguente interfaccia per l'uso standalone:
```systemverilog
module aes (
    input  logic        clk,          // Clock di sistema
    input  logic        reset_n,      // Reset attivo basso
    input  logic        cs,           // Chip Select (attivo alto)
    input  logic        we,           // Write Enable (attivo alto)
    input  logic [7:0]  address,      // Indirizzo registro (0-255)
    input  logic [31:0] write_data,   // Dati di scrittura (32 bit)
    output logic [31:0] read_data     // Dati di lettura (32 bit)
);
```

## Uso Standalone del Core AES

### Accesso ai Registri del Core AES

**Scrittura di un Registro:**
Per scrivere un valore in un registro del core AES, è necessario:
1. Assertare il segnale `cs` (chip select) a livello alto
2. Assertare il segnale `we` (write enable) a livello alto  
3. Impostare `address[7:0]` con l'indice del registro target (es. 0x04 per KEY0)
4. Fornire il dato da scrivere su `write_data[31:0]`
5. Attendere un fronte di salita del clock per completare la scrittura
6. Negare `cs` e `we` per terminare la transazione

**Lettura di un Registro:**
Per leggere un valore da un registro del core AES:
1. Assertare il segnale `cs` a livello alto
2. Mantenere `we` a livello basso (0)
3. Impostare `address[7:0]` con l'indice del registro da leggere
4. Attendere la stabilizzazione del segnale `read_data[31:0]`
5. Campionare il valore presente su `read_data`
6. Negare `cs` per terminare la transazione

## Mappa Registri del Core AES

| Indice | Nome Registro | R/W | Descrizione |
|--------|---------------|-----|-------------|
| 0x00   | CONTROL       | W   | START[0], DECRYPT[1], KEY_LEN[3:2], KEY_LOAD[8] |
| 0x01   | STATUS        | R   | BUSY[0], DONE[1], ERROR[2], KEY_READY[3] |
| 0x04   | KEY0          | W   | Chiave bits [31:0] |
| 0x05   | KEY1          | W   | Chiave bits [63:32] |
| 0x06   | KEY2          | W   | Chiave bits [95:64] |
| 0x07   | KEY3          | W   | Chiave bits [127:96] |
| 0x08   | KEY4          | W   | Chiave bits [159:128] (solo 192/256) |
| 0x09   | KEY5          | W   | Chiave bits [191:160] (solo 192/256) |
| 0x0A   | KEY6          | W   | Chiave bits [223:192] (solo 256) |
| 0x0B   | KEY7          | W   | Chiave bits [255:224] (solo 256) |
| 0x10   | DATA_IN0      | W   | Input block [31:0] |
| 0x11   | DATA_IN1      | W   | Input block [63:32] |
| 0x12   | DATA_IN2      | W   | Input block [95:64] |
| 0x13   | DATA_IN3      | W   | Input block [127:96] |
| 0x18   | DATA_OUT0     | R   | Output block [31:0] |
| 0x19   | DATA_OUT1     | R   | Output block [63:32] |
| 0x1A   | DATA_OUT2     | R   | Output block [95:64] |
| 0x1B   | DATA_OUT3     | R   | Output block [127:96] |

## Sequenza Operativa Completa

### 1. Caricamento Chiave (AES-128)

**Fase 1 - Scrittura delle Parole di Chiave:**
Per caricare una chiave AES-128 (128 bit), è necessario scrivere 4 parole da 32 bit nei registri dedicati:
- Registro KEY0 (indirizzo 0x04): contiene i bit [31:0] della chiave
- Registro KEY1 (indirizzo 0x05): contiene i bit [63:32] della chiave  
- Registro KEY2 (indirizzo 0x06): contiene i bit [95:64] della chiave
- Registro KEY3 (indirizzo 0x07): contiene i bit [127:96] della chiave

**Fase 2 - Avvio dell'Espansione di Chiave:**
Dopo aver caricato tutte le parole di chiave, bisogna scrivere nel registro CONTROL (indirizzo 0x00) per avviare il processo di key expansion:
- Bit [8] KEY_LOAD = 1: avvia l'espansione della chiave
- Bit [3:2] KEY_LEN = 00: specifica lunghezza chiave 128 bit


**Fase 3 - Attesa Completamento:**
Monitorare il registro STATUS (indirizzo 0x01) fino a quando il bit [3] KEY_READY diventa 1, indicando che l'espansione di chiave è completata e il core è pronto per le operazioni di cifratura/decifratura.

### 2. Cifratura Blocco (Encrypt)

**Fase 1 - Caricamento del Plaintext:**
Per cifrare un blocco di 128 bit, caricare il plaintext nei 4 registri di input:
- Registro DATA_IN0 (indirizzo 0x10): bit [31:0] del blocco plaintext
- Registro DATA_IN1 (indirizzo 0x11): bit [63:32] del blocco plaintext
- Registro DATA_IN2 (indirizzo 0x12): bit [95:64] del blocco plaintext  
- Registro DATA_IN3 (indirizzo 0x13): bit [127:96] del blocco plaintext

**Fase 2 - Avvio dell'Operazione di Cifratura:**
Scrivere nel registro CONTROL (indirizzo 0x00) per avviare la cifratura:
- Bit [0] START = 1: avvia l'operazione AES
- Bit [1] DECRYPT = 0: seleziona modalità encrypt (cifratura)

**Fase 3 - Attesa Completamento:**
Monitorare il registro STATUS (indirizzo 0x01):
- Bit [0] BUSY = 1 durante l'elaborazione
- Bit [1] DONE = 1 quando l'operazione è completata

**Fase 4 - Lettura del Ciphertext:**
Una volta completata l'operazione (DONE=1), leggere il risultato dai registri di output:
- Registro DATA_OUT0 (indirizzo 0x18): bit [31:0] del ciphertext
- Registro DATA_OUT1 (indirizzo 0x19): bit [63:32] del ciphertext
- Registro DATA_OUT2 (indirizzo 0x1A): bit [95:64] del ciphertext
- Registro DATA_OUT3 (indirizzo 0x1B): bit [127:96] del ciphertext

### 3. Decifratura Blocco (Decrypt)

**Fase 1 - Caricamento del Ciphertext:**
Per decifrare un blocco precedentemente cifrato, caricare il ciphertext negli stessi registri di input utilizzati per la cifratura:
- Registro DATA_IN0 (indirizzo 0x10): bit [31:0] del blocco ciphertext
- Registro DATA_IN1 (indirizzo 0x11): bit [63:32] del blocco ciphertext
- Registro DATA_IN2 (indirizzo 0x12): bit [95:64] del blocco ciphertext
- Registro DATA_IN3 (indirizzo 0x13): bit [127:96] del blocco ciphertext

**Fase 2 - Avvio dell'Operazione di Decifratura:**
Scrivere nel registro CONTROL (indirizzo 0x00) per avviare la decifratura:
- Bit [0] START = 1: avvia l'operazione AES
- Bit [1] DECRYPT = 1: seleziona modalità decrypt (decifratura)

**Fase 3 - Attesa Completamento:**
La procedura di attesa è identica alla cifratura. Monitorare il registro STATUS (indirizzo 0x01):
- Durante l'elaborazione: bit [0] BUSY = 1
- Al completamento: bit [1] DONE = 1

**Fase 4 - Lettura del Plaintext Risultante:**
Una volta completata la decifratura (DONE=1), leggere il plaintext risultante dagli stessi registri di output:
- Registro DATA_OUT0 (indirizzo 0x18): bit [31:0] del plaintext decrittato
- Registro DATA_OUT1 (indirizzo 0x19): bit [63:32] del plaintext decrittato
- Registro DATA_OUT2 (indirizzo 0x1A): bit [95:64] del plaintext decrittato
- Registro DATA_OUT3 (indirizzo 0x1B): bit [127:96] del plaintext decrittato



