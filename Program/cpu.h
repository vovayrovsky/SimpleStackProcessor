#include "std_conf.h"
#include "CS.h"

#include <stdint.h>
#include <stdio.h>
#include <assert.h>

#define STK_LOAD(a) {SR--; assert (SR < MEMORY_SIZE && SR > 0); mem[SR] = a;}
#define STK_POP() {SR++; assert(SR < MEMORY_SIZE && SR > 0);}

class CPU
    {
    bool wint_flag;

    uint16_t PC;
    uint16_t SR;

    public:
        CPU():
            wint_flag (false),
            PC (ENTRY_POINT),
            SR (STACK_START_POINT + 1)
            {}

    bool CLK (uint16_t* mem);
    void INT();
    };

bool CPU :: CLK (uint16_t* mem)
    {
    if (wint_flag)
        return false;

    assert (PC < MEMORY_SIZE);
    uint16_t cmd = mem[PC];

    printf ("Command: %x, PC: %x, ", cmd >> OPCODE_SHIFT, PC);

    uint16_t buf = 0;

    switch (cmd >> OPCODE_SHIFT)
        {
        case PUSH:
            STK_LOAD (cmd);
            break;

        case POP:
            STK_POP();
            break;

        case DUP:
            STK_LOAD (mem[SR + 1]);
            break;

        case SWAP:
            assert (SR + 1 < MEMORY_SIZE);
            buf = mem[SR + 1];
            mem[SR + 1] = mem[SR];
            mem[SR] = buf;
            break;

        case JMP:
            assert (SR < MEMORY_SIZE);
            assert (mem[SR] < MEMORY_SIZE);
            PC = mem[SR] - 1;
            STK_POP();
            break;

        case JE:
            assert (SR + 1 < MEMORY_SIZE);
            assert (mem[SR + 1] < MEMORY_SIZE);
            if (mem[SR] == 0)
                PC = mem[SR + 1] - 1;
            STK_POP();
            break;

        case ADD:
            assert (SR + 1 < MEMORY_SIZE);
            mem[SR + 1] += mem[SR];
            STK_POP();
            break;

        case SUB:
            assert (SR + 1 < MEMORY_SIZE);
            mem[SR + 1] -= mem[SR];
            STK_POP();
            break;

        case MUL:
            assert (SR + 1 < MEMORY_SIZE);
            mem[SR + 1] *= mem[SR];
            STK_POP();
            break;

        case DIV:
            assert (SR + 1 < MEMORY_SIZE);
            assert (mem[SR]);
            mem[SR + 1] /= mem[SR];
            STK_POP();
            break;

        case MOV:
            assert (SR + 1 < MEMORY_SIZE);
            assert (mem[SR + 1] < MEMORY_SIZE);
            mem[mem[SR]] = mem[SR + 1];
            STK_POP();
            break;

        case MSR:
            assert (SR < MEMORY_SIZE);
            assert (mem[SR] < MEMORY_SIZE);
            SR = mem[SR];
            break;

        case PSR:
            STK_LOAD (SR + 1);
            break;

        case PPC:
            STK_LOAD (PC - 1);
            break;

        case WINT:
            wint_flag = true;
            break;

        case HLT: return true;

        default: return true;
        }

    printf ("SR: %d, [SR]: %d\n", SR, mem[SR]);

    PC++;
    return false;
    }

void CPU :: INT()
    {
    wint_flag = false;
    }
