# CERTIFY low-end RISCV node Simulator
This repo contains a platform for simulating RV32 applications the custom [CERTIFY SoC](https://github.com/trustup/certify-soc-hw/).

The design of the SoC is written in SystemVerilog, then Verilator is used to obtain a cpp representation of that model. On top of the "verilated" code it's built _libcsoc_, a thin wrapper that allows an easier management of the SoC model simulation.

_libcsoc_ allows for a clock cycle precise simulation while abstracting away some of the configuration required by Verilator and provide a simple way to "communicate" with the SoC through a "socket-like" api.

## Download
This repository makes use of submodule. To correctly clone the repo use
    
    git clone --recursive https://github.com/trustup/certify-soc-sim.git

## Prerequisites

### Verilator
Verilator is available at https://github.com/verilator/verilator

Clone the repo and follow the instructions to build the **v5.020**.

### RISCV toolchain
The toolchain is available at https://github.com/riscv-collab/riscv-gnu-toolchain

Configure and build the toolchain as follows:

    ./configure --prefix=/opt/riscv --with-arch=rv32gc --with-abi=ilp32
    make

### SRecord
The platform makes use of srec_cat to extract vmem files from bin.\
To install run:

	apt-get install srecord

### GTKWave
GTKWave is used to view the trace of the executions.\
To install run:

	apt-get install gtkwave

## Folder structure

    rtl        : The SystemVerilog desing of the SoC.
    libcsoc    : The sources of libcsoc. Will also contain the "verilated" SoC.
    simulation : Contains the folders of the simulations
    software   : Contains the folders of the software
    vmem       : Will contain the "ram.vmem" file of the current simulation
    waves      : (If tracing is enabled and used) Will contain the traces of the simulation

## Use
Run `make info` and follow the steps in order to verilate the SoC, build libcsoc static library and build a simulation along with a SoC software.

## Extend the platform
At the moment there are two simulations along with their respective SoC software: `default` and `secure_boot`.\
You can build and run them by running `make default@default` or `make secure_boot@secure_boot` and then run `./csoc_simulation`.

Any combination of simulation and SoC software is allowed by the make build process and is encouraged when needed (i.e. the same simulation code is used along with different SoC software).

### Create a new simulation
To add a new simulation named `new` follow this steps:

1. Copy `simulation/default` in `simulation/new`
2. Edit the files in `src` and `lib` to create your simulation.
3. (Once you have already built libcsoc) Run `make new@[soft name]` to build your simulation `new` along with `[soft name]` SoC software.

### Create a new SoC software
To add a new SoC software named `new` follow this steps:

3. Copy `software/default` in `software/new`
4. Edit the files in `src` and `lib` to create your simulation. You can also edit the linker script in `ld`.
5. (Once you have already built libcsoc) Run `make [sim name]@new` to build `[sim name]` simulation along with your `new` SoC software.

