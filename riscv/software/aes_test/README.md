# Test AES Module

Questo programma di test verifica il funzionamento del modulo AES hardware integrato nel SoC RISC-V.

## Funzionalità del Test

Il programma esegue le seguenti operazioni:

1. **Inizializzazione**: Verifica che il modulo AES sia presente e funzionante
2. **Configurazione chiave**: Imposta una chiave AES a 128 bit ("ProvaChiaveAES!")
3. **Crittografia**: Critta il messaggio "prova modulo aes" (16 bytes)
4. **Decrittografia**: Decritta il messaggio cifrato
5. **Verifica**: Confronta il messaggio decrittato con l'originale

## Dettagli Tecnici

### Chiave AES
- **Tipo**: 128-bit
- **Valore**: "ProvaChiaveAES!" (16 caratteri)

### Messaggio di Test
- **Plaintext**: "prova modulo aes" (16 caratteri)
- **Encoding**: ASCII

### Indirizzo del Modulo AES
- **Base Address**: 0x80003000
- **Address Space**: 1 KB (0x80003000 - 0x800033FF)

**NOTA: Per modificare il nome del progetto in caso di riuso bisogna modificare il nome del progetto nel Makefile e il nome del file .ld**
