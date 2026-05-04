# Simulazione Simply Test - Verilator

Questa cartella contiene un ambiente di simulazione semplificato progettato per fornire un elevato numero di cicli di clock per test del SoC RISC-V.


## Utilizzo

### Build della Simulazione
```bash
#Dalla root directory del progetto
make build
```
### Build completa
```bash
#Dalla root directory del progetto
make simply_test@<software>
```
### Esecuzione del Test
```bash
# Dalla root directory del progetto
./csoc_simulation
```

### Analisi Risultati
```bash
# Visualizza log dettagliato
cat csoc_system.log
```
