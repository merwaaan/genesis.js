[0x0000] = { 1, "NOP" },
[0x0001] = { 3, "LD BC, nn" },
[0x0002] = { 1, "LD (BC), A" },
[0x0003] = { 1, "INC BC" },
[0x0004] = { 1, "INC B" },
[0x0005] = { 1, "DEC B" },
[0x0006] = { 2, "LD B, n" },
[0x0007] = { 1, "RLCA" },
[0x0008] = { 1, "EX AF, AF'" },
[0x0009] = { 1, "ADD HL, BC" },
[0x000a] = { 1, "LD A, (BC)" },
[0x000b] = { 1, "DEC BC" },
[0x000c] = { 1, "INC C" },
[0x000d] = { 1, "DEC C" },
[0x000e] = { 2, "LD C, n" },
[0x000f] = { 1, "RRCA" },
[0x0010] = { 2, "DJNZ PC + n" },
[0x0011] = { 3, "LD DE, nn" },
[0x0012] = { 1, "LD (DE), A" },
[0x0013] = { 1, "INC DE" },
[0x0014] = { 1, "INC D" },
[0x0015] = { 1, "DEC D" },
[0x0016] = { 2, "LD D, n" },
[0x0017] = { 1, "RLA" },
[0x0018] = { 2, "JR PC + n" },
[0x0019] = { 1, "ADD HL, DE" },
[0x001a] = { 1, "LD A, (DE)" },
[0x001b] = { 1, "DEC DE" },
[0x001c] = { 1, "INC E" },
[0x001d] = { 1, "DEC E" },
[0x001e] = { 2, "LD E, n" },
[0x001f] = { 1, "RRA" },
[0x0020] = { 2, "JR NZ, PC + n" },
[0x0021] = { 3, "LD HL, nn" },
[0x0022] = { 3, "LD (nn), HL" },
[0x0023] = { 1, "INC HL" },
[0x0024] = { 1, "INC H" },
[0x0025] = { 1, "DEC H" },
[0x0026] = { 2, "LD H, n" },
[0x0027] = { 1, "DAA" },
[0x0028] = { 2, "JR Z, PC + n" },
[0x0029] = { 1, "ADD HL, HL" },
[0x002a] = { 3, "LD HL, (nn)" },
[0x002b] = { 1, "DEC HL" },
[0x002c] = { 1, "INC L" },
[0x002d] = { 1, "DEC L" },
[0x002e] = { 2, "LD L, n" },
[0x002f] = { 1, "CPL" },
[0x0030] = { 2, "JR NC, PC + n" },
[0x0031] = { 3, "LD SP, nn" },
[0x0032] = { 3, "LD (nn), A" },
[0x0033] = { 1, "INC SP" },
[0x0034] = { 1, "INC (HL)" },
[0x0035] = { 1, "DEC (HL)" },
[0x0036] = { 2, "LD (HL), n" },
[0x0037] = { 1, "SCF" },
[0x0038] = { 2, "JR Cy, PC + n" },
[0x0039] = { 1, "ADD HL, SP" },
[0x003a] = { 3, "LD A, (nn)" },
[0x003b] = { 1, "DEC SP" },
[0x003c] = { 1, "INC A" },
[0x003d] = { 1, "DEC A" },
[0x003e] = { 2, "LD A, n" },
[0x003f] = { 1, "CCF" },
[0x0040] = { 1, "LD B, B" },
[0x0041] = { 1, "LD B, C" },
[0x0042] = { 1, "LD B, D" },
[0x0043] = { 1, "LD B, E" },
[0x0044] = { 1, "LD B, H" },
[0x0045] = { 1, "LD B, L" },
[0x0046] = { 1, "LD B, (HL)" },
[0x0047] = { 1, "LD B, A" },
[0x0048] = { 1, "LD C, B" },
[0x0049] = { 1, "LD C, C" },
[0x004a] = { 1, "LD C, D" },
[0x004b] = { 1, "LD C, E" },
[0x004c] = { 1, "LD C, H" },
[0x004d] = { 1, "LD C, L" },
[0x004e] = { 1, "LD C, (HL)" },
[0x004f] = { 1, "LD C, A" },
[0x0050] = { 1, "LD D, B" },
[0x0051] = { 1, "LD D, C" },
[0x0052] = { 1, "LD D, D" },
[0x0053] = { 1, "LD D, E" },
[0x0054] = { 1, "LD D, H" },
[0x0055] = { 1, "LD D, L" },
[0x0056] = { 1, "LD D, (HL)" },
[0x0057] = { 1, "LD D, A" },
[0x0058] = { 1, "LD E, B" },
[0x0059] = { 1, "LD E, C" },
[0x005a] = { 1, "LD E, D" },
[0x005b] = { 1, "LD E, E" },
[0x005c] = { 1, "LD E, H" },
[0x005d] = { 1, "LD E, L" },
[0x005e] = { 1, "LD E, (HL)" },
[0x005f] = { 1, "LD E, A" },
[0x0060] = { 1, "LD H, B" },
[0x0061] = { 1, "LD H, C" },
[0x0062] = { 1, "LD H, D" },
[0x0063] = { 1, "LD H, E" },
[0x0064] = { 1, "LD H, H" },
[0x0065] = { 1, "LD H, L" },
[0x0066] = { 1, "LD H, (HL)" },
[0x0067] = { 1, "LD H, A" },
[0x0068] = { 1, "LD L, B" },
[0x0069] = { 1, "LD L, C" },
[0x006a] = { 1, "LD L, D" },
[0x006b] = { 1, "LD L, E" },
[0x006c] = { 1, "LD L, H" },
[0x006d] = { 1, "LD L, L" },
[0x006e] = { 1, "LD L, (HL)" },
[0x006f] = { 1, "LD L, A" },
[0x0070] = { 1, "LD (HL), B" },
[0x0071] = { 1, "LD (HL), C" },
[0x0072] = { 1, "LD (HL), D" },
[0x0073] = { 1, "LD (HL), E" },
[0x0074] = { 1, "LD (HL), H" },
[0x0075] = { 1, "LD (HL), L" },
[0x0076] = { 1, "HALT" },
[0x0077] = { 1, "LD (HL), A" },
[0x0078] = { 1, "LD A, B" },
[0x0079] = { 1, "LD A, C" },
[0x007a] = { 1, "LD A, D" },
[0x007b] = { 1, "LD A, E" },
[0x007c] = { 1, "LD A, H" },
[0x007d] = { 1, "LD A, L" },
[0x007e] = { 1, "LD A, (HL)" },
[0x007f] = { 1, "LD A, A" },
[0x0080] = { 1, "ADD A, B" },
[0x0081] = { 1, "ADD A, C" },
[0x0082] = { 1, "ADD A, D" },
[0x0083] = { 1, "ADD A, E" },
[0x0084] = { 1, "ADD A, H" },
[0x0085] = { 1, "ADD A, L" },
[0x0086] = { 1, "ADD A, (HL)" },
[0x0087] = { 1, "ADD A, A" },
[0x0088] = { 1, "ADC A, B" },
[0x0089] = { 1, "ADC A, C" },
[0x008a] = { 1, "ADC A, D" },
[0x008b] = { 1, "ADC A, E" },
[0x008c] = { 1, "ADC A, H" },
[0x008d] = { 1, "ADC A, L" },
[0x008e] = { 1, "ADC A, (HL)" },
[0x008f] = { 1, "ADC A, A" },
[0x0090] = { 1, "SUB B" },
[0x0091] = { 1, "SUB C" },
[0x0092] = { 1, "SUB D" },
[0x0093] = { 1, "SUB E" },
[0x0094] = { 1, "SUB H" },
[0x0095] = { 1, "SUB L" },
[0x0096] = { 1, "SUB (HL)" },
[0x0097] = { 1, "SUB A" },
[0x0098] = { 1, "SBC A, B" },
[0x0099] = { 1, "SBC A, C" },
[0x009a] = { 1, "SBC A, D" },
[0x009b] = { 1, "SBC A, E" },
[0x009c] = { 1, "SBC A, H" },
[0x009d] = { 1, "SBC A, L" },
[0x009e] = { 1, "SBC A, (HL)" },
[0x009f] = { 1, "SBC A, A" },
[0x00a0] = { 1, "AND B" },
[0x00a1] = { 1, "AND C" },
[0x00a2] = { 1, "AND D" },
[0x00a3] = { 1, "AND E" },
[0x00a4] = { 1, "AND H" },
[0x00a5] = { 1, "AND L" },
[0x00a6] = { 1, "AND (HL)" },
[0x00a7] = { 1, "AND A" },
[0x00a8] = { 1, "XOR B" },
[0x00a9] = { 1, "XOR C" },
[0x00aa] = { 1, "XOR D" },
[0x00ab] = { 1, "XOR E" },
[0x00ac] = { 1, "XOR H" },
[0x00ad] = { 1, "XOR L" },
[0x00ae] = { 1, "XOR (HL)" },
[0x00af] = { 1, "XOR A" },
[0x00b0] = { 1, "OR B" },
[0x00b1] = { 1, "OR C" },
[0x00b2] = { 1, "OR D" },
[0x00b3] = { 1, "OR E" },
[0x00b4] = { 1, "OR H" },
[0x00b5] = { 1, "OR L" },
[0x00b6] = { 1, "OR (HL)" },
[0x00b7] = { 1, "OR A" },
[0x00b8] = { 1, "CP B" },
[0x00b9] = { 1, "CP C" },
[0x00ba] = { 1, "CP D" },
[0x00bb] = { 1, "CP E" },
[0x00bc] = { 1, "CP H" },
[0x00bd] = { 1, "CP L" },
[0x00be] = { 1, "CP (HL)" },
[0x00bf] = { 1, "CP A" },
[0x00c0] = { 1, "RET NZ" },
[0x00c1] = { 1, "POP BC" },
[0x00c2] = { 3, "JP NZ, nn" },
[0x00c3] = { 3, "JP nn" },
[0x00c4] = { 3, "CALL NZ, nn" },
[0x00c5] = { 1, "PUSH BC" },
[0x00c6] = { 2, "ADD A, n" },
[0x00c7] = { 1, "RST 0h" },
[0x00c8] = { 1, "RET Z" },
[0x00c9] = { 1, "RET" },
[0x00ca] = { 3, "JP Z, nn" },
[0xcb00] = { 1, "RLC B" },
[0xcb01] = { 1, "RLC C" },
[0xcb02] = { 1, "RLC D" },
[0xcb03] = { 1, "RLC E" },
[0xcb04] = { 1, "RLC H" },
[0xcb05] = { 1, "RLC L" },
[0xcb06] = { 1, "RLC (HL)" },
[0xcb07] = { 1, "RLC A" },
[0xcb08] = { 1, "RRC B" },
[0xcb09] = { 1, "RRC C" },
[0xcb0a] = { 1, "RRC D" },
[0xcb0b] = { 1, "RRC E" },
[0xcb0c] = { 1, "RRC H" },
[0xcb0d] = { 1, "RRC L" },
[0xcb0e] = { 1, "RRC (HL)" },
[0xcb0f] = { 1, "RRC A" },
[0xcb10] = { 1, "RL B" },
[0xcb11] = { 1, "RL C" },
[0xcb12] = { 1, "RL D" },
[0xcb13] = { 1, "RL E" },
[0xcb14] = { 1, "RL H" },
[0xcb15] = { 1, "RL L" },
[0xcb16] = { 1, "RL (HL)" },
[0xcb17] = { 1, "RL A" },
[0xcb18] = { 1, "RR B" },
[0xcb19] = { 1, "RR C" },
[0xcb1a] = { 1, "RR D" },
[0xcb1b] = { 1, "RR E" },
[0xcb1c] = { 1, "RR H" },
[0xcb1d] = { 1, "RR L" },
[0xcb1e] = { 1, "RR (HL)" },
[0xcb1f] = { 1, "RR A" },
[0xcb20] = { 1, "SLA B" },
[0xcb21] = { 1, "SLA C" },
[0xcb22] = { 1, "SLA D" },
[0xcb23] = { 1, "SLA E" },
[0xcb24] = { 1, "SLA H" },
[0xcb25] = { 1, "SLA L" },
[0xcb26] = { 1, "SLA (HL)" },
[0xcb27] = { 1, "SLA A" },
[0xcb28] = { 1, "SRA B" },
[0xcb29] = { 1, "SRA C" },
[0xcb2a] = { 1, "SRA D" },
[0xcb2b] = { 1, "SRA E" },
[0xcb2c] = { 1, "SRA H" },
[0xcb2d] = { 1, "SRA L" },
[0xcb2e] = { 1, "SRA (HL)" },
[0xcb2f] = { 1, "SRA A" },
[0xcb38] = { 1, "SRL B" },
[0xcb39] = { 1, "SRL C" },
[0xcb3a] = { 1, "SRL D" },
[0xcb3b] = { 1, "SRL E" },
[0xcb3c] = { 1, "SRL H" },
[0xcb3d] = { 1, "SRL L" },
[0xcb3e] = { 1, "SRL (HL)" },
[0xcb3f] = { 1, "SRL A" },
[0xcb40] = { 1, "BIT 0, B" },
[0xcb41] = { 1, "BIT 0, C" },
[0xcb42] = { 1, "BIT 0, D" },
[0xcb43] = { 1, "BIT 0, E" },
[0xcb44] = { 1, "BIT 0, H" },
[0xcb45] = { 1, "BIT 0, L" },
[0xcb46] = { 1, "BIT 0, (HL)" },
[0xcb47] = { 1, "BIT 0, A" },
[0xcb48] = { 1, "BIT 1, B" },
[0xcb49] = { 1, "BIT 1, C" },
[0xcb4a] = { 1, "BIT 1, D" },
[0xcb4b] = { 1, "BIT 1, E" },
[0xcb4c] = { 1, "BIT 1, H" },
[0xcb4d] = { 1, "BIT 1, L" },
[0xcb4e] = { 1, "BIT 1, (HL)" },
[0xcb4f] = { 1, "BIT 1, A" },
[0xcb50] = { 1, "BIT 2, B" },
[0xcb51] = { 1, "BIT 2, C" },
[0xcb52] = { 1, "BIT 2, D" },
[0xcb53] = { 1, "BIT 2, E" },
[0xcb54] = { 1, "BIT 2, H" },
[0xcb55] = { 1, "BIT 2, L" },
[0xcb56] = { 1, "BIT 2, (HL)" },
[0xcb57] = { 1, "BIT 2, A" },
[0xcb58] = { 1, "BIT 3, B" },
[0xcb59] = { 1, "BIT 3, C" },
[0xcb5a] = { 1, "BIT 3, D" },
[0xcb5b] = { 1, "BIT 3, E" },
[0xcb5c] = { 1, "BIT 3, H" },
[0xcb5d] = { 1, "BIT 3, L" },
[0xcb5e] = { 1, "BIT 3, (HL)" },
[0xcb5f] = { 1, "BIT 3, A" },
[0xcb60] = { 1, "BIT 4, B" },
[0xcb61] = { 1, "BIT 4, C" },
[0xcb62] = { 1, "BIT 4, D" },
[0xcb63] = { 1, "BIT 4, E" },
[0xcb64] = { 1, "BIT 4, H" },
[0xcb65] = { 1, "BIT 4, L" },
[0xcb66] = { 1, "BIT 4, (HL)" },
[0xcb67] = { 1, "BIT 4, A" },
[0xcb68] = { 1, "BIT 5, B" },
[0xcb69] = { 1, "BIT 5, C" },
[0xcb6a] = { 1, "BIT 5, D" },
[0xcb6b] = { 1, "BIT 5, E" },
[0xcb6c] = { 1, "BIT 5, H" },
[0xcb6d] = { 1, "BIT 5, L" },
[0xcb6e] = { 1, "BIT 5, (HL)" },
[0xcb6f] = { 1, "BIT 5, A" },
[0xcb70] = { 1, "BIT 6, B" },
[0xcb71] = { 1, "BIT 6, C" },
[0xcb72] = { 1, "BIT 6, D" },
[0xcb73] = { 1, "BIT 6, E" },
[0xcb74] = { 1, "BIT 6, H" },
[0xcb75] = { 1, "BIT 6, L" },
[0xcb76] = { 1, "BIT 6, (HL)" },
[0xcb77] = { 1, "BIT 6, A" },
[0xcb78] = { 1, "BIT 7, B" },
[0xcb79] = { 1, "BIT 7, C" },
[0xcb7a] = { 1, "BIT 7, D" },
[0xcb7b] = { 1, "BIT 7, E" },
[0xcb7c] = { 1, "BIT 7, H" },
[0xcb7d] = { 1, "BIT 7, L" },
[0xcb7e] = { 1, "BIT 7, (HL)" },
[0xcb7f] = { 1, "BIT 7, A" },
[0xcb80] = { 1, "RES 0, B" },
[0xcb81] = { 1, "RES 0, C" },
[0xcb82] = { 1, "RES 0, D" },
[0xcb83] = { 1, "RES 0, E" },
[0xcb84] = { 1, "RES 0, H" },
[0xcb85] = { 1, "RES 0, L" },
[0xcb86] = { 1, "RES 0, (HL)" },
[0xcb87] = { 1, "RES 0, A" },
[0xcb88] = { 1, "RES 1, B" },
[0xcb89] = { 1, "RES 1, C" },
[0xcb8a] = { 1, "RES 1, D" },
[0xcb8b] = { 1, "RES 1, E" },
[0xcb8c] = { 1, "RES 1, H" },
[0xcb8d] = { 1, "RES 1, L" },
[0xcb8e] = { 1, "RES 1, (HL)" },
[0xcb8f] = { 1, "RES 1, A" },
[0xcb90] = { 1, "RES 2, B" },
[0xcb91] = { 1, "RES 2, C" },
[0xcb92] = { 1, "RES 2, D" },
[0xcb93] = { 1, "RES 2, E" },
[0xcb94] = { 1, "RES 2, H" },
[0xcb95] = { 1, "RES 2, L" },
[0xcb96] = { 1, "RES 2, (HL)" },
[0xcb97] = { 1, "RES 2, A" },
[0xcb98] = { 1, "RES 3, B" },
[0xcb99] = { 1, "RES 3, C" },
[0xcb9a] = { 1, "RES 3, D" },
[0xcb9b] = { 1, "RES 3, E" },
[0xcb9c] = { 1, "RES 3, H" },
[0xcb9d] = { 1, "RES 3, L" },
[0xcb9e] = { 1, "RES 3, (HL)" },
[0xcb9f] = { 1, "RES 3, A" },
[0xcba0] = { 1, "RES 4, B" },
[0xcba1] = { 1, "RES 4, C" },
[0xcba2] = { 1, "RES 4, D" },
[0xcba3] = { 1, "RES 4, E" },
[0xcba4] = { 1, "RES 4, H" },
[0xcba5] = { 1, "RES 4, L" },
[0xcba6] = { 1, "RES 4, (HL)" },
[0xcba7] = { 1, "RES 4, A" },
[0xcba8] = { 1, "RES 5, B" },
[0xcba9] = { 1, "RES 5, C" },
[0xcbaa] = { 1, "RES 5, D" },
[0xcbab] = { 1, "RES 5, E" },
[0xcbac] = { 1, "RES 5, H" },
[0xcbad] = { 1, "RES 5, L" },
[0xcbae] = { 1, "RES 5, (HL)" },
[0xcbaf] = { 1, "RES 5, A" },
[0xcbb0] = { 1, "RES 6, B" },
[0xcbb1] = { 1, "RES 6, C" },
[0xcbb2] = { 1, "RES 6, D" },
[0xcbb3] = { 1, "RES 6, E" },
[0xcbb4] = { 1, "RES 6, H" },
[0xcbb5] = { 1, "RES 6, L" },
[0xcbb6] = { 1, "RES 6, (HL)" },
[0xcbb7] = { 1, "RES 6, A" },
[0xcbb8] = { 1, "RES 7, B" },
[0xcbb9] = { 1, "RES 7, C" },
[0xcbba] = { 1, "RES 7, D" },
[0xcbbb] = { 1, "RES 7, E" },
[0xcbbc] = { 1, "RES 7, H" },
[0xcbbd] = { 1, "RES 7, L" },
[0xcbbe] = { 1, "RES 7, (HL)" },
[0xcbbf] = { 1, "RES 7, A" },
[0xcbc0] = { 1, "SET 0, B" },
[0xcbc1] = { 1, "SET 0, C" },
[0xcbc2] = { 1, "SET 0, D" },
[0xcbc3] = { 1, "SET 0, E" },
[0xcbc4] = { 1, "SET 0, H" },
[0xcbc5] = { 1, "SET 0, L" },
[0xcbc6] = { 1, "SET 0, (HL)" },
[0xcbc7] = { 1, "SET 0, A" },
[0xcbc8] = { 1, "SET 1, B" },
[0xcbc9] = { 1, "SET 1, C" },
[0xcbca] = { 1, "SET 1, D" },
[0xcbcb] = { 1, "SET 1, E" },
[0xcbcc] = { 1, "SET 1, H" },
[0xcbcd] = { 1, "SET 1, L" },
[0xcbce] = { 1, "SET 1, (HL)" },
[0xcbcf] = { 1, "SET 1, A" },
[0xcbd0] = { 1, "SET 2, B" },
[0xcbd1] = { 1, "SET 2, C" },
[0xcbd2] = { 1, "SET 2, D" },
[0xcbd3] = { 1, "SET 2, E" },
[0xcbd4] = { 1, "SET 2, H" },
[0xcbd5] = { 1, "SET 2, L" },
[0xcbd6] = { 1, "SET 2, (HL)" },
[0xcbd7] = { 1, "SET 2, A" },
[0xcbd8] = { 1, "SET 3, B" },
[0xcbd9] = { 1, "SET 3, C" },
[0xcbda] = { 1, "SET 3, D" },
[0xcbdb] = { 1, "SET 3, E" },
[0xcbdc] = { 1, "SET 3, H" },
[0xcbdd] = { 1, "SET 3, L" },
[0xcbde] = { 1, "SET 3, (HL)" },
[0xcbdf] = { 1, "SET 3, A" },
[0xcbe0] = { 1, "SET 4, B" },
[0xcbe1] = { 1, "SET 4, C" },
[0xcbe2] = { 1, "SET 4, D" },
[0xcbe3] = { 1, "SET 4, E" },
[0xcbe4] = { 1, "SET 4, H" },
[0xcbe5] = { 1, "SET 4, L" },
[0xcbe6] = { 1, "SET 4, (HL)" },
[0xcbe7] = { 1, "SET 4, A" },
[0xcbe8] = { 1, "SET 5, B" },
[0xcbe9] = { 1, "SET 5, C" },
[0xcbea] = { 1, "SET 5, D" },
[0xcbeb] = { 1, "SET 5, E" },
[0xcbec] = { 1, "SET 5, H" },
[0xcbed] = { 1, "SET 5, L" },
[0xcbee] = { 1, "SET 5, (HL)" },
[0xcbef] = { 1, "SET 5, A" },
[0xcbf0] = { 1, "SET 6, B" },
[0xcbf1] = { 1, "SET 6, C" },
[0xcbf2] = { 1, "SET 6, D" },
[0xcbf3] = { 1, "SET 6, E" },
[0xcbf4] = { 1, "SET 6, H" },
[0xcbf5] = { 1, "SET 6, L" },
[0xcbf6] = { 1, "SET 6, (HL)" },
[0xcbf7] = { 1, "SET 6, A" },
[0xcbf8] = { 1, "SET 7, B" },
[0xcbf9] = { 1, "SET 7, C" },
[0xcbfa] = { 1, "SET 7, D" },
[0xcbfb] = { 1, "SET 7, E" },
[0xcbfc] = { 1, "SET 7, H" },
[0xcbfd] = { 1, "SET 7, L" },
[0xcbfe] = { 1, "SET 7, (HL)" },
[0xcbff] = { 1, "SET 7, A" },
[0x00cc] = { 3, "CALL Z, nn" },
[0x00cd] = { 3, "CALL nn" },
[0x00ce] = { 2, "ADC A, n" },
[0x00cf] = { 1, "RST 8h" },
[0x00d0] = { 1, "RET NC" },
[0x00d1] = { 1, "POP DE" },
[0x00d2] = { 3, "JP NC, nn" },
[0x00d3] = { 2, "OUT (n), A" },
[0x00d4] = { 3, "CALL NC, nn" },
[0x00d5] = { 1, "PUSH DE" },
[0x00d6] = { 2, "SUB n" },
[0x00d7] = { 1, "RST 10h" },
[0x00d8] = { 1, "RET Cy" },
[0x00d9] = { 1, "EXX" },
[0x00da] = { 3, "JP Cy, nn" },
[0x00db] = { 2, "IN A, (n)" },
[0x00dc] = { 3, "CALL Cy, nn" },
[0xdd09] = { 1, "ADD IX, BC" },
[0xdd19] = { 1, "ADD IX, DE" },
[0xdd21] = { 3, "LD IX, nn" },
[0xdd22] = { 3, "LD (nn), IX" },
[0xdd23] = { 1, "INC IX" },
[0xdd29] = { 1, "ADD IX, IX" },
[0xdd2a] = { 3, "LD IX, (nn)" },
[0xdd2b] = { 1, "DEC IX" },
[0xdd34] = { 2, "INC (IX + d)" },
[0xdd35] = { 2, "DEC (IX + d)" },
[0xdd36] = { 3, "LD (IX + d), n" },
[0xdd39] = { 1, "ADD IX, SP" },
[0xdd46] = { 2, "LD B, (IX + d)" },
[0xdd4e] = { 2, "LD C, (IX + d)" },
[0xdd56] = { 2, "LD D, (IX + d)" },
[0xdd5e] = { 2, "LD E, (IX + d)" },
[0xdd66] = { 2, "LD H, (IX + d)" },
[0xdd6e] = { 2, "LD L, (IX + d)" },
[0xdd70] = { 2, "LD (IX + d), B" },
[0xdd71] = { 2, "LD (IX + d), C" },
[0xdd72] = { 2, "LD (IX + d), D" },
[0xdd73] = { 2, "LD (IX + d), E" },
[0xdd74] = { 2, "LD (IX + d), H" },
[0xdd75] = { 2, "LD (IX + d), L" },
[0xdd77] = { 2, "LD (IX + d), A" },
[0xdd7e] = { 2, "LD A, (IX + d)" },
[0xdd86] = { 2, "ADD A, (IX + d)" },
[0xdd8e] = { 2, "ADC A, (IX + d)" },
[0xdd96] = { 2, "SUB (IX + d)" },
[0xdd9e] = { 2, "SBC A, (IX + d)" },
[0xdda6] = { 2, "AND (IX + d)" },
[0xddae] = { 2, "XOR (IX + d)" },
[0xddb6] = { 2, "OR (IX + d)" },
[0xddbe] = { 2, "CP (IX + d)" },
[0xddcb] = { 3, "RLC (IX + d)" },
[0xdde1] = { 1, "POP IX" },
[0xdde3] = { 1, "EX (SP), IX" },
[0xdde5] = { 1, "PUSH IX" },
[0xdde9] = { 1, "JP (IX)" },
[0xddf9] = { 1, "LD SP, IX" },
[0x00de] = { 2, "SBC A, n" },
[0x00df] = { 1, "RST 18h" },
[0x00e0] = { 1, "RET PO" },
[0x00e1] = { 1, "POP HL" },
[0x00e2] = { 3, "JP PO, nn" },
[0x00e3] = { 1, "EX (SP), HL" },
[0x00e4] = { 3, "CALL PO, nn" },
[0x00e5] = { 1, "PUSH HL" },
[0x00e6] = { 2, "AND n" },
[0x00e7] = { 1, "RST 20h" },
[0x00e8] = { 1, "RET PE" },
[0x00e9] = { 1, "JP (HL)" },
[0x00ea] = { 3, "JP PE, (nn)" },
[0x00eb] = { 1, "EX DE, HL" },
[0x00ec] = { 3, "CALL PE, nn" },
[0xed40] = { 1, "IN B, (C)" },
[0xed41] = { 1, "OUT (C), B" },
[0xed42] = { 1, "SBC HL, BC" },
[0xed43] = { 3, "LD (nn), BC" },
[0xed44] = { 1, "NEG" },
[0xed45] = { 1, "RETN" },
[0xed46] = { 1, "IM 0" },
[0xed47] = { 1, "LD I, A" },
[0xed48] = { 1, "IN C, (C)" },
[0xed49] = { 1, "OUT (C), C" },
[0xed4a] = { 1, "ADC HL, BC" },
[0xed4b] = { 3, "LD BC, (nn)" },
[0xed4d] = { 1, "RETI" },
[0xed4f] = { 1, "LD R, A" },
[0xed50] = { 1, "IN D, (C)" },
[0xed51] = { 1, "OUT (C), D" },
[0xed52] = { 1, "SBC HL, DE" },
[0xed53] = { 3, "LD (nn), DE" },
[0xed56] = { 1, "IM 1" },
[0xed57] = { 1, "LD A, I" },
[0xed58] = { 1, "IN E, (C)" },
[0xed59] = { 1, "OUT (C), E" },
[0xed5a] = { 1, "ADC HL, DE" },
[0xed5b] = { 3, "LD DE, (nn)" },
[0xed5e] = { 1, "IM 2" },
[0xed5f] = { 1, "LD A, R" },
[0xed60] = { 1, "IN H, (C)" },
[0xed61] = { 1, "OUT (C), H" },
[0xed62] = { 1, "SBC HL, HL" },
[0xed63] = { 3, "LD (nn), HL" },
[0xed67] = { 1, "RRD" },
[0xed68] = { 1, "IN L, (C)" },
[0xed69] = { 1, "OUT (C), L" },
[0xed6a] = { 1, "ADC HL, HL" },
[0xed6b] = { 3, "LD HL, (nn)" },
[0xed6f] = { 1, "RLD" },
[0xed72] = { 1, "SBC HL, SP" },
[0xed73] = { 3, "LD (nn), SP" },
[0xed78] = { 1, "IN A, (C)" },
[0xed79] = { 1, "OUT (C), A" },
[0xed7a] = { 1, "ADC HL, SP" },
[0xed7b] = { 3, "LD SP, (nn)" },
[0xeda0] = { 1, "LDI" },
[0xeda1] = { 1, "CPI" },
[0xeda2] = { 1, "INI" },
[0xeda3] = { 1, "OUTI" },
[0xeda8] = { 1, "LDD" },
[0xeda9] = { 1, "CPD" },
[0xedaa] = { 1, "IND" },
[0xedab] = { 1, "OUTD" },
[0xedb0] = { 1, "LDIR" },
[0xedb1] = { 1, "CPIR" },
[0xedb2] = { 1, "INIR" },
[0xedb3] = { 1, "OTIR" },
[0xedb8] = { 1, "LDDR" },
[0xedb9] = { 1, "CPDR" },
[0xedba] = { 1, "INDR" },
[0xedbb] = { 1, "OTDR" },
[0x00ee] = { 2, "XOR n" },
[0x00ef] = { 1, "RST 28h" },
[0x00f0] = { 1, "RET P" },
[0x00f1] = { 1, "POP AF" },
[0x00f2] = { 3, "JP P, nn" },
[0x00f3] = { 1, "DI" },
[0x00f4] = { 3, "CALL P, nn" },
[0x00f5] = { 1, "PUSH AF" },
[0x00f6] = { 2, "OR n" },
[0x00f7] = { 1, "RST 30h" },
[0x00f8] = { 1, "RET M" },
[0x00f9] = { 1, "LD SP, HL" },
[0x00fa] = { 3, "JP M, nn" },
[0x00fb] = { 1, "EI" },
[0x00fc] = { 3, "CALL M, nn" },
[0xfd09] = { 1, "ADD IY, BC" },
[0xfd19] = { 1, "ADD IY, DE" },
[0xfd21] = { 3, "LD IY, nn" },
[0xfd22] = { 3, "LD (nn), IY" },
[0xfd23] = { 1, "INC IY" },
[0xfd29] = { 1, "ADD IY, IY" },
[0xfd2a] = { 3, "LD IY, (nn)" },
[0xfd2b] = { 1, "DEC IY" },
[0xfd34] = { 2, "INC (IY + d)" },
[0xfd35] = { 2, "DEC (IY + d)" },
[0xfd36] = { 3, "LD (IY + d), n" },
[0xfd39] = { 1, "ADD IY, SP" },
[0xfd46] = { 2, "LD B, (IY + d)" },
[0xfd4e] = { 2, "LD C, (IY + d)" },
[0xfd56] = { 2, "LD D, (IY + d)" },
[0xfd5e] = { 2, "LD E, (IY + d)" },
[0xfd66] = { 2, "LD H, (IY + d)" },
[0xfd6e] = { 2, "LD L, (IY + d)" },
[0xfd70] = { 2, "LD (IY + d), B" },
[0xfd71] = { 2, "LD (IY + d), C" },
[0xfd72] = { 2, "LD (IY + d), D" },
[0xfd73] = { 2, "LD (IY + d), E" },
[0xfd74] = { 2, "LD (IY + d), H" },
[0xfd75] = { 2, "LD (IY + d), L" },
[0xfd77] = { 2, "LD (IY + d), A" },
[0xfd7e] = { 2, "LD A, (IY + d)" },
[0xfd86] = { 2, "ADD A, (IY + d)" },
[0xfd8e] = { 2, "ADC A, (IY + d)" },
[0xfd96] = { 2, "SUB (IY + d)" },
[0xfd9e] = { 2, "SBC A, (IY + d)" },
[0xfda6] = { 2, "AND (IY + d)" },
[0xfdae] = { 2, "XOR (IY + d)" },
[0xfdb6] = { 2, "OR (IY + d)" },
[0xfdbe] = { 2, "CP (IY + d)" },
[0xfdcb] = { 3, "RLC (IY + d)" },
[0xfde1] = { 1, "POP IY" },
[0xfde3] = { 1, "EX (SP), IY" },
[0xfde5] = { 1, "PUSH IY" },
[0xfde9] = { 1, "JP (IY)" },
[0xfdf9] = { 1, "LD SP, IY" },
[0x00fe] = { 2, "CP n" },
[0x00ff] = { 1, "RST 38h" },
