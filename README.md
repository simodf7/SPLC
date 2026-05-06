# Estensione dello Stack G3-PLC

L'obiettivo consisteva nella realizzazione di un **Layer di Sessione Sicuro** per lo stack G3-PLC per poi ottenere un'implementazione embrionale dello stesso nel pacchetto STSW-ST8500GH-2 realizzato da STM.  
Lo scopo del Secure Session Layer è quello di garantire confidenzialità, integrità e autenticazione al traffico applicativo tra nodi PLC, tramite autenticazione **EAP-PSK** e distribuzione di chiavi di sessione orchestrata da un nodo **Trusted**.


## Struttura

```
.
├── User_Applications/
│   ├── session_comm.h          # Tipi, strutture e costanti dei messaggi di sessione
│   ├── session_conf.h          # Flag di configurazione (es. TRUSTED, ID dispositivo, IP Trusted)
│   ├── session_layer.c/.h      # FSM principale + API esterna del modulo
│   ├── session_eap_psk.c/.h    # FSM autenticazione EAP-PSK
│   ├── session_eap_psk_helper.c/.h   # Builder, parser e validator messaggi EAP-PSK
│   ├── session_eap_psk_crypto.h      # Interfaccia funzioni crittografiche EAP-PSK
│   ├── session_kd.c/.h         # FSM Key Distribution
│   ├── session_kd_helper.c/.h  # Builder, parser e validator messaggi KD
│   └── session_kd_crypto.h     # Interfaccia funzioni crittografiche KD
│
└── hif_g3_common.h             # Configurazione delle connessioni

```

### Prerequisiti
- Pacchetto **STSW-ST8500GH-2** di STMicroelectronics: https://www.st.com/en/embedded-software/stsw-st8500gh-2.html#st-get-software

### Note
- Il codice del Session Layer è **prototipale** e pensato come punto di partenza per l'integrazione nella codebase ST.
- Per ulteriori informazioni è necessaria la lettura della wiki al seguente link: [Studio ed estensioni del protocollo PLC G3](https://www.naplespu.com/es/index.php?title=Studio_ed_estensione_del_protocollo_PLC_G3)

