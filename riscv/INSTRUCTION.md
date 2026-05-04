# Istruzioni per il test dell'ottimizzazione AES 

Eseguire il processo di build:

```bash
#Preparazione dell'ambiente di simulazione 
make build

# Build della simulazione **simply_test** e del software **le-node**
make simply_test@le-node
```
Eseguire la simulazione:

```bash
# Esecuzione della simulazione
./csoc_simulation
```
È possibile analizzare i risultati nel file **csoc_system.log**
