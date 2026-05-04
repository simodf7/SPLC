#include "libcsoc.h"
#include <stdio.h>

/*
*   Simulazione di Test Semplice per SoC
*   Questa simulazione fornisce un ambiente di test semplificato con cicli di clock estesi
*/

int main(int argc, char** argv)
{
    csoc_ctx ctx;
    csoc_t system;
    csoc_ctx_init(&ctx, argc, argv);
    csoc_soc_init(&system, &ctx);

    printf("=== Avvio Simulazione Test ===\n");
    printf("Simulazione SoC con cicli estesi per test completi...\n");

    int max_cycles = 100000000;  
    int cycle_step = 1000;  
    
    for (int cycles = 0; cycles < max_cycles; cycles += cycle_step) {
        // Elabora i cicli in step
        if (csoc_soc_proceedClockCycles(&system, cycle_step)) {
            printf("Simulazione completata dopo %d cicli\n", cycles + cycle_step);
            break;
        }
        
        // Stampa il progresso ogni 10k cicli
        if ((cycles % 10000) == 0 && cycles > 0) {
            printf("Progresso simulazione: %d/%d cicli\n", cycles, max_cycles);
        }
    }

    printf("=== Simulazione Test Completata ===\n");

    csoc_soc_destroy(&system);
    csoc_ctx_destroy(&ctx);
    
    return 0;
}