//
// Created by David Loh on 20.08.23.
//

#ifndef INC_6502_EMULATOR_CPU_H
#define INC_6502_EMULATOR_CPU_H

#include "memory.h"

class CPU {
private:
    Memory memory;
public:
    explicit CPU(Memory);
};


#endif //INC_6502_EMULATOR_CPU_H
