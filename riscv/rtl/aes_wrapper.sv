//======================================================================
//
// aes_wrapper.sv
// --------------
// Modulo wrapper SystemVerilog per il modulo AES che permette
// l'adattamento al protocollo di interfaccia bus del SoC.
// Questo wrapper funge da ponte tra il bus di sistema e il core AES,
// traducendo i segnali dell'interfaccia standard del SoC in segnali
// compatibili con il modulo AES originale.
//
//======================================================================


module aes_wrapper #(
    // Parametri di configurazione dell'interfaccia bus
    parameter int unsigned AddrWidth = 32,    // Larghezza del bus degli indirizzi (32 bit)
    parameter int unsigned DataWidth = 32     // Larghezza del bus dei dati (32 bit)
) (
    // Segnali di controllo del sistema
    input  logic                 clk_i,        // Clock di sistema
    input  logic                 rst_ni,       // Reset attivo basso (negato)

    // Interfaccia Bus del SoC (System-on-Chip)
    input  logic                 device_req_i,    // Richiesta di accesso al dispositivo
    input  logic [AddrWidth-1:0] device_addr_i,   // Indirizzo di accesso (32 bit)
    input  logic                 device_we_i,     // Segnale di abilitazione scrittura (Write Enable)
    input  logic [3:0]           device_be_i,     // Byte enable per scritture parziali
    input  logic [DataWidth-1:0] device_wdata_i,  // Dati da scrivere (32 bit)
    output logic                 device_rvalid_o, // Validità dei dati letti
    output logic [DataWidth-1:0] device_rdata_o   // Dati letti dal dispositivo
);

    // === DICHIARAZIONE SEGNALI INTERNI ===
    
    // Segnali di interfaccia per il modulo AES core
    logic aes_cs;                    // Chip Select per il core AES
    logic aes_we;                    // Write Enable per il core AES
    logic [7:0] aes_address;         // Indirizzo registro AES (8 bit)
    logic [31:0] aes_write_data;     // Dati da scrivere nel core AES
    logic [31:0] aes_read_data;      // Dati letti dal core AES
    logic [31:0] captured_read_data; // Registro per catturare i dati letti // Registro per catturare i dati letti
    
    // === GENERAZIONE SEGNALI DI CONTROLLO AES ===
    
    // Generazione del segnale Chip Select: attivo quando c'è una richiesta
    assign aes_cs = device_req_i;
    
    // Generazione del Write Enable: attivo solo durante richieste di scrittura
    assign aes_we = device_req_i & device_we_i;
    
    // Estrazione dell'indirizzo registro dall'indirizzo di parola (word)
    // I bit [9:2] corrispondono all'indirizzo del registro interno AES
    assign aes_address = device_addr_i[9:2];
    
    // Collegamento diretto dei dati di scrittura
    assign aes_write_data = device_wdata_i;
    
    // Output dei dati letti utilizzando il registro di cattura
    assign device_rdata_o = captured_read_data;
    
    // === DEBUG E MONITORAGGIO ===
    
    // Blocco di debug per il monitoraggio delle transazioni
    // Stampa informazioni sui segnali durante le operazioni di lettura/scrittura
    // Utile per il debugging e la verifica del corretto funzionamento
    always @(posedge clk_i) begin
        // Monitoraggio delle richieste di accesso al dispositivo
        if (device_req_i) begin
            $display("AES_WRAPPER: Richiesta - Indirizzo=0x%08x, Registro AES=0x%02x, CS=%b, WE=%b", 
                     device_addr_i, aes_address, aes_cs, aes_we);
            // Monitoraggio specifico per le operazioni di lettura
            if (!device_we_i) begin
                $display("AES_WRAPPER: LETTURA - Dato dal core=0x%08x (sarà catturato)", aes_read_data);
            end
        end
        // Monitoraggio della validità dei dati di output
        if (device_rvalid_o) begin
            $display("AES_WRAPPER: DATO VALIDO - Dato catturato=0x%08x", captured_read_data);
        end
    end
    
    // === LOGICA DI SINCRONIZZAZIONE E TIMING ===
    
    // Gestione della temporizzazione dei segnali di risposta
    // Implementa il pattern standard utilizzato dagli altri dispositivi
    // del SoC (GPIO, SPI, etc.) per garantire coerenza nell'interfaccia
    always_ff @(posedge clk_i or negedge rst_ni) begin
        // Condizione di reset: inizializzazione dei segnali
        if (!rst_ni) begin
            device_rvalid_o <= 1'b0;      // Invalida i dati di output
            captured_read_data <= 32'h0;  // Azzera il registro di cattura
        end else begin
            // Pattern standard: rvalid attivo un ciclo dopo la richiesta
            // Questo garantisce che i dati siano stabili quando rvalid è alto
            device_rvalid_o <= device_req_i;
            
            // Cattura dei dati durante le operazioni di lettura
            // I dati vengono registrati per garantire stabilità nell'output
            if (device_req_i && !device_we_i) begin
                captured_read_data <= aes_read_data;
            end
        end
    end
    
    // === ISTANZIAZIONE DEL MODULO AES CORE ===
    
    // Istanza del modulo di crittografia AES originale
    // Il core AES implementa l'algoritmo di cifratura/decifratura
    // secondo lo standard AES. Questo wrapper si limita ad adattare
    // i segnali dell'interfaccia bus alle porte del core.
    aes u_aes_core (
        // Collegamento dei segnali di clock e reset
        .clk        (clk_i),           // Clock di sistema
        .reset_n    (rst_ni),          // Reset attivo basso
        
        // Collegamento dei segnali di controllo
        .cs         (aes_cs),          // Chip Select dal wrapper
        .we         (aes_we),          // Write Enable dal wrapper
        
        // Collegamento dell'interfaccia dati
        .address    (aes_address),     // Indirizzo registro (8 bit)
        .write_data (aes_write_data),  // Dati in scrittura (32 bit)
        .read_data  (aes_read_data)    // Dati in lettura (32 bit)
    );

endmodule
