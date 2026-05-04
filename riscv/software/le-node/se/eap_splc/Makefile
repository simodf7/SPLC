PROJECT_NAME	= $(notdir $(shell pwd))

BUILD_DIR 		= build
OBJ_DIR 		= $(BUILD_DIR)/obj
BIN_DIR 		= $(BUILD_DIR)/bin
LD_SCRIPT       = ../ld/se.ld

SRCS 			= $(wildcard ./*.c)

SRCS_PATHS		= $(dir $(SRCS))

OBJS 			= $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

RV_NAME 		= riscv32-unknown-elf
RV_PATH         = /opt/riscv
RV_LIB_PATH		= $(RV_PATH)/$(RV_NAME)/lib
RV_PREFIX		= $(RV_PATH)/bin/$(RV_NAME)-
CC 				= $(RV_PREFIX)gcc
AS				= $(RV_PREFIX)gcc -x assembler-with-cpp
LD        		= $(RV_PREFIX)gcc
OBJDUMP   		= $(RV_PREFIX)objdump
OBJCOPY   		= $(RV_PREFIX)objcopy

CFLAGS    		= -march=rv32imc_zicsr_zifencei -O2 				\
				  -fno-asynchronous-unwind-tables   				\
				  -fno-unwind-tables -Wall -Wextra -mcmodel=medany	
LDFLAGS	  		= -nostdlib -L$(RV_LIB_PATH) -lc -T$(LD_SCRIPT) -mno-relax

INC_DIRS   		= -I./inc -I.. -I../common -I../../sm/inc -I../../sm/platform/inc

VPATH 			= $(SRCS_PATHS)

MKDIR     		= @mkdir -p $(@D)

## Targets

.PHONY: default clean

default: $(BIN_DIR)/$(PROJECT_NAME).c

$(BIN_DIR)/$(PROJECT_NAME).c: $(BIN_DIR)/$(PROJECT_NAME).bin
	srec_cat $^ -binary -O $(BIN_DIR)/$(PROJECT_NAME)_bin.c -C-Array $(PROJECT_NAME)_bin -INClude

$(BIN_DIR)/$(PROJECT_NAME).bin: $(BIN_DIR)/$(PROJECT_NAME).elf
	$(OBJCOPY) $^ -O binary $@

$(BIN_DIR)/$(PROJECT_NAME).elf: $(OBJS)
	$(MKDIR)
	$(LD) $^ $(LDFLAGS) -o $@

$(OBJ_DIR)/%.o: %.c
	$(MKDIR)
	$(CC) $(CFLAGS) $(INC_DIRS) -c $^ -o $@

clean:
	rm -rf $(BUILD_DIR)