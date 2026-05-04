#include "libcsoc.h"
#include <stdio.h>

/*
*   Here you write the Certify SoC (CSoC) simulation
*/

char buffer[512] = {0};
size_t i = 0;

int main(int argc, char** argv)
{
    csoc_ctx ctx;
    csoc_t system;
    csoc_ctx_init(&ctx, argc, argv);
    csoc_soc_init(&system, &ctx);

    // Simulation

    while (!csoc_soc_proceedClockCycles(&system, 2000))
    {
        i += csoc_soc_Recv(&system, buffer + i, sizeof(buffer) - i);
        if (i > 0 && buffer[i-1] == '\0')
        {
            printf("Received this string from the SoC: %s", buffer);
            char len = i;
            printf("Sending the length (%d) of the string back to the SoC...\n", len);
            csoc_soc_proceedSend(&system, &len, 1);
            i = 0; // To avoid entering again the this if block
        }
    }

    // Epilogue
    csoc_soc_destroy(&system);
    csoc_ctx_destroy(&ctx);
}
