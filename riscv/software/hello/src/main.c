#include "system.h"
#include "vstream.h"

int main(void)
{
	system_init();
	
    // Output functions like putc, puts, printf (available in from system.h),
    // write characters to a special hardware pheriferal, called simulator_ctrl,
    // and available in (simulator_ctrl.sv), that in his turn puts them in a file
    // in the root simulator folder called soc_system.log.
    // Use these functions if you want a simple output terminal.
    puts("Hello World!\n");

    char s[] = "Hello to simulation!\n";
    // vstream_* functions (from vstream.h) send/receive bytes using SoC's UART
    // (available in uart.sv). Bytes sent from the UART can be received by the
    // simulation software counterpart and be used to create communication patterns.
    // NOTE: When bytes are sent with the UART, special care must be taken to be
    // sure that the simulation is not halted before the simulator software can
    // receive all the bytes
    printf("Sending a string to the simulation with length %d...\n", sizeof(s));
    vstream_send(s, sizeof(s));

    // This acts as a barrier looping until the SoC has received the specified
    // number of bytes
    vstream_wait_for(1);
    char r;
    vstream_rcv(&r, 1);
    printf("Received a byte from simulation with value: %d\n", r);

    return 0;
}
