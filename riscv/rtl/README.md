# CERTIFY low-end RISCV node Hardware

The cv32e40s-SE custom core and SoC source code. The complete documentation is available in `docs`.

## Status of the HW specs implementation

| **Specification** | **Status** |
|---|---|
| The core CV32E40S is extended with a secure ROM used as a root of trust. | 🟨 Draft, see (1) |
| The core is featuring the SMEPMP extension. | 🟩 Completed |
| The core is extended with a new state. This state is called secure_lvl and can have values from {S, NS}.<br>S means secure, NS means non-secure. The core always boots with secure_lvl = S. | 🟩 Completed |
| The core sends the value of secure_lvl to its PMPs. | 🟩 Completed |
| The core pmpXcfg (for each X in ISA) registers are modified as follows:<br>1) Bit 6, named from now on pmpXcfg.SL, can be written with values 0 and 1 iff pmpXcfg.L != 1<br>2) The configuration of a register pmpXcfg and its counterpart pmpaddrX is said to be Secure<br>Locked if pmpXcfg.SL == 1 and any writes to them are ignored if secure_lvl != S.<br>If pmpXcfg.A == TOR, any writes to pmpaddr(X-1) are also ignored | 🟩 Completed |
| The core PMPs are modified in such a way that if secure_lvl == S and the execution mode is Machine,<br>all access is permitted. In all other cases the PMP works normally. | 🟩 Completed |
| The core ISA is extended with new instructions:<br>1) SMENTER<br>2) SMEXIT | 🟨 Mock, see (2) |
| The SoC has an OCM and a PRS. The OCM is a volatile memory, while the PRS is a non-volatile memory. | 🟨 Draft, see (1) |
| The SoC has a secure perimeter that includes the core, the OCM, and the PRS. The hardware in the secure perimeter maintains the confidentiality and integrity of the data/software it holds. | 🟦 Out of scope, see (3) |

### Status notes
1) A single addressable memory is in place in the SoC hardware (see `ram_2p.sv`). This memory is logically divided into four regions: ROM, PRS, OCM and FLASH.
2) The ISA is not yet extended with these two instructions. There is a memory mapped peripheral (see `sim_only/secure_control.sv`) that stores the security level and feeds it back to the core. The software will implement `MOCK_SMENTER` by:
    1) writing 1 to the register of this peripheral,
    2) Issuing an `ECALL` instruction.

    and implement `MOCK_SMEXIT` by:
    1) writing 0 to the register of this peripheral,
    2) Issuing an `MRET` instruction.
3) This is a physical implementation requirement and is out of the scope for this development phase.