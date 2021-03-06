---
title: Oldland JTAG Protocol
layout: default
root: "../"
---

JTAG crosses multiple clock domains, need to synchronize signals across those
domains, simplest way is to use a dual port ram as a buffer for the command +
data and then have ready + ack handshaking.

Memory map (Nx32-bit ram, word addresses):

  - 0x0:	Command
  - 0x1:	Address/Register number
  - 0x2:	Data word
  - 0x3:	Result

JTAG commands:

  - Write buffer address - 2 bit address, 32 bit data.
  - Read buffer address - 2 bit address.

Reads are 33 bits - a valid bit (32) + data (31:0).  Commands are executed
when address 0 is written.

Command list:

  - 0x0:  Enter debug - halts CPU
    - No address/data word.
  - 0x1:  Exit debug - resumes execution.
    - No address/data word.
  - 0x2:  Step CPU.
    - No address, data word must be 0, reserved for future use.
  - 0x3:  Read register
    - Address is register number, no data word.
  - 0x4:  Write register
    - Address is register number, data is value to write.
  - 0x5:  Read memory 32 bits
    - Address is the memory address, no data word.
  - 0x6:  Read memory 16 bits
  - 0x7:  Read memory 8 bits
  - 0x8:  Write memory 32 bits
    - Address is the memory address, data word is the value to write.
  - 0x9:  Write memory 16 bits
  - 0xa:  Write memory 8 bits
  - 0xb:  Reset CPU core
  - 0xc:  Synchronize caches
  - 0xd:  Read CPUID register
    - Address is register number, no data word.
  - 0xe:  Get execution status
    - Read data:
      - [0]     running
      - [1]     breakpoint hit, cleared on run
      - [31:2]  SBZ

Register/memory operations may only be issued whilst the CPU is stopped.

For handshaking:

- After writing command word, JTAG domain sets dbg_req high
- The CPU domain executes the command and sets dbg_compl high.
- The JTAG domain sets dbg_req low and waits for dbg_compl to go low before
issuing another command.
- The JTAG valid bit is set when dbg_compl has gone high but another command
has not yet been issued.
