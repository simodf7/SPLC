# Ambiente Software per Simulazione SoC

## Introduzione

Questo documento descrive l'architettura software del SoC RISC-V.

## Struttura dell'Architettura Software

```
software/
├── README.md          
├── aes_test/         
├── hello/             
└── le-node/         
```

## Descrizione dei Componenti

### Modulo `aes_test/`
Il modulo `aes_test/` costituisce la suite di validazione e caratterizzazione del modulo AES hardware integrato nel sistema, implementando test completi per gli algoritmi di cifratura/decifratura AES-CBC e verificando l'interfaccia hardware con il core AES per garantire la corretta integrazione e funzionalità del sottosistema crittografico.


### Modulo `hello/`
Il modulo `hello/` rappresenta l'applicazione di riferimento per la verifica del sistema base, implementando la validazione dell'architettura RISC-V attraverso test delle periferiche UART e del sistema I/O, verifica dell'ambiente di simulazione e fornendo un template di riferimento completo per lo sviluppo di applicazioni successive nel contesto del sistema RISC-V SoC.


### Modulo `le-node/`

Il modulo `le-node/` implementa un'architettura di sicurezza completa basata sul paradigma Trusted Execution Environment (TEE), progettata per fornire un ambiente di esecuzione sicuro e isolato all'interno del sistema RISC-V SoC.


**Componenti fondamentali**:

**Secure Monitor (SM)**:
Il Security Monitor rappresenta il nucleo del sistema di sicurezza implementato su core custom **cv32e40s-SE**, come dettagliato nella documentazione hardware ufficiale `rtl/docs/CERTIFY low-end RISCV node Hardware documentation.pdf`.

Il Security Monitor costituisce il nucleo trusted del sistema, operando in **Machine Mode (M-mode)** RISC-V con privilegi di sistema completi per implementare un'architettura di sicurezza basata su Trusted Execution Environment (TEE). Il sistema si inizializza attraverso la funzione principale `core_main()`, orchestrando il boot flow sicuro tramite **First-Stage Secure Boot Loader (FSSBL)** e configurando la **Physical Memory Protection (PMP)** per garantire l'isolamento hardware dei domini di esecuzione. Come supervisore centralizzato, il Secure monitor controlla l'intero ciclo di vita delle Secure Enclave attraverso le funzioni `implant_se()` e `boot_se()`, erogando servizi crittografici standardizzati via interfaccia SMAPI e mantenendo la chain of trust dell'intero sistema attraverso verifiche di integrità e controlli di autorizzazione.


Boot flow documentato:
```
Power-on/Reset → FSSBL (ROM) → SM entry → core_main → ASE bootstrap → user_main
```


**Secure Enclave (SE)**:
Le Secure Enclave rappresentano i domini di esecuzione trusted dell'architettura TEE, operando in **modalità User (U-mode)** con protezione hardware garantita attraverso l'isolamento della memoria tramite **Physical Memory Protection (PMP)** e l'accesso controllato alle risorse esclusivamente tramite Security Monitor. L'architettura implementa un modello operativo basato sulla **chain of trust** stabilita durante il boot flow, dove ogni enclave viene verificata per integrità attraverso la funzione `implant_se()` e gestita lungo tutto il ciclo di vita mediante handle specifici e un sistema di autorizzazioni configurabile basato su maschere di permessi. La comunicazione sicura avviene attraverso **shared memory** dedicata, mentre il sistema supporta diverse tipologie di enclave: **ASE (Application Service Enclave)** per servizi di bootstrap del sistema e **User Enclave** per workload trusted specifici.



**System Management API (SMAPI)**:
L'interfaccia SMAPI costituisce il protocollo di comunicazione standardizzato tra Secure Enclave e Security Manager, implementando un'architettura stratificata con **frontend** esposto alle Secure Enclave (`se/smapi.h`), **backend** implementato nel Security Manager (`platform/ecall_u.c`) e sistema di **routing** basato su dispatcher `ecall_u_vector`. Il protocollo opera attraverso invocazioni **ecall** (Environment Call) dalle enclave, garantendo trasferimento sicuro dei parametri tramite memoria condivisa. 

## Procedura di Testing e Validazione

### Verifica del Sistema Base
```bash
make hello@hello
./csoc_simulation
```

### Validazione Hardware AES
```bash
make aes_test@aes_test  
./csoc_simulation
```

### Test Integrazione Secure Enclave
```bash
make hello@le-node
./csoc_simulation
```
