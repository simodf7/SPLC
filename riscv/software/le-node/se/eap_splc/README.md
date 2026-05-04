# Enclave TestEnc 

## Descrizione

**TestEnc** è un'enclave di test per il sistema LE-Node che dimostra le funzionalità di crittografia del modulo hardware AES e l'integrazione con il Secure Monitor (SM).

### Funzionalità Principali

Nell'effettuare il **Test Crittografia AES-CBC** l'enclave fornisce servizi per il confronto tra le implementazioni software e hardware, usa il sistema di derivazione chiavi del SM, comunicazione tramite shared memory e permette una misura prestazioni delle operazioni crittografiche.


### Architettura

L'enclave implementa 5 funzioni principali:

1. **func1/func2**: Test di base per verifica funzionamento
2. **func3**: Crittografia completa con chiavi derivate
3. **func4**: Test semplificato AES hardware con blocco singolo
4. **func5**: Confronto prestazioni software vs hardware AES



## Processo di Compilazione e integrazione nel SM

### 1. Compilazione dell'Enclave

```bash
cd /path/to/riscv-soc-sim/software/le-node/se/testenc
make
```

Il processo genera diversi file tra cui:
- `testenc/build/bin/testenc_bin.c`: Binario raw *.c
- `testenc/build/bin/testenc_bin.h`: Libreria del file binario *.h  

### 2. Integrazione nell'SM

Copia del file nell'SM
```bash
cp riscv-soc-sim/software/le-node/testenc/build/bin/testenc_bin.c riscv-soc-sim/software/le-node/sm/user

cp riscv-soc-sim/software/le-node/testenc/build/bin/testenc_bin.h riscv-soc-sim/software/le-node/sm/user/inc
```



### 2. Integrazione nell'SM
Compilazione dell'SM:
```bash
cd ../../..
make le-node@le-node
```

L'SM includerà automaticamente il binario dell'enclave e potrà caricarlo a runtime.



## Note:
Ogni modifica al codice dell'enclave richiede:
1. Ricompilazione dell'enclave (`make` in testenc/)
2. Copia del nuovo binario nell'SM
3. Ricompilazione dell'SM


