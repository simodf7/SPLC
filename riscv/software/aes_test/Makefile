PROJECT_NAME	= aes_test

BUILD_DIR 		= build
OBJ_DIR 		= $(BUILD_DIR)/obj
BIN_DIR 		= $(BUILD_DIR)/bin
LD_SCRIPT       = ld/$(PROJECT_NAME).ld

C_SRCS 			= $(wildcard ./src/*.c) $(wildcard ./lib/*.c)
ASM_SRCS 		= $(wildcard ./src/*.s) $(wildcard ./lib/*.s)

SRCS_PATHS		= $(sort $(dir $(C_SRCS)) $(dir $(ASM_SRCS)))

C_OBJ 			= $(addprefix $(OBJ_DIR)/, $(notdir $(C_SRCS:.c=.o)))
ASM_OBJ 		= $(addprefix $(OBJ_DIR)/, $(notdir $(ASM_SRCS:.s=.o)))

OBJS 			= $(C_OBJ) $(CPP_OBJ) $(ASM_OBJ)

RV_NAME 		= riscv32-unknown-elf
RV_PATH         = /opt/riscv
RV_LIB_PATH		= $(RV_PATH)/$(RV_NAME)/lib
RV_PREFIX		= $(RV_PATH)/bin/$(RV_NAME)-
CC 				= $(RV_PREFIX)gcc
AS				= $(RV_PREFIX)gcc -x assembler-with-cpp
LD        		= $(RV_PREFIX)ld
OBJDUMP   		= $(RV_PREFIX)objdump
OBJCOPY   		= $(RV_PREFIX)objcopy

CFLAGS    		= -march=rv32im_zicsr_zifencei -O2 						\
				  -fno-asynchronous-unwind-tables   					\
				  -fno-unwind-tables -Wall -Wextra						\
				  -Wno-stringop-truncation								\
				  -Wno-unused-function
LDFLAGS	  		= -nostdlib -L$(RV_LIB_PATH) -lc -T$(LD_SCRIPT)
INC_DIRS   		= -I./src -I./lib

SRECFLAGS = -offset 0x0000 -byte-swap 4

VPATH 			= $(SRCS_PATHS)

MKDIR     		= @mkdir -p $(@D)

## Targets

.PHONY: all copy_vmem clean

all: copy_vmem

copy_vmem: $(BIN_DIR)/ram.vmem
	mkdir -p ../../vmem
	cp $(BIN_DIR)/ram.vmem ../../vmem/ram.vmem

$(BIN_DIR)/ram.vmem: $(BIN_DIR)/$(PROJECT_NAME).bin
	srec_cat $(BIN_DIR)/$(PROJECT_NAME).bin -binary $(SRECFLAGS) -o $(BIN_DIR)/ram.vmem -vmem

$(BIN_DIR)/$(PROJECT_NAME).bin: $(BIN_DIR)/$(PROJECT_NAME).elf
	$(OBJCOPY) $^ -O binary $@

$(BIN_DIR)/$(PROJECT_NAME).elf: $(OBJS)
	$(MKDIR)
	$(LD) $^ $(LDFLAGS) -o $@

$(OBJ_DIR)/%.o: %.c
	$(MKDIR)
	$(CC) $(CFLAGS) $(INC_DIRS) -c $^ -o $@

$(OBJ_DIR)/%.o: %.s
	$(MKDIR)
	$(AS) $(CFLAGS) $(INC_DIRS) -c $^ -o $@

clean:
	rm -rf $(BUILD_DIR)