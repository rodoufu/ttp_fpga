// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// lite1
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of quantidadeCidades
//        bit 31~0 - quantidadeCidades[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of quantidadeItens
//        bit 31~0 - quantidadeItens[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of capacidadeMochila
//        bit 31~0 - capacidadeMochila[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of velocidadeMaxima
//        bit 31~0 - velocidadeMaxima[31:0] (Read/Write)
// 0x2c : Data signal of velocidadeMaxima
//        bit 31~0 - velocidadeMaxima[63:32] (Read/Write)
// 0x30 : reserved
// 0x34 : Data signal of velocidadeMinima
//        bit 31~0 - velocidadeMinima[31:0] (Read/Write)
// 0x38 : Data signal of velocidadeMinima
//        bit 31~0 - velocidadeMinima[63:32] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of aluguel
//        bit 31~0 - aluguel[31:0] (Read/Write)
// 0x44 : Data signal of aluguel
//        bit 31~0 - aluguel[63:32] (Read/Write)
// 0x48 : reserved
// 0x4c : Data signal of itemValor
//        bit 31~0 - itemValor[31:0] (Read/Write)
// 0x50 : reserved
// 0x54 : Data signal of itemPeso
//        bit 31~0 - itemPeso[31:0] (Read/Write)
// 0x58 : reserved
// 0x5c : Data signal of inicioItensCidade
//        bit 31~0 - inicioItensCidade[31:0] (Read/Write)
// 0x60 : reserved
// 0x64 : Data signal of indiceItemCidade
//        bit 31~0 - indiceItemCidade[31:0] (Read/Write)
// 0x68 : reserved
// 0x6c : Data signal of pontoX
//        bit 31~0 - pontoX[31:0] (Read/Write)
// 0x70 : reserved
// 0x74 : Data signal of pontoY
//        bit 31~0 - pontoY[31:0] (Read/Write)
// 0x78 : reserved
// 0x7c : Data signal of percurso
//        bit 31~0 - percurso[31:0] (Read/Write)
// 0x80 : reserved
// 0x84 : Data signal of mochila
//        bit 31~0 - mochila[31:0] (Read/Write)
// 0x88 : reserved
// 0x8c : Data signal of resposta
//        bit 31~0 - resposta[31:0] (Read)
// 0x90 : Data signal of resposta
//        bit 31~0 - resposta[63:32] (Read)
// 0x94 : Control signal of resposta
//        bit 0  - resposta_ap_vld (Read/COR)
//        others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCOST_FUNC_LITE1_ADDR_AP_CTRL                0x00
#define XCOST_FUNC_LITE1_ADDR_GIE                    0x04
#define XCOST_FUNC_LITE1_ADDR_IER                    0x08
#define XCOST_FUNC_LITE1_ADDR_ISR                    0x0c
#define XCOST_FUNC_LITE1_ADDR_QUANTIDADECIDADES_DATA 0x10
#define XCOST_FUNC_LITE1_BITS_QUANTIDADECIDADES_DATA 32
#define XCOST_FUNC_LITE1_ADDR_QUANTIDADEITENS_DATA   0x18
#define XCOST_FUNC_LITE1_BITS_QUANTIDADEITENS_DATA   32
#define XCOST_FUNC_LITE1_ADDR_CAPACIDADEMOCHILA_DATA 0x20
#define XCOST_FUNC_LITE1_BITS_CAPACIDADEMOCHILA_DATA 32
#define XCOST_FUNC_LITE1_ADDR_VELOCIDADEMAXIMA_DATA  0x28
#define XCOST_FUNC_LITE1_BITS_VELOCIDADEMAXIMA_DATA  64
#define XCOST_FUNC_LITE1_ADDR_VELOCIDADEMINIMA_DATA  0x34
#define XCOST_FUNC_LITE1_BITS_VELOCIDADEMINIMA_DATA  64
#define XCOST_FUNC_LITE1_ADDR_ALUGUEL_DATA           0x40
#define XCOST_FUNC_LITE1_BITS_ALUGUEL_DATA           64
#define XCOST_FUNC_LITE1_ADDR_ITEMVALOR_DATA         0x4c
#define XCOST_FUNC_LITE1_BITS_ITEMVALOR_DATA         32
#define XCOST_FUNC_LITE1_ADDR_ITEMPESO_DATA          0x54
#define XCOST_FUNC_LITE1_BITS_ITEMPESO_DATA          32
#define XCOST_FUNC_LITE1_ADDR_INICIOITENSCIDADE_DATA 0x5c
#define XCOST_FUNC_LITE1_BITS_INICIOITENSCIDADE_DATA 32
#define XCOST_FUNC_LITE1_ADDR_INDICEITEMCIDADE_DATA  0x64
#define XCOST_FUNC_LITE1_BITS_INDICEITEMCIDADE_DATA  32
#define XCOST_FUNC_LITE1_ADDR_PONTOX_DATA            0x6c
#define XCOST_FUNC_LITE1_BITS_PONTOX_DATA            32
#define XCOST_FUNC_LITE1_ADDR_PONTOY_DATA            0x74
#define XCOST_FUNC_LITE1_BITS_PONTOY_DATA            32
#define XCOST_FUNC_LITE1_ADDR_PERCURSO_DATA          0x7c
#define XCOST_FUNC_LITE1_BITS_PERCURSO_DATA          32
#define XCOST_FUNC_LITE1_ADDR_MOCHILA_DATA           0x84
#define XCOST_FUNC_LITE1_BITS_MOCHILA_DATA           32
#define XCOST_FUNC_LITE1_ADDR_RESPOSTA_DATA          0x8c
#define XCOST_FUNC_LITE1_BITS_RESPOSTA_DATA          64
#define XCOST_FUNC_LITE1_ADDR_RESPOSTA_CTRL          0x94

