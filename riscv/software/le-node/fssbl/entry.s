/* 
 *           ________________ ____  __ 
 *          / ____/ ___/ ___// __ )/ / 
 *         / /_   \__ \\__ \/ __  / /  
 *        / __/  ___/ /__/ / /_/ / /___
 *       /_/    /____/____/_____/_____/
 *                              
 * The First Stage Secure Boot Loader of CERTIFY low-end OpenHW node.
 * 
 *                           Author: Raffaele del Gaudio
 */

.section .text
/* 
 * The starting point of the execution after the reset.
 * The following code is assumed to be executed with 
 * priv_lvl == M and secure_lvl == S
 */
.global fssbl_entry
fssbl_entry:
    la sp, _stack_start
    jal ra, fssbl_boot
/* If we got here, secure boot failed */
boot_failed:
    wfi
    jal x0, fssbl_entry

/*
* The fssbl exception vector. We need this because we can't
* assume an exception/interrupt isn't triggered at startup.
* This section has to be down here, since we have to
* disable rvc for it.
*/
.section .isr_vector, "ax"
.option norvc

.rept 33 # 32 entries + 1 for the boot address of the core
    jal x0, fssbl_entry
.endr
