# SimpleStackProcessor

## Command system

All commands start with 6-bit opcode. Others bits are unusable except PUSH command. PUSH pushes 10 last bits into stack.

To see opcode list: [CS.h](Program/CS.h)

# Memory map

Common memory size: 0xFFFF bytes
Memory starts with 0x20 reserved bytes. (From 0x0000 to 0x0019)
Entry point at 0x0020.
Start stack point at 0xFFFE. 


