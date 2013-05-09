/*
 * Note: this file is generated by the 'instructions' tool in the oldland
 * repository.  Don't hand edit!
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "oldland-types.h"

static const struct oldland_operand operands[] = {
        [OPERAND_INDEX] = {
                .name = "index",
                .type = OPERAND_INDEX,
                .is_meta = true,
                .meta = {
                        .ops = (const struct oldland_operand *[]) {
                                &operands[OPERAND_RA], &operands[OPERAND_IMM16],
                        },
                        .nr_ops = 2,
                },
        },
        [OPERAND_IMM16PC] = {
                .name = "imm16pc",
                .type = OPERAND_IMM16PC,
                .pcrel = true,
                .def = {
                        .bitpos = 10,
                        .length = 16,
                },
        },
        [OPERAND_IMM16] = {
                .name = "imm16",
                .type = OPERAND_IMM16,
                .pcrel = false,
                .def = {
                        .bitpos = 10,
                        .length = 16,
                },
        },
        [OPERAND_IMM24] = {
                .name = "imm24",
                .type = OPERAND_IMM24,
                .pcrel = true,
                .def = {
                        .bitpos = 0,
                        .length = 24,
                },
        },
        [OPERAND_RD] = {
                .name = "rd",
                .type = OPERAND_RD,
                .pcrel = false,
                .def = {
                        .bitpos = 6,
                        .length = 3,
                },
        },
        [OPERAND_RA] = {
                .name = "ra",
                .type = OPERAND_RA,
                .pcrel = false,
                .def = {
                        .bitpos = 3,
                        .length = 3,
                },
        },
        [OPERAND_RB] = {
                .name = "rb",
                .type = OPERAND_RB,
                .pcrel = false,
                .def = {
                        .bitpos = 0,
                        .length = 3,
                },
        },
};

const struct oldland_instruction instructions_0[] = {
        [OPCODE_AND] = {
                .name = "and",
                .class = 0,
                .opcode = OPCODE_AND,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_LSL] = {
                .name = "lsl",
                .class = 0,
                .opcode = OPCODE_LSL,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_LSR] = {
                .name = "lsr",
                .class = 0,
                .opcode = OPCODE_LSR,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_SUBC] = {
                .name = "subc",
                .class = 0,
                .opcode = OPCODE_SUBC,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_XOR] = {
                .name = "xor",
                .class = 0,
                .opcode = OPCODE_XOR,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_SUB] = {
                .name = "sub",
                .class = 0,
                .opcode = OPCODE_SUB,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_ADD] = {
                .name = "add",
                .class = 0,
                .opcode = OPCODE_ADD,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_ADDC] = {
                .name = "addc",
                .class = 0,
                .opcode = OPCODE_ADDC,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_ASR] = {
                .name = "asr",
                .class = 0,
                .opcode = OPCODE_ASR,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RA]},
                .op2 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .op3 = {},
                .formatsel = 9,
        }, 
        [OPCODE_BST] = {
                .name = "bst",
                .class = 0,
                .opcode = OPCODE_BST,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_BIC] = {
                .name = "bic",
                .class = 0,
                .opcode = OPCODE_BIC,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_ASL] = {
                .name = "asl",
                .class = 0,
                .opcode = OPCODE_ASL,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RA]},
                .op2 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .op3 = {},
                .formatsel = 9,
        }, 
        [OPCODE_MOVHI] = {
                .name = "movhi",
                .class = 0,
                .opcode = OPCODE_MOVHI,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM16]},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_OR] = {
                .name = "or",
                .class = 0,
                .opcode = OPCODE_OR,
                .nr_operands = 3,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_RA]},
                .op3 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .formatsel = 9,
        }, 
        [OPCODE_CMP] = {
                .name = "cmp",
                .class = 0,
                .opcode = OPCODE_CMP,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RA]},
                .op2 = {&operands[OPERAND_IMM16], &operands[OPERAND_RB]},
                .op3 = {},
                .formatsel = 9,
        }, 
};

const struct oldland_instruction instructions_1[] = {
        [OPCODE_RET] = {
                .name = "ret",
                .class = 1,
                .opcode = OPCODE_RET,
                .nr_operands = 0,
                .op1 = {},
                .op2 = {},
                .op3 = {},
                .formatsel = -1,
        }, 
        [OPCODE_CALL] = {
                .name = "call",
                .class = 1,
                .opcode = OPCODE_CALL,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BNE] = {
                .name = "bne",
                .class = 1,
                .opcode = OPCODE_BNE,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_B] = {
                .name = "b",
                .class = 1,
                .opcode = OPCODE_B,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BGT] = {
                .name = "bgt",
                .class = 1,
                .opcode = OPCODE_BGT,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
        [OPCODE_BEQ] = {
                .name = "beq",
                .class = 1,
                .opcode = OPCODE_BEQ,
                .nr_operands = 1,
                .op1 = {&operands[OPERAND_IMM24], &operands[OPERAND_RB]},
                .op2 = {},
                .op3 = {},
                .formatsel = 25,
        }, 
};

const struct oldland_instruction instructions_2[] = {
        [OPCODE_STR8] = {
                .name = "str8",
                .class = 2,
                .opcode = OPCODE_STR8,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RB]},
                .op2 = {&operands[OPERAND_IMM16], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 9,
        }, 
        [OPCODE_STR32] = {
                .name = "str32",
                .class = 2,
                .opcode = OPCODE_STR32,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RB]},
                .op2 = {&operands[OPERAND_IMM16], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 9,
        }, 
        [OPCODE_LDR8] = {
                .name = "ldr8",
                .class = 2,
                .opcode = OPCODE_LDR8,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM16], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 9,
        }, 
        [OPCODE_LDR16] = {
                .name = "ldr16",
                .class = 2,
                .opcode = OPCODE_LDR16,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM16], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 9,
        }, 
        [OPCODE_LDR32] = {
                .name = "ldr32",
                .class = 2,
                .opcode = OPCODE_LDR32,
                .nr_operands = 2,
                .op1 = {&operands[OPERAND_RD]},
                .op2 = {&operands[OPERAND_IMM16], &operands[OPERAND_INDEX]},
                .op3 = {},
                .formatsel = 9,
        }, 
};

