PROJECT_NAME	= fssbl

BUILD_DIR 		= build
OBJ_DIR 		= $(BUILD_DIR)/obj
BIN_DIR 		= $(BUILD_DIR)/bin
LD_SCRIPT       = ld/$(PROJECT_NAME).ld

C_SRCS 			= $(wildcard ./*.c) $(wildcard ./3p/*.c)
CPP_SRCS 		= $(wildcard ./*.cpp) $(wildcard ./3p/*.cpp)
ASM_SRCS 		= $(wildcard ./*.s) $(wildcard ./3p/*.s)
XASM_SRCS 		= $(wildcard ./*.S) $(wildcard ./3p/*.S)
TESTS_SRCS 		= $(wildcard ./tests/*.c)
SRCS_PATHS		= $(sort $(dir $(C_SRCS)) $(dir $(CPP_SRCS))		\
				  $(dir $(ASM_SRCS)) $(dir $(TESTS_SRCS))			\
				  $(dir $(XASM_SRCS)))

C_OBJ 			= $(addprefix $(OBJ_DIR)/, $(notdir $(C_SRCS:.c=.o)))
CPP_OBJ 		= $(addprefix $(OBJ_DIR)/, $(notdir $(CPP_SRCS:.c=.o)))
ASM_OBJ 		= $(addprefix $(OBJ_DIR)/, $(notdir $(ASM_SRCS:.s=.o)))
XASM_OBJ 		= $(addprefix $(OBJ_DIR)/, $(notdir $(XASM_SRCS:.S=.o)))
C_TEST_OBJ		= $(addprefix $(OBJ_DIR)/, $(notdir $(TESTS_SRCS:.c=.o)))

OBJS 			= $(C_OBJ) $(CPP_OBJ) $(ASM_OBJ) $(XASM_OBJ)

RV_NAME 		= riscv32-unknown-elf
RV_PATH         = /opt/riscv
RV_LIB_PATH		= $(RV_PATH)/$(RV_NAME)/lib
RV_PREFIX		= $(RV_PATH)/bin/$(RV_NAME)-
CC 				= $(RV_PREFIX)gcc
AS				= $(RV_PREFIX)gcc -x assembler-with-cpp
LD        		= $(RV_PREFIX)ld
OBJDUMP   		= $(RV_PREFIX)objdump
OBJCOPY   		= $(RV_PREFIX)objcopy

CFLAGS    		= -march=rv32im_zicsr_zifencei -O2 				\
				  -fno-asynchronous-unwind-tables   			\
				  -fno-unwind-tables -Wall -Wextra				\
				  -DFSSBL_SKIP_SB # Used to skip the Whole secure boot in simulation
LDFLAGS	  		= -nostdlib -L$(RV_LIB_PATH) -lc -T$(LD_SCRIPT) \
				  --defsym=ROM_ORIGIN=$(ROM_ORIGIN)     		\
				  --defsym=ROM_LEN=$(ROM_LEN)           		\
				  --defsym=PRS_ORIGIN=$(PRS_ORIGIN)     		\
				  --defsym=PRS_LEN=$(PRS_LEN)           		\
				  --defsym=OCM_ORIGIN=$(OCM_ORIGIN)     		\
				  --defsym=OCM_LEN=$(OCM_LEN)           		\
				  --defsym=SM_BIN_START=$(SM_BIN_START)
INC_DIRS   		= -I./inc -I./3p/inc -I../sm/inc

VPATH 			= $(SRCS_PATHS)

MKDIR     		= @mkdir -p $(@D)

## Targets

.PHONY: default tests clean

default: $(BIN_DIR)/$(PROJECT_NAME).s3 $(BIN_DIR)/$(PROJECT_NAME).bin

tests: OBJS += $(C_TEST_OBJ)
tests: default

$(BIN_DIR)/$(PROJECT_NAME).s3: $(BIN_DIR)/$(PROJECT_NAME).elf
	$(MKDIR)
	$(OBJCOPY) $^ -O srec --srec-forceS3 $@

$(BIN_DIR)/$(PROJECT_NAME).bin: $(BIN_DIR)/$(PROJECT_NAME).elf
	$(OBJCOPY) $^ -O binary $@

$(BIN_DIR)/$(PROJECT_NAME).elf: $(OBJS)
	$(MKDIR)
	$(LD) $^ $(LDFLAGS) -o $@

$(OBJ_DIR)/%.o: %.c
	$(MKDIR)
	$(CC) $(CFLAGS) $(INC_DIRS) -c $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(MKDIR)
	$(CC) $(CFLAGS) $(INC_DIRS) -c $^ -o $@

$(OBJ_DIR)/%.o: %.s
	$(MKDIR)
	$(AS) $(CFLAGS) $(INC_DIRS) -c $^ -o $@

$(OBJ_DIR)/%.o: %.S
	$(MKDIR)
	$(AS) $(CFLAGS) $(INC_DIRS) -c $^ -o $@

clean:
	rm -rf measure $(BUILD_DIR)