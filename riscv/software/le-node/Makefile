## Memory Map
ROM_ORIGIN = 0x00200000
ROM_LEN    = 4K
# PRS is a 4KB on-chip secure non-volatile storage.
# It's used to store the SM code current
# version informations.
PRS_ORIGIN = 0x00201000
PRS_LEN	   = 4K
OCM_ORIGIN = 0x00210000
OCM_LEN    = 512K
FLS_ORIGIN = 0x00290000
FLS_LEN    = 512K

## Secure Monitor configuration
# The position in Flash where SM is going to be flashed
SM_BIN_START            = $(FLS_ORIGIN)
# The dimention of the stack allocated to SM
SM_STACK_LEN            = 0x4000
# The dimention, expressed in log2 base, of the
# max size for a single Secure Enclave AND
# The max dimention of a single shared memory
# allocated to a Secure Enclave.
SM_MAX_SE_SHM_SIZE_LOG2 = 14
# Secure storage (on flash) size
SM_SECURE_STORAGE_SIZE 	= 0x20000

# The entry point of the Untrusted M-mode code
UNTRUSTED_ENTRY    = 0x00370080

.PHONY: vmem sm fssbl clean

vmem: SM_OFFSET = $(shell printf "0x%X" $$(( $(SM_BIN_START) - $(ROM_ORIGIN) )))
vmem: sm fssbl
	srec_cat 	fssbl/build/bin/fssbl.bin -binary -byte-swap 4 					\
				sm/build/bin/sm.bin -binary -byte-swap 4 -offset $(SM_OFFSET)	\
				-o ram.vmem -vmem
	mkdir -p ../../vmem
	cp ram.vmem ../../vmem

sm:
	make -C sm 	ROM_ORIGIN=$(ROM_ORIGIN) ROM_LEN=$(ROM_LEN)        	\
				PRS_ORIGIN=$(PRS_ORIGIN) PRS_LEN=$(PRS_LEN)         \
				OCM_ORIGIN=$(OCM_ORIGIN) OCM_LEN=$(OCM_LEN)        	\
				FLS_ORIGIN=$(FLS_ORIGIN) FLS_LEN=$(FLS_LEN)        	\
				SM_STACK_LEN=$(SM_STACK_LEN)                       	\
				SM_MAX_SE_SHM_SIZE_LOG2=$(SM_MAX_SE_SHM_SIZE_LOG2) 	\
				SM_SECURE_STORAGE_SIZE=$(SM_SECURE_STORAGE_SIZE) 	\
				UNTRUSTED_ENTRY=$(UNTRUSTED_ENTRY)

fssbl:
	make -C fssbl	ROM_ORIGIN=$(ROM_ORIGIN) ROM_LEN=$(ROM_LEN)           \
					PRS_ORIGIN=$(PRS_ORIGIN) PRS_LEN=$(PRS_LEN)           \
					OCM_ORIGIN=$(OCM_ORIGIN) OCM_LEN=$(OCM_LEN)           \
					FLS_ORIGIN=$(FLS_ORIGIN) FLS_LEN=$(FLS_LEN)           \
					SM_BIN_START=$(SM_BIN_START)

clean:
	rm -f *.vmem
	make -C sm clean
	make -C fssbl clean