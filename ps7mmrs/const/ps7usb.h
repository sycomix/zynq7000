//******************************************************************************
//*
//*      Xilinx zynq7000 PS7 Memory Mapped Registers Header File
//*      
//*      Module name: PS7_USB
//*
//*      Version 1.0
//*
//*      Copyright (c) 2017, emb-lib Project Team
//*
//*      This file is part of the zynq7000 library project.
//*      Visit https://github.com/emb-lib/zynq7000 for new versions.
//*
//*      Permission is hereby granted, free of charge, to any person obtaining
//*      a copy of this software and associated documentation files (the
//*      "Software"), to deal in the Software without restriction, including
//*      without limitation the rights to use, copy, modify, merge, publish,
//*      distribute, sublicense, and/or sell copies of the Software, and to
//*      permit persons to whom the Software is furnished to do so, subject to
//*      the following conditions:
//*
//*      The above copyright notice and this permission notice shall be included
//*      in all copies or substantial portions of the Software.
//*
//*      THE SOFTWARE  IS PROVIDED  "AS IS", WITHOUT  WARRANTY OF  ANY KIND,
//*      EXPRESS  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//*      MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//*      IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//*      CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
//*      TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
//*      THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//*
//------------------------------------------------------------------------------

#ifndef PS7_USB_H
#define PS7_USB_H

#include <ps7modmap.h>

//------------------------------------------------------------------------------
//
//     Registers
//
//------------------------------------------------------------------------------
//
//    USB0 MMRs
//
//              Name                              Address                   Width   Type     Reset Value   Description
const uintptr_t USB_ID_REG0                     = USB0_ADDR + 0x00000000; //  32    ro       0xE441FA05    IP version and revision
const uintptr_t USB_HWGENERAL_REG0              = USB0_ADDR + 0x00000004; //  12    ro       0x00000083    Misc IP config constants
const uintptr_t USB_HWHOST_REG0                 = USB0_ADDR + 0x00000008; //  32    ro       0x10020001    Host Mode IP config constants
const uintptr_t USB_HWDEVICE_REG0               = USB0_ADDR + 0x0000000C; //   6    ro       0x00000019    Device Mode IP config constants
const uintptr_t USB_HWTXBUF_REG0                = USB0_ADDR + 0x00000010; //  32    ro       0x80060A10    TxBuffer IP config constants
const uintptr_t USB_HWRXBUF_REG0                = USB0_ADDR + 0x00000014; //  32    ro       0x00000A10    IP constants
const uintptr_t USB_GPTIMER0LD_REG0             = USB0_ADDR + 0x00000080; //  24    rw       0x00000000    GP Timer 0 Load Value
const uintptr_t USB_GPTIMER0CTRL_REG0           = USB0_ADDR + 0x00000084; //  32    mixed    0x00000000    GP Timer 1 Control
const uintptr_t USB_GPTIMER1LD_REG0             = USB0_ADDR + 0x00000088; //  24    rw       0x00000000    GP Timer 1 Load Value
const uintptr_t USB_GPTIMER1CTRL_REG0           = USB0_ADDR + 0x0000008C; //  32    mixed    0x00000000    GP Timer 1 Control
const uintptr_t USB_SBUSCFG_REG0                = USB0_ADDR + 0x00000090; //   3    rw       0x00000003    DMA Master AHB Burst Mode
const uintptr_t USB_CAPLEN_HCIVER_REG0          = USB0_ADDR + 0x00000100; //  32    ro       0x01000040    EHCI Addr Space and HCI constants
const uintptr_t USB_HCSPARAMS_REG0              = USB0_ADDR + 0x00000104; //  28    ro       0x00010011    TT counts and EHCI HCS constants
const uintptr_t USB_HCCPARAMS_REG0              = USB0_ADDR + 0x00000108; //  16    ro       0x00000006    EHCI Host configuration constants
const uintptr_t USB_DCIVERSION_REG0             = USB0_ADDR + 0x00000120; //  16    ro       0x00000001    Device Mode CI version  constant
const uintptr_t USB_DCCPARAMS_REG0              = USB0_ADDR + 0x00000124; //   9    ro       0x0000018C    EHCI
const uintptr_t USB_CMD_REG0                    = USB0_ADDR + 0x00000140; //  24    mixed    0x00080000    USB Commands 
const uintptr_t USB_STS_REG0                    = USB0_ADDR + 0x00000144; //  26    mixed    0x00000000    Interrupt
const uintptr_t USB_INT_REG0                    = USB0_ADDR + 0x00000148; //  26    mixed    0x00000000    Interrrupts and Enables
const uintptr_t USB_FRINDEX_REG0                = USB0_ADDR + 0x0000014C; //  14    rw       0x00000000    Frame List Index
const uintptr_t USB_PLSTBASE_DEVADDR_REG0       = USB0_ADDR + 0x00000154; //  32    mixed    0x00000000    Host
const uintptr_t USB_ASLSTADDR_ENDPTLSTADDR_REG0 = USB0_ADDR + 0x00000158; //  32    mixed    0x00000000    Host
const uintptr_t USB_TTCTRL_REG0                 = USB0_ADDR + 0x0000015C; //  32    mixed    0x00000000    TT Control
const uintptr_t USB_BURSTSIZE_REG0              = USB0_ADDR + 0x00000160; //  17    rw       0x00001010    Burst Size
const uintptr_t USB_TXFILLTUNING_REG0           = USB0_ADDR + 0x00000164; //  22    mixed    0x00000000    TxFIFO Fill Tuning
const uintptr_t USB_TXTTFILLTUNING_REG0         = USB0_ADDR + 0x00000168; //  13    mixed    0x00000000    TT TX latency FIFO
const uintptr_t USB_IC_USB_REG0                 = USB0_ADDR + 0x0000016C; //  32    mixed    0x00000000    Low and Fast Speed Control constants
const uintptr_t USB_ULPI_VIEWPORT_REG0          = USB0_ADDR + 0x00000170; //  32    mixed    0x08000000    ULPI Viewport
const uintptr_t USB_ENDPTNAK_REG0               = USB0_ADDR + 0x00000178; //  32    wtc      0x00000000    Endpoint NAK 
const uintptr_t USB_ENDPTNAKEN_REG0             = USB0_ADDR + 0x0000017C; //  32    rw       0x00000000    Endpoint NAK 
const uintptr_t USB_CONFIGFLAG_REG0             = USB0_ADDR + 0x00000180; //  32    ro       0x00000001    reserved
const uintptr_t USB_PORTSC1_REG0                = USB0_ADDR + 0x00000184; //  32    mixed    0x8C000004    Port Status 
const uintptr_t USB_OTGSC_REG0                  = USB0_ADDR + 0x000001A4; //  32    mixed    0x00001020    OTG Status and Control
const uintptr_t USB_MODE_REG0                   = USB0_ADDR + 0x000001A8; //  32    mixed    0x00000000    USB Mode Selection
const uintptr_t USB_ENDPTSETUPSTAT_REG0         = USB0_ADDR + 0x000001AC; //  16    wtc      0x00000000    Endpoint Status Setup 
const uintptr_t USB_ENDPTPRIME_REG0             = USB0_ADDR + 0x000001B0; //  32    wtc      0x00000000    Endpoint Primer 
const uintptr_t USB_ENDPTFLUSH_REG0             = USB0_ADDR + 0x000001B4; //  32    wtc      0x00000000    Endpoint Flush 
const uintptr_t USB_ENDPTSTAT_REG0              = USB0_ADDR + 0x000001B8; //  32    ro       0x00000000    Endpoint Buffer Ready Status 
const uintptr_t USB_ENDPTCOMPLETE_REG0          = USB0_ADDR + 0x000001BC; //  32    rw       0x00000000    Endpoint Tx Complete 
const uintptr_t USB_ENDPTCTRL0_REG0             = USB0_ADDR + 0x000001C0; //  24    mixed    0x00800080    Endpoint 0 
const uintptr_t USB_ENDPTCTRL1_REG0             = USB0_ADDR + 0x000001C4; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL2_REG0             = USB0_ADDR + 0x000001C8; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL3_REG0             = USB0_ADDR + 0x000001CC; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL4_REG0             = USB0_ADDR + 0x000001D0; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL5_REG0             = USB0_ADDR + 0x000001D4; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL6_REG0             = USB0_ADDR + 0x000001D8; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL7_REG0             = USB0_ADDR + 0x000001DC; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL8_REG0             = USB0_ADDR + 0x000001E0; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL9_REG0             = USB0_ADDR + 0x000001E4; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL10_REG0            = USB0_ADDR + 0x000001E8; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL11_REG0            = USB0_ADDR + 0x000001EC; //  24    mixed    0x00000000    Endpoints 1 to 11 
//------------------------------------------------------------------------------
//
//    USB1 MMRs
//
//              Name                              Address                   Width   Type     Reset Value   Description
const uintptr_t USB_ID_REG1                     = USB1_ADDR + 0x00000000; //  32    ro       0xE441FA05    IP version and revision
const uintptr_t USB_HWGENERAL_REG1              = USB1_ADDR + 0x00000004; //  12    ro       0x00000083    Misc IP config constants
const uintptr_t USB_HWHOST_REG1                 = USB1_ADDR + 0x00000008; //  32    ro       0x10020001    Host Mode IP config constants
const uintptr_t USB_HWDEVICE_REG1               = USB1_ADDR + 0x0000000C; //   6    ro       0x00000019    Device Mode IP config constants
const uintptr_t USB_HWTXBUF_REG1                = USB1_ADDR + 0x00000010; //  32    ro       0x80060A10    TxBuffer IP config constants
const uintptr_t USB_HWRXBUF_REG1                = USB1_ADDR + 0x00000014; //  32    ro       0x00000A10    IP constants
const uintptr_t USB_GPTIMER0LD_REG1             = USB1_ADDR + 0x00000080; //  24    rw       0x00000000    GP Timer 0 Load Value
const uintptr_t USB_GPTIMER0CTRL_REG1           = USB1_ADDR + 0x00000084; //  32    mixed    0x00000000    GP Timer 1 Control
const uintptr_t USB_GPTIMER1LD_REG1             = USB1_ADDR + 0x00000088; //  24    rw       0x00000000    GP Timer 1 Load Value
const uintptr_t USB_GPTIMER1CTRL_REG1           = USB1_ADDR + 0x0000008C; //  32    mixed    0x00000000    GP Timer 1 Control
const uintptr_t USB_SBUSCFG_REG1                = USB1_ADDR + 0x00000090; //   3    rw       0x00000003    DMA Master AHB Burst Mode
const uintptr_t USB_CAPLEN_HCIVER_REG1          = USB1_ADDR + 0x00000100; //  32    ro       0x01000040    EHCI Addr Space and HCI constants
const uintptr_t USB_HCSPARAMS_REG1              = USB1_ADDR + 0x00000104; //  28    ro       0x00010011    TT counts and EHCI HCS constants
const uintptr_t USB_HCCPARAMS_REG1              = USB1_ADDR + 0x00000108; //  16    ro       0x00000006    EHCI Host configuration constants
const uintptr_t USB_DCIVERSION_REG1             = USB1_ADDR + 0x00000120; //  16    ro       0x00000001    Device Mode CI version  constant
const uintptr_t USB_DCCPARAMS_REG1              = USB1_ADDR + 0x00000124; //   9    ro       0x0000018C    EHCI
const uintptr_t USB_CMD_REG1                    = USB1_ADDR + 0x00000140; //  24    mixed    0x00080000    USB Commands 
const uintptr_t USB_STS_REG1                    = USB1_ADDR + 0x00000144; //  26    mixed    0x00000000    Interrupt
const uintptr_t USB_INT_REG1                    = USB1_ADDR + 0x00000148; //  26    mixed    0x00000000    Interrrupts and Enables
const uintptr_t USB_FRINDEX_REG1                = USB1_ADDR + 0x0000014C; //  14    rw       0x00000000    Frame List Index
const uintptr_t USB_PLSTBASE_DEVADDR_REG1       = USB1_ADDR + 0x00000154; //  32    mixed    0x00000000    Host
const uintptr_t USB_ASLSTADDR_ENDPTLSTADDR_REG1 = USB1_ADDR + 0x00000158; //  32    mixed    0x00000000    Host
const uintptr_t USB_TTCTRL_REG1                 = USB1_ADDR + 0x0000015C; //  32    mixed    0x00000000    TT Control
const uintptr_t USB_BURSTSIZE_REG1              = USB1_ADDR + 0x00000160; //  17    rw       0x00001010    Burst Size
const uintptr_t USB_TXFILLTUNING_REG1           = USB1_ADDR + 0x00000164; //  22    mixed    0x00000000    TxFIFO Fill Tuning
const uintptr_t USB_TXTTFILLTUNING_REG1         = USB1_ADDR + 0x00000168; //  13    mixed    0x00000000    TT TX latency FIFO
const uintptr_t USB_IC_USB_REG1                 = USB1_ADDR + 0x0000016C; //  32    mixed    0x00000000    Low and Fast Speed Control constants
const uintptr_t USB_ULPI_VIEWPORT_REG1          = USB1_ADDR + 0x00000170; //  32    mixed    0x08000000    ULPI Viewport
const uintptr_t USB_ENDPTNAK_REG1               = USB1_ADDR + 0x00000178; //  32    wtc      0x00000000    Endpoint NAK 
const uintptr_t USB_ENDPTNAKEN_REG1             = USB1_ADDR + 0x0000017C; //  32    rw       0x00000000    Endpoint NAK 
const uintptr_t USB_CONFIGFLAG_REG1             = USB1_ADDR + 0x00000180; //  32    ro       0x00000001    reserved
const uintptr_t USB_PORTSC1_REG1                = USB1_ADDR + 0x00000184; //  32    mixed    0x8C000004    Port Status 
const uintptr_t USB_OTGSC_REG1                  = USB1_ADDR + 0x000001A4; //  32    mixed    0x00001020    OTG Status and Control
const uintptr_t USB_MODE_REG1                   = USB1_ADDR + 0x000001A8; //  32    mixed    0x00000000    USB Mode Selection
const uintptr_t USB_ENDPTSETUPSTAT_REG1         = USB1_ADDR + 0x000001AC; //  16    wtc      0x00000000    Endpoint Status Setup 
const uintptr_t USB_ENDPTPRIME_REG1             = USB1_ADDR + 0x000001B0; //  32    wtc      0x00000000    Endpoint Primer 
const uintptr_t USB_ENDPTFLUSH_REG1             = USB1_ADDR + 0x000001B4; //  32    wtc      0x00000000    Endpoint Flush 
const uintptr_t USB_ENDPTSTAT_REG1              = USB1_ADDR + 0x000001B8; //  32    ro       0x00000000    Endpoint Buffer Ready Status 
const uintptr_t USB_ENDPTCOMPLETE_REG1          = USB1_ADDR + 0x000001BC; //  32    rw       0x00000000    Endpoint Tx Complete 
const uintptr_t USB_ENDPTCTRL0_REG1             = USB1_ADDR + 0x000001C0; //  24    mixed    0x00800080    Endpoint 0 
const uintptr_t USB_ENDPTCTRL1_REG1             = USB1_ADDR + 0x000001C4; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL2_REG1             = USB1_ADDR + 0x000001C8; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL3_REG1             = USB1_ADDR + 0x000001CC; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL4_REG1             = USB1_ADDR + 0x000001D0; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL5_REG1             = USB1_ADDR + 0x000001D4; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL6_REG1             = USB1_ADDR + 0x000001D8; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL7_REG1             = USB1_ADDR + 0x000001DC; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL8_REG1             = USB1_ADDR + 0x000001E0; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL9_REG1             = USB1_ADDR + 0x000001E4; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL10_REG1            = USB1_ADDR + 0x000001E8; //  24    mixed    0x00000000    Endpoints 1 to 11 
const uintptr_t USB_ENDPTCTRL11_REG1            = USB1_ADDR + 0x000001EC; //  24    mixed    0x00000000    Endpoints 1 to 11 
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
// Register (USB) ID
//
// Name                     USB_ID_REG
// Relative Address         0x00000000
// Absolute Address         usb0: 0xE0002000
//                          usb1: 0xE0003000
// Width                    32 bits
// Access Type              ro
// Reset Value              0xE441FA05
// Description              IP version and revision, read-only
//
// Register USB_ID_REG Details
//         IP supplier controller identification (revision and synthesized configuration). Hardwired (constant value).
//
                                                       // Properties: Bits: 31:29, Type: ro, Reset Value: 0x7
const uintptr_t USB_ID_CIVERSION_MASK = 0xE0000000;    // Reserved, reads 111.
const uintptr_t USB_ID_CIVERSION_BPOS = 29;            // 

                                                       // Properties: Bits: 28:25, Type: ro, Reset Value: 0x2
const uintptr_t USB_ID_VERSION_MASK   = 0x1E000000;    // IP entire version code:
const uintptr_t USB_ID_VERSION_BPOS   = 25;            // [VERSION].[REVISION][TAG] refers to IP
                                                       // version 2.20a.

                                                       // Properties: Bits: 24:21, Type: ro, Reset Value: 0x2
const uintptr_t USB_ID_REVISION_MASK  = 0x01E00000;    // Refer to [VERSION].
const uintptr_t USB_ID_REVISION_BPOS  = 21;            // 

                                                       // Properties: Bits: 20:16, Type: ro, Reset Value: 0x1
const uintptr_t USB_ID_TAG_MASK       = 0x001F0000;    // Refer to [VERSION].
const uintptr_t USB_ID_TAG_BPOS       = 16;            // 

// RESERVED                                               Properties: Bits: 15:14, Type: ro, Reset Value: 0x3

                                                       // Properties: Bits: 13:8, Type: ro, Reset Value: 0x3A
const uintptr_t USB_ID_NID_MASK       = 0x00003F00;    // Controller ID: Ones complement of [ID].
const uintptr_t USB_ID_NID_BPOS       = 8;             // 

// RESERVED                                               Properties: Bits: 7:6, Type: ro, Reset Value: 0x0

                                                       // Properties: Bits: 5:0, Type: ro, Reset Value: 0x5
const uintptr_t USB_ID_ID_MASK        = 0x0000003F;    // Controller ID: USB controller supports HS,
const uintptr_t USB_ID_ID_BPOS        = 0;             // On-the-Go, and FS/LS.


//------------------------------------------------------------------------------
//
// Register (USB) HWGENERAL
//
// Name                     USB_HWGENERAL_REG
// Relative Address         0x00000004
// Absolute Address         usb0: 0xE0002004
//                          usb1: 0xE0003004
// Width                    12 bits
// Access Type              ro
// Reset Value              0x00000083
// Description              Misc IP config constants, read-only
//
// Register USB_HWGENERAL_REG Details
//         General hardware parameters provided by the IP supplier and defined by Xilinx for synthesis.
//         Hardwired (constant value). Bits [31:12] are reserved.
//
                                                         // Properties: Bits: 11:10, Type: ro, Reset Value: 0x0
const uintptr_t USB_HWGENERAL_SM_MASK   = 0x00000C00;    // VUSB_HS_PHY_SERIAL constant.
const uintptr_t USB_HWGENERAL_SM_BPOS   = 10;            // 0: Parallel I/O Port interface.
                                                         // Note: VUSB_HS_PHY_UTMI = 0 (UTMI not
                                                         // used) and VUSB_HS_PHY_ULPI = 1 (ULPI
                                                         // implemented).

                                                         // Properties: Bits: 9:6, Type: ro, Reset Value: 0x2
const uintptr_t USB_HWGENERAL_PHYM_MASK = 0x000003C0;    // VUSB_HS_PHY_TYPE constant.
const uintptr_t USB_HWGENERAL_PHYM_BPOS = 6;             // 0010: 8-bit ULPI single data rate I/O interface.

                                                         // Properties: Bits: 5:4, Type: ro, Reset Value: 0x0
const uintptr_t USB_HWGENERAL_PHYW_MASK = 0x00000030;    // VUSB_HS_PHY16_8 constant.
const uintptr_t USB_HWGENERAL_PHYW_BPOS = 4;             // 0:
                                                         // 8-bit data bus

                                                         // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t USB_HWGENERAL_BWT_MASK  = 0x00000008;    // reserved
const uintptr_t USB_HWGENERAL_BWT_BPOS  = 3;             // 

                                                         // Properties: Bits: 2:1, Type: ro, Reset Value: 0x1
const uintptr_t USB_HWGENERAL_CLKC_MASK = 0x00000006;    // VUSB_HS_CLOCK_CONFIGURATION
const uintptr_t USB_HWGENERAL_CLKC_BPOS = 1;             // constant.
                                                         // 1: CPU_1x clock must have a higher frequency
                                                         // than the UTMI clock (60 MHz).

                                                         // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t USB_HWGENERAL_RT_MASK   = 0x00000001;    // VUSB_HS_RESET_TYPE constant.
const uintptr_t USB_HWGENERAL_RT_BPOS   = 0;             // 1: Asynchronous Reset


//------------------------------------------------------------------------------
//
// Register (USB) HWHOST
//
// Name                     USB_HWHOST_REG
// Relative Address         0x00000008
// Absolute Address         usb0: 0xE0002008
//                          usb1: 0xE0003008
// Width                    32 bits
// Access Type              ro
// Reset Value              0x10020001
// Description              Host Mode IP config constants, read-only
//
// Register USB_HWHOST_REG Details
//
                                                       // Properties: Bits: 31:24, Type: ro, Reset Value: 0x10
const uintptr_t USB_HWHOST_TTPER_MASK = 0xFF000000;    // VUSB_HS_TT_PERIODIC_CONTEXTS constant.
const uintptr_t USB_HWHOST_TTPER_BPOS = 24;            // 0x010: Sixteen periodic contexts in TT.

                                                       // Properties: Bits: 23:16, Type: ro, Reset Value: 0x2
const uintptr_t USB_HWHOST_TTASY_MASK = 0x00FF0000;    // VUSB_HS_TT_ASYNC_CONTEXTS constant.
const uintptr_t USB_HWHOST_TTASY_BPOS = 16;            // 0x02: Two asynchronous contexts in TT.

                                                       // Properties: Bits: 15:4, Type: ro, Reset Value: 0x0
const uintptr_t USB_HWHOST_VAL_MASK   = 0x0000FFF0;    // reserved
const uintptr_t USB_HWHOST_VAL_BPOS   = 4;             // 

                                                       // Properties: Bits: 3:1, Type: ro, Reset Value: 0x0
const uintptr_t USB_HWHOST_NPORT_MASK = 0x0000000E;    // VUSB_HS_NUM_PORT constant.
const uintptr_t USB_HWHOST_NPORT_BPOS = 1;             // 000: one downstream port supported.

                                                       // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t USB_HWHOST_HC_MASK    = 0x00000001;    // VUSB_HS_HOST constant.
const uintptr_t USB_HWHOST_HC_BPOS    = 0;             // 1: Host mode supported.


//------------------------------------------------------------------------------
//
// Register (USB) HWDEVICE
//
// Name                    USB_HWDEVICE_REG
// Relative Address        0x0000000C
// Absolute Address        usb0: 0xE000200C
//                         usb1: 0xE000300C
// Width                   6 bits
// Access Type             ro
// Reset Value             0x00000019
// Description             Device Mode IP config constants, read-only
//
// Register USB_HWDEVICE_REG Details
//
                                                         // Properties: Bits: 5:1, Type: ro, Reset Value: 0xC
const uintptr_t USB_HWDEVICE_DEVEP_MASK = 0x0000003E;    // VUSB_HS_DEV_EP constant.
const uintptr_t USB_HWDEVICE_DEVEP_BPOS = 1;             // 0x0C: Twelve endpoints supported (EP 0 to 11).

                                                         // Properties: Bit: 0, Type: ro, Reset Value: 0x1
const uintptr_t USB_HWDEVICE_DC_MASK    = 0x00000001;    // Controller supports Device Mode.
const uintptr_t USB_HWDEVICE_DC_BPOS    = 0;             // 


//------------------------------------------------------------------------------
//
// Register (USB) HWTXBUF
//
// Name                    USB_HWTXBUF_REG
// Relative Address        0x00000010
// Absolute Address        usb0: 0xE0002010
//                         usb1: 0xE0003010
// Width                   32 bits
// Access Type             ro
// Reset Value             0x80060A10
// Description             TxBuffer IP config constants, read-only
//
// Register USB_HWTXBUF_REG Details
//
// RESERVED                                                    Properties: Bit: 31, Type: ro, Reset Value: 0x1

// RESERVED                                                    Properties: Bits: 30:24, Type: ro, Reset Value: 0x0

                                                            // Properties: Bits: 23:16, Type: ro, Reset Value: 0x6
const uintptr_t USB_HWTXBUF_TXCHANADD_MASK = 0x00FF0000;    // VUSB_HS_TX_CHAN_ADD constant.
const uintptr_t USB_HWTXBUF_TXCHANADD_BPOS = 16;            // 0x06: Six address bits for each 64-byte endpoint
                                                            // TxBuffer (VBUS_HS_TX_CHAN = 64).

                                                            // Properties: Bits: 15:8, Type: ro, Reset Value: 0xA
const uintptr_t USB_HWTXBUF_TXADD_MASK     = 0x0000FF00;    // VUSB_HS_TX_ADD constant.
const uintptr_t USB_HWTXBUF_TXADD_BPOS     = 8;             // 0x0A0: 10-bit address. TxBuffer size is 768.

                                                            // Properties: Bits: 7:0, Type: ro, Reset Value: 0x10
const uintptr_t USB_HWTXBUF_TXBURST_MASK   = 0x000000FF;    // VUSB_HS_TX_BURST constant.
const uintptr_t USB_HWTXBUF_TXBURST_BPOS   = 0;             // 0x010: 16-byte bursts on AHB by DMA engine.


//------------------------------------------------------------------------------
//
// Register (USB) HWRXBUF
//
// Name                    USB_HWRXBUF_REG
// Relative Address        0x00000014
// Absolute Address        usb0: 0xE0002014
//                         usb1: 0xE0003014
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000A10
// Description             IP constants, RX buffer constants, read-only
//
// Register USB_HWRXBUF_REG Details
//
                                                          // Properties: Bits: 31:24, Type: ro, Reset Value: 0x0
const uintptr_t USB_HWRXBUF_VAL_MASK     = 0xFF000000;    // reserved
const uintptr_t USB_HWRXBUF_VAL_BPOS     = 24;            // 

                                                          // Properties: Bits: 15:8, Type: ro, Reset Value: 0xA
const uintptr_t USB_HWRXBUF_RXADD_MASK   = 0x0000FF00;    // VUSB_HS_RX_ADD constant.
const uintptr_t USB_HWRXBUF_RXADD_BPOS   = 8;             // 0x0A0: 10-bit address. RxBuffer address size is
                                                          // 1024.

                                                          // Properties: Bits: 7:0, Type: ro, Reset Value: 0x10
const uintptr_t USB_HWRXBUF_RXBURST_MASK = 0x000000FF;    // VUSB_HS_RX_BURST constant.
const uintptr_t USB_HWRXBUF_RXBURST_BPOS = 0;             // 0x010: 16-byte bursts on AHB by DMA engine.


//------------------------------------------------------------------------------
//
// Register (USB) GPTMR0LD
//
// Name                     USB_GPTIMER0LD_REG
// Relative Address         0x00000080
// Absolute Address         usb0: 0xE0002080
//                          usb1: 0xE0003080
// Width                    24 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              GP Timer 0 Load Value
//
// Register USB_GPTIMER0LD_REG Details
//
                                                       // Properties: Bits: 23:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_GPTMR0LD_VAL_MASK = 0x00FFFFFF;    // General Purpose Timer Load Value.
const uintptr_t USB_GPTMR0LD_VAL_BPOS = 0;             // This field is loaded into the usb.GPTIMERxCTRL
                                                       // [GPTCNT] countdown timer. The value
                                                       // represents the time in microseconds minus 1 for
                                                       // the timer duration. Example: for a one
                                                       // millisecond timer, load 1000 - 1 = 999 (0x0003E7).
                                                       // Note: Maximum value is 0xFF_FFFF (16.777215
                                                       // seconds).


//------------------------------------------------------------------------------
//
// Register (USB) GPTMR0CTRL
//
// Name                     USB_GPTIMER0CTRL_REG
// Relative Address         0x00000084
// Absolute Address         usb0: 0xE0002084
//                          usb1: 0xE0003084
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              GP Timer 1 Control
//
// Register USB_GPTIMER0CTRL_REG Details
//         This register contains the control for the timer and a data field, which can be queried to determine the
//         running count value.
//
                                                          // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t USB_GPTMR0CTRL_RUN_MASK  = 0x80000000;    // General Purpose Timer Enable.
const uintptr_t USB_GPTMR0CTRL_RUN_BPOS  = 31;            // 0: disable.
                                                          // 1: enable.
                                                          // The setting of [GPTRUN] will not have an effect
                                                          // on the [GPTCNT] counter value.

                                                          // Properties: Bit: 30, Type: wo, Reset Value: 0x0
const uintptr_t USB_GPTMR0CTRL_RST_MASK  = 0x40000000;    // General Purpose Timer Reset. Write 1 to reload.
const uintptr_t USB_GPTMR0CTRL_RST_BPOS  = 30;            // 0: no affect.
                                                          // 1: Reload the [GPTCNT] with the value in
                                                          // [GPTLD].

                                                          // Properties: Bits: 29:25, Type: ro, Reset Value: 0x0
const uintptr_t USB_GPTMR0CTRL_VAL_MASK  = 0x3E000000;    // reserved
const uintptr_t USB_GPTMR0CTRL_VAL_BPOS  = 25;            // 

                                                          // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t USB_GPTMR0CTRL_MODE_MASK = 0x01000000;    // Select Countdown Timer mode.
const uintptr_t USB_GPTMR0CTRL_MODE_BPOS = 24;            // 0: One Shot (single timer countdown). The timer
                                                          // will count down to zero, generate an interrupt
                                                          // and stop until the counter is reset by software.
                                                          // 1: Repeat (looped countdown). The timer will
                                                          // count down to zero, generate an interrupt and
                                                          // automatically reload the counter to begin again.

                                                          // Properties: Bits: 23:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_GPTMR0CTRL_CNT_MASK  = 0x00FFFFFF;    // General Purpose Countdown Timer. Value of the
const uintptr_t USB_GPTMR0CTRL_CNT_BPOS  = 0;             // running timer.


//------------------------------------------------------------------------------
//
// Register (USB) GPTMR1LD
//
// Name                    USB_GPTIMER1LD_REG
// Relative Address        0x00000088
// Absolute Address        usb0: 0xE0002088
//                         usb1: 0xE0003088
// Width                   24 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             GP Timer 1 Load Value
//
// Register USB_GPTIMER1LD_REG Details
//
                                                      // Properties: Bits: 23:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_GPTMR1LD_LD_MASK = 0x00FFFFFF;    // Refer to description for GPTIMER0LD [GPTLD].
const uintptr_t USB_GPTMR1LD_LD_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (USB) GPTMR1CTRL
//
// Name                    USB_GPTIMER1CTRL_REG
// Relative Address        0x0000008C
// Absolute Address        usb0: 0xE000208C
//                         usb1: 0xE000308C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             GP Timer 1 Control
//
// Register USB_GPTIMER1CTRL_REG Details
//
                                                          // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t USB_GPTMR1CTRL_RUN_MASK  = 0x80000000;    // Refer to GPTIMER0CTRL [GPTRUN].
const uintptr_t USB_GPTMR1CTRL_RUN_BPOS  = 31;            // 

                                                          // Properties: Bit: 30, Type: wo, Reset Value: 0x0
const uintptr_t USB_GPTMR1CTRL_RST_MASK  = 0x40000000;    // Refer to GPTIMER0CTRL [GPTRST].
const uintptr_t USB_GPTMR1CTRL_RST_BPOS  = 30;            // 

// RESERVED                                                  Properties: Bits: 29:25, Type: ro, Reset Value: 0x0

                                                          // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t USB_GPTMR1CTRL_MODE_MASK = 0x01000000;    // Refer to GPTIMER0CTRL [GPTMODE].
const uintptr_t USB_GPTMR1CTRL_MODE_BPOS = 24;            // 

                                                          // Properties: Bits: 23:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_GPTMR1CTRL_CNT_MASK  = 0x00FFFFFF;    // Refer to GPTIMER0CTRL [GPTCNT].
const uintptr_t USB_GPTMR1CTRL_CNT_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (USB) SBUSCFG
//
// Name                    USB_SBUSCFG_REG
// Relative Address        0x00000090
// Absolute Address        usb0: 0xE0002090
//                         usb1: 0xE0003090
// Width                   3 bits
// Access Type             rw
// Reset Value             0x00000003
// Description             DMA Master AHB Burst Mode
//
// Register USB_SBUSCFG_REG Details
//
                                                          // Properties: Bits: 2:0, Type: rw, Reset Value: 0x3
const uintptr_t USB_SBUSCFG_AHBBRST_MASK = 0x00000007;    // VUSB_HS_AHBBRST constant.
const uintptr_t USB_SBUSCFG_AHBBRST_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (USB) CAPLEN_HCIVER
//
// Name                    USB_CAPLEN_HCIVER_REG
// Relative Address        0x00000100
// Absolute Address        usb0: 0xE0002100
//                         usb1: 0xE0003100
// Width                   32 bits
// Access Type              ro
// Reset Value              0x01000040
// Description              EHCI Addr Space and HCI constants, read-only
//
// Register USB_CAPLEN_HCIVER_REG Details
//
                                                     // Properties: Bits: 31:16, Type: ro, Reset Value: 0x100
const uintptr_t USB_HCIVERSION_MASK = 0xFFFF0000;    // VUSB_HS_HCIVERSION constant. Host Mode
const uintptr_t USB_HCIVERSION_BPOS = 16;            // (EHCI). Read-only.

                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x40
const uintptr_t USB_CAPLENGTH_MASK  = 0x0000FFFF;    // Address space taken by the Capability registers.
const uintptr_t USB_CAPLENGTH_BPOS  = 0;             // Host Mode (EHCI). Read-only.
                                                     // 0x100: add this offset to the address of the first
                                                     // Capability register to get the address of the first
                                                     // Operational register.


//------------------------------------------------------------------------------
//
// Register (USB) HCSPARAMS
//
// Name                     USB_HCSPARAMS_REG
// Relative Address         0x00000104
// Absolute Address         usb0: 0xE0002104
//                          usb1: 0xE0003104
// Width                    28 bits
// Access Type              ro
// Reset Value              0x00010011
// Description              TT counts and EHCI HCS constants, read-only
//
// Register USB_HCSPARAMS_REG Details
//         Port steering logic capabilities are confined to the single host port implementation..
//
                                                            // Properties: Bits: 27:24, Type: ro, Reset Value: 0x0
const uintptr_t USB_HCSPARAMS_N_TT_MASK    = 0x0F000000;    // Transaction Translators (TT), read-only.
const uintptr_t USB_HCSPARAMS_N_TT_BPOS    = 24;            // 0: none.

                                                            // Properties: Bits: 23:20, Type: ro, Reset Value: 0x0
const uintptr_t USB_HCSPARAMS_N_PTT_MASK   = 0x00F00000;    // Number of ports per TT, read-only.
const uintptr_t USB_HCSPARAMS_N_PTT_BPOS   = 20;            // 0: single host port.

// RESERVED                                                    Properties: Bits: 19:17, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 16, Type: ro, Reset Value: 0x1
const uintptr_t USB_HCSPARAMS_PI_MASK      = 0x00010000;    // Port Indicator (EHCI contant), read-only.
const uintptr_t USB_HCSPARAMS_PI_BPOS      = 16;            // 1: indicator available via EMIO, controlled by
                                                            // usb.PORTSC1 [PIC].

                                                            // Properties: Bits: 15:12, Type: ro, Reset Value: 0x0
const uintptr_t USB_HCSPARAMS_N_CC_MASK    = 0x0000F000;    // Companion controller hardware (EHCI constant).
const uintptr_t USB_HCSPARAMS_N_CC_BPOS    = 12;            // 0: no companion controller hardware, refer to the
                                                            // embeded Transaction Translator (TT).

                                                            // Properties: Bits: 11:8, Type: ro, Reset Value: 0x0
const uintptr_t USB_HCSPARAMS_N_PCC_MASK   = 0x00000F00;    // Ports supported by each Companion Controller
const uintptr_t USB_HCSPARAMS_N_PCC_BPOS   = 8;             // (EHCI constant).
                                                            // 0: no companion controller hardware refer to the
                                                            // embeded Transaction Translator (TT).

// RESERVED                                                    Properties: Bits: 7:5, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 4, Type: ro, Reset Value: 0x1
const uintptr_t USB_HCSPARAMS_PPC_MASK     = 0x00000010;    // VBUS Power Control (EHCI constant).
const uintptr_t USB_HCSPARAMS_PPC_BPOS     = 4;             // 1: signal avaiable via EMIO, see PORTSC1 [PP].

                                                            // Properties: Bits: 3:0, Type: ro, Reset Value: 0x1
const uintptr_t USB_HCSPARAMS_N_PORTS_MASK = 0x0000000F;    // Downstream ports (EHCI constant).
const uintptr_t USB_HCSPARAMS_N_PORTS_BPOS = 0;             // 1: one downstream port.


//------------------------------------------------------------------------------
//
// Register (USB) HCCPARAMS
//
// Name                     USB_HCCPARAMS_REG
// Relative Address         0x00000108
// Absolute Address         usb0: 0xE0002108
//                          usb1: 0xE0003108
// Width                    16 bits
// Access Type              ro
// Reset Value              0x00000006
// Description              EHCI Host configuration constants
//
// Register USB_HCCPARAMS_REG Details
//         This register identifies multiple mode control (time-base bit functionality) addressing capability
//
                                                         // Properties: Bits: 15:8, Type: ro, Reset Value: 0x0
const uintptr_t USB_HCCPARAMS_EECP_MASK = 0x0000FF00;    // EHCI
const uintptr_t USB_HCCPARAMS_EECP_BPOS = 8;             // 

                                                         // Properties: Bits: 7:4, Type: ro, Reset Value: 0x0
const uintptr_t USB_HCCPARAMS_IST_MASK  = 0x000000F0;    // Isochronous Scheduling Threshold.
const uintptr_t USB_HCCPARAMS_IST_BPOS  = 4;             // This field indicates, relative to the current position
                                                         // of the executing host controller, where software
                                                         // can reliably update the isochronous schedule.

                                                         // Properties: Bit: 3, Type: ro, Reset Value: 0x0
const uintptr_t USB_HCCPARAMS_VAL_MASK  = 0x00000008;    // reserved
const uintptr_t USB_HCCPARAMS_VAL_BPOS  = 3;             // 

                                                         // Properties: Bit: 2, Type: ro, Reset Value: 0x1
const uintptr_t USB_HCCPARAMS_ASP_MASK  = 0x00000004;    // Park mode capability. Read-only.
const uintptr_t USB_HCCPARAMS_ASP_BPOS  = 2;             // Enables the controller to execute a QH
                                                         // transactions successively before traversing to next
                                                         // QH.

                                                         // Properties: Bit: 1, Type: ro, Reset Value: 0x1
const uintptr_t USB_HCCPARAMS_PFL_MASK  = 0x00000002;    // Programmable Frame List sizes (Host mode).
const uintptr_t USB_HCCPARAMS_PFL_BPOS  = 1;             // Software can specify the size of the frame list for
                                                         // the periodic schedule. Configure the size using
                                                         // the usb.USBCMD [FS2] [FS0] Frame List Size
                                                         // field: 8, 16, 32, .... 512, 1024.

                                                         // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t USB_HCCPARAMS_ADC_MASK  = 0x00000001;    // 0: 32-bit system memory address.
const uintptr_t USB_HCCPARAMS_ADC_BPOS  = 0;             // 


//------------------------------------------------------------------------------
//
// Register (USB) DCIVERSION
//
// Name                    USB_DCIVERSION_REG
// Relative Address        0x00000120
// Absolute Address        usb0: 0xE0002120
//                         usb1: 0xE0003120
// Width                   16 bits
// Access Type             ro
// Reset Value             0x00000001
// Description             Device Mode CI version constant
//
// Register USB_DCIVERSION_REG Details
//
                                                     // Properties: Bits: 15:0, Type: ro, Reset Value: 0x1
const uintptr_t USB_DCIVERSION_MASK = 0x0000FFFF;    // VUSB_HS_DCIVERSION constant.
const uintptr_t USB_DCIVERSION_BPOS = 0;             // 


//------------------------------------------------------------------------------
//
// Register (USB) DCCPARAMS
//
// Name                    USB_DCCPARAMS_REG
// Relative Address        0x00000124
// Absolute Address        usb0: 0xE0002124
//                         usb1: 0xE0003124
// Width                   9 bits
// Access Type             ro
// Reset Value             0x0000018C
// Description             EHCI, device and endpoint capabilities
//
// Register USB_DCCPARAMS_REG Details
//         Host and device mode capability.
//
                                                        // Properties: Bit: 8, Type: ro, Reset Value: 0x1
const uintptr_t USB_DCCPARAMS_HC_MASK  = 0x00000100;    // 1: the controller supports EHCI compatible mode.
const uintptr_t USB_DCCPARAMS_HC_BPOS  = 8;             // 

                                                        // Properties: Bit: 7, Type: ro, Reset Value: 0x1
const uintptr_t USB_DCCPARAMS_DC_MASK  = 0x00000080;    // 1: the controller supports Device mode.
const uintptr_t USB_DCCPARAMS_DC_BPOS  = 7;             // 

// RESERVED                                                Properties: Bits: 6:5, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 4:0, Type: ro, Reset Value: 0xC
const uintptr_t USB_DCCPARAMS_DEN_MASK = 0x0000001F;    // Number of endpoints supported in Device mode.
const uintptr_t USB_DCCPARAMS_DEN_BPOS = 0;             // 1100: 12 endpoints; control EP0 plus EP {11:1}.


//------------------------------------------------------------------------------
//
// Register (USB) CMD
//
// Name                    USB_CMD_REG
// Software Name           CMD
// Relative Address        0x00000140
// Absolute Address        usb0: 0xE0002140
//                         usb1: 0xE0003140
// Width                   24 bits
// Access Type             mixed
// Reset Value             0x00080000
// Description             USB Commands (EHCI extended)
//
// Register USB_CMD_REG Details
//         The serial bus host/device controller executes the command indicated in this register
//
                                                    // Properties: Bits: 23:16, Type: rw, Reset Value: 0x8
const uintptr_t USB_CMD_ITC_MASK   = 0x00FF0000;    // Interrupt Threshold Control (EHCI) (Host and
const uintptr_t USB_CMD_ITC_BPOS   = 16;            // mode). Program the maximum rate at which the
                                                    // host controller will issue an interrupt.
                                                    // 0x00: Immediate
                                                    // 0x01: 1 micro-frame.
                                                    // 0x02: 2 micro-frames.
                                                    // 0x04: 4 micro-frames.
                                                    // 0x08: 8 micro-frames. (1 ms)
                                                    // 0x10: 16 micro-frames.
                                                    // 0x20: 32 micro-frames.
                                                    // 0x40: 64 micro-frames.
                                                    // others: reserved.

                                                    // Properties: Bit: 15, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_FS2_MASK   = 0x00008000;    // MSB bit of Frame List Size. Refer to [FS0] bit field
const uintptr_t USB_CMD_FS2_BPOS   = 15;            // for description.

                                                    // Properties: Bit: 14, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_ATDTW_MASK = 0x00004000;    // Add dTD TripWire (Host extended).
const uintptr_t USB_CMD_ATDTW_BPOS = 14;            // This bit is used as a semaphore to ensure the
                                                    // proper addition of a new dTD to an active
                                                    // (primed) endpoint's linked list.

                                                    // Properties: Bit: 13, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_SUTW_MASK  = 0x00002000;    // Setup TripWire (Device mode).
const uintptr_t USB_CMD_SUTW_BPOS  = 13;            // This semaphore is between the DCD and the
                                                    // hardware for extracting setup data from QH with
                                                    // out any corruption. Refer to the chapter text for
                                                    // usage.

// RESERVED                                            Properties: Bit: 12, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 11, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_ASPE_MASK  = 0x00000800;    // Asynchronous Schedule Park Mode Enable
const uintptr_t USB_CMD_ASPE_BPOS  = 11;            // (EHCI).
                                                    // This bit enables/disables the Asynchronous
                                                    // Schedule Park Mode if Asynchronous Park
                                                    // Capability bit in HCCPARAMS is one. Otherwise
                                                    // this bit is zero and Park Mode is disabled.

// RESERVED                                            Properties: Bit: 10, Type: ro, Reset Value: 0x0

                                                    // Properties: Bits: 9:8, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_ASP_MASK   = 0x00000300;    // Asynchronous Schudule Park Capability is
const uintptr_t USB_CMD_ASP_BPOS   = 8;             // supported (EHCI).
                                                    // The default is 3. Use any value between 1 and 3.
                                                    // The value 3 gives the maximum throughput in
                                                    // terms of number endpoint transactions compared
                                                    // to 1 or 2.

                                                    // Properties: Bit: 7, Type: ro, Reset Value: 0x0
const uintptr_t USB_CMD_LR_MASK    = 0x00000080;    // Light Host/Device Controller Reset (EHCI).
const uintptr_t USB_CMD_LR_BPOS    = 7;             // 0: not supported.

                                                    // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_IAA_MASK   = 0x00000040;    // Interrupt on Async Schedule Advance Doorbell
const uintptr_t USB_CMD_IAA_BPOS   = 6;             // (EHCI).
                                                    // 0: no affect
                                                    // 1: ring the doorbell when the controller advances
                                                    // the asynchronous schedule.

                                                    // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_ASE_MASK   = 0x00000020;    // Asyncronous Schedule Enable (EHCI) (Host
const uintptr_t USB_CMD_ASE_BPOS   = 5;             // mode).
                                                    // 0: disable Async Schedule processing (the current
                                                    // DMA transactions finishes).
                                                    // 1: enable Async Schedule processing (the memory
                                                    // address for the async schedule is programmed
                                                    // into usb.ASYNCLISTADDR).

                                                    // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_PSE_MASK   = 0x00000010;    // Periodic Schedule Enable (EHCI) (Host mode).
const uintptr_t USB_CMD_PSE_BPOS   = 4;             // 0: disable Periodic Schedule processing
                                                    // 1: enable Periodic Schedule
                                                    // Note: The memory address for the periodic
                                                    // schedule is programmed into
                                                    // usb.PERIODICLISTBASE.

                                                    // Properties: Bits: 3:2, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_FS0_MASK   = 0x0000000C;    // Frame List Size (EHCI extended).
const uintptr_t USB_CMD_FS0_BPOS   = 2;             // usb.USBCMD [15] [3] [2] bits:
                                                    // 000: 1024 elements (4096 bytes)
                                                    // 001: 512 elements (2048 bytes)
                                                    // ...
                                                    // 111: 8 elements (32 bytes)

                                                    // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_RST_MASK   = 0x00000002;    // Controller Reset and Status (ECHI) (Host and
const uintptr_t USB_CMD_RST_BPOS   = 1;             // Device mode).

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t USB_CMD_RS_MASK    = 0x00000001;    // Run/Stop (ECHI) (Host and Device modes).
const uintptr_t USB_CMD_RS_BPOS    = 0;             // Device Mode:
                                                    // 0: the controller halts activity after the current
                                                    // packet transfer is complete.
                                                    // 1: the controller proceeds to execute the periodic
                                                    // and async schedules.
                                                    // Host Mode:
                                                    // 0: TBD
                                                    // 1: TBD


//------------------------------------------------------------------------------
//
// Register (USB) STS
//
// Name                     USB_STS_REG
// Software Name            ISR
// Relative Address         0x00000144
// Absolute Address         usb0: 0xE0002144
//                          usb1: 0xE0003144
// Width                    26 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Interrupt/Raw Status (EHCI extended) (Host/Device)
//
// Register USB_STS_REG Details
//          Various USB bus and port interrupts, controller state status, controller event and general purpose timer
//          interrupts.
//
                                                    // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_TI1_MASK   = 0x02000000;    // GP timer 1 raw interrupt (Host/Device).
const uintptr_t USB_STS_TI1_BPOS   = 25;            // Refer to [TI0] bit description.

                                                    // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_TI0_MASK   = 0x01000000;    // GP timer 0 raw interrupt status (Host/Device).
const uintptr_t USB_STS_TI0_BPOS   = 24;            // Read --
                                                    // 0: inactive.
                                                    // 1: active. Hardware sets this bit = 1 when the
                                                    // counter in the GPTIMER0CTRL register
                                                    // transitions to zero.
                                                    // Write --
                                                    // 0: no effect.
                                                    // 1: clear this bit to 0.

// RESERVED                                            Properties: Bits: 23:20, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 19, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_UPI_MASK   = 0x00080000;    // Host Periodic raw interrupt status. (Host mode)
const uintptr_t USB_STS_UPI_BPOS   = 19;            // Read --
                                                    // 0: inactive.
                                                    // 1: active. Note: Hardware sets this bit = 1 when a
                                                    // periodic TD is completed with IOC = 1.
                                                    // Write --
                                                    // 0: no effect.
                                                    // 1: clear the interrupt bit to 0.

                                                    // Properties: Bit: 18, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_UAI_MASK   = 0x00040000;    // Host Async Schedule raw interrupt status. (Host
const uintptr_t USB_STS_UAI_BPOS   = 18;            // mode)
                                                    // Read --
                                                    // 0: inactive.
                                                    // 1: active. Note: Hardware sets this bit = 1 when an
                                                    // async TD is completed with IOC = 1.
                                                    // Write --
                                                    // 0: no effect.
                                                    // 1: clear the interrupt bit to 0.

// RESERVED                                            Properties: Bit: 17, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 16, Type: ro, Reset Value: 0x0
const uintptr_t USB_STS_NAKI_MASK  = 0x00010000;    // NAK Interrupt (Device mode), read-only.
const uintptr_t USB_STS_NAKI_BPOS  = 16;            // Read --
                                                    // 0: inactive.
                                                    // 1: active. Note: Hardware sets this bit = 1 when
                                                    // the endpoint sends a NAK response and NAK bit
                                                    // is set.
                                                    // Write --
                                                    // 0: no effect.
                                                    // 1: clear the interrupt bit to 0.

                                                    // Properties: Bit: 15, Type: ro, Reset Value: 0x0
const uintptr_t USB_STS_AS_MASK    = 0x00008000;    // Async Schedule Processing Status (EHCI) (Host
const uintptr_t USB_STS_AS_BPOS    = 15;            // mode), read-only.
                                                    // 0: inactive.
                                                    // 1: active, async schedule is enabled.
                                                    // Note: This status bit is used with the
                                                    // usb.USBCMD [ASE] enable bit. When the
                                                    // software sets usb.USBCMD [ASE], this bit reflects
                                                    // when HW really enabled processing async
                                                    // schedule.

                                                    // Properties: Bit: 14, Type: ro, Reset Value: 0x0
const uintptr_t USB_STS_PS_MASK    = 0x00004000;    // Periodic Schedule Processing Status (EHCI) (Host
const uintptr_t USB_STS_PS_BPOS    = 14;            // mode), read-only.
                                                    // 0: inactive.
                                                    // 1: active, periodic schedule is enabled.
                                                    // Note: This status bit is used with the
                                                    // usb.USBCMD [PSE] enable bit. When the
                                                    // software sets usb.USBCMD [PSE], this bit reflects
                                                    // when HW really enabled processing periodic
                                                    // schedule.

                                                    // Properties: Bit: 13, Type: ro, Reset Value: 0x0
const uintptr_t USB_STS_RCL_MASK   = 0x00002000;    // Reclamation (EHCI) (Host mode), read-only.
const uintptr_t USB_STS_RCL_BPOS   = 13;            // 0: unprocessed async transactions.
                                                    // 1: empty async schedule.

                                                    // Properties: Bit: 12, Type: ro, Reset Value: 0x0
const uintptr_t USB_STS_HCH_MASK   = 0x00001000;    // HCHaIted (EHCI) (Host mode).
const uintptr_t USB_STS_HCH_BPOS   = 12;            // This bit is a zero whenever the Run/Stop bit is a
                                                    // one. The Controller sets this bit to one after it has
                                                    // stopped executing because of the Run/Stop bit
                                                    // being set to 0, either by software or by the
                                                    // Controller hardware (e.g. internal error).

// RESERVED                                            Properties: Bit: 11, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 10, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_ULPII_MASK = 0x00000400;    // ULPI Event Completion Interrupt (Host and
const uintptr_t USB_STS_ULPII_BPOS = 10;            // Device mode).
                                                    // 0: not completed.
                                                    // 1: completed (write 1 to clear).

// RESERVED                                            Properties: Bit: 9, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_SLI_MASK   = 0x00000100;    // DCSuspend (Device mode). Write-to-clear.
const uintptr_t USB_STS_SLI_BPOS   = 8;             // When the controller enters a suspend state from
                                                    // an active state, this bit will be set to a one. This bit
                                                    // is only cleared by software writing a 1 to it.

                                                    // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_SRI_MASK   = 0x00000080;    // SOF Received (Device and Host mode).
const uintptr_t USB_STS_SRI_BPOS   = 7;             // Indicates start-of-frame detected.
                                                    // 0: not detected
                                                    // 1: SOF detected by hardware (write 1 to clear)
                                                    // Device mode --
                                                    // When the controller detects an SOF on the ULPI
                                                    // bus, this bit is set. This normally occurs at 1 ms or
                                                    // 125 us intervals.
                                                    // Host mode --
                                                    // The controller sets this bit every 125 us. Host
                                                    // software can use this tic for a time base.

                                                    // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_URI_MASK   = 0x00000040;    // USB Reset Received (Device mode).
const uintptr_t USB_STS_URI_BPOS   = 6;             // Indicates a USB reset detected by hardware on
                                                    // ULPI bus.
                                                    // 0: not detected
                                                    // 1: reset detected by hardware (write 1 to clear)

                                                    // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_AAI_MASK   = 0x00000020;    // Async Schedule Advance (EHCI) (Host mode).
const uintptr_t USB_STS_AAI_BPOS   = 5;             // The async advance interrupt can be generated
                                                    // when the controller advances the async schedule.
                                                    // 0: no change
                                                    // 1: controller advanced (write 1 to clear)
                                                    // This event is primed using the async advance
                                                    // doorbell bit, usb.USBCMD [6].

                                                    // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_SEI_MASK   = 0x00000010;    // System Error (EHCI). AHB interconnect.
const uintptr_t USB_STS_SEI_BPOS   = 4;             // 0: no error detected.
                                                    // 1: AHB error received (write 1 to clear)

                                                    // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_FRI_MASK   = 0x00000008;    // Frame List Rollover (EHCI?). Write-to-clear.
const uintptr_t USB_STS_FRI_BPOS   = 3;             // Read:
                                                    // 0: no rollover.
                                                    // 1: roll over to frame element 0.
                                                    // Write:
                                                    // 0: no effect.
                                                    // 1: clear bit to 0.

                                                    // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_PCI_MASK   = 0x00000004;    // Port Change Detect. The Controller in host mode
const uintptr_t USB_STS_PCI_BPOS   = 2;             // sets this bit to a one when on any port a Connect
                                                    // Status occurs, a Port Enable/Disable Change
                                                    // occurs, or the Force Port Resume bit is set as the
                                                    // result of a J-K transition on the suspended port.
                                                    // The Controller in device mode sets this bit to a one
                                                    // when it detects resume signaling or the port
                                                    // controller enters the full or high-speed
                                                    // operational state. When the port controller exits
                                                    // the full or high-speed operation states due to
                                                    // Reset or Suspend events, the notification
                                                    // mechanisms are the USB Reset Received bit and
                                                    // the DCSuspend bits respectively.

                                                    // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_UEI_MASK   = 0x00000002;    // USB Error Interrupt. When completion of a USB
const uintptr_t USB_STS_UEI_BPOS   = 1;             // transaction results in an error condition, this bit is
                                                    // set by the Controller

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t USB_STS_UI_MASK    = 0x00000001;    // USB Packet Interrupt on Completion (IOC).
const uintptr_t USB_STS_UI_BPOS    = 0;             // Write-to-clear.
                                                    // This bit is set by the hardware in situations:
                                                    // * after a transaction descriptor (TD or dTD) is
                                                    // finished and
                                                    // it's interrupt on complete (IOC) bit set.
                                                    // * a short packet is detected. A short packet is
                                                    // when the actual number of bytes received was
                                                    // less than expected.


//------------------------------------------------------------------------------
//
// Register (USB) INT
//
// Name                     USB_INT_REG
// Software Name            IER
// Relative Address         0x00000148
// Absolute Address         usb0: 0xE0002148
//                          usb1: 0xE0003148
// Width                    26 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Interrrupts and Enables
//
// Register USB_INT_REG Details
//         The to software are enabled with this register. An interrupt is generated when a bit is set and the
//         corresponding interrupt is active. The USB Status register (USBSTS) still shows interrupt sources even if
//         they are disabled by the USBINTR register, allowing polling of interrupt events by the software.
//
                                                    // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_TIE1_MASK  = 0x02000000;    // GP Timer 1 Interrupt Enable (Host/Device).
const uintptr_t USB_INT_TIE1_BPOS  = 25;            // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [TI1].

                                                    // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_TIE0_MASK  = 0x01000000;    // GP Timer 0 Interrupt Enable (Host/Device).
const uintptr_t USB_INT_TIE0_BPOS  = 24;            // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [TI0].

// RESERVED                                            Properties: Bits: 23:20, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 19, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_UPEI_MASK  = 0x00080000;    // Host Periodic Interrupt Enable (Host mode).
const uintptr_t USB_INT_UPEI_BPOS  = 19;            // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [UPI].

                                                    // Properties: Bit: 18, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_UAEI_MASK  = 0x00040000;    // Host Async Interrupt Enable (Host mode).
const uintptr_t USB_INT_UAEI_BPOS  = 18;            // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [UAE].

// RESERVED                                            Properties: Bit: 17, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 16, Type: ro, Reset Value: 0x0
const uintptr_t USB_INT_NAKEI_MASK = 0x00010000;    // NAK Interrupt Enable (Device mode).
const uintptr_t USB_INT_NAKEI_BPOS = 16;            // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [NAKI].

// RESERVED                                            Properties: Bit: 11, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 10, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_ULPIE_MASK = 0x00000400;    // ULPI Interrupt Enable (Host/Device).
const uintptr_t USB_INT_ULPIE_BPOS = 10;            // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [ULPII].

// RESERVED                                            Properties: Bit: 9, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_SLE_MASK   = 0x00000100;    // DCSuspend Interrupt Enable (Device mode).
const uintptr_t USB_INT_SLE_BPOS   = 8;             // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [SLI].

                                                    // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_SRE_MASK   = 0x00000080;    // SOF Received Interrupt Enable (Device?).
const uintptr_t USB_INT_SRE_BPOS   = 7;             // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [SRI].

                                                    // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_URE_MASK   = 0x00000040;    // USB Reset Received Interrupt Enable (Device
const uintptr_t USB_INT_URE_BPOS   = 6;             // mode).
                                                    // 0: disable.
                                                    // 1: enable interrupt on receiving USB reset.
                                                    // Refer to raw interrupt status: USBSTS [URI].

                                                    // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_AAE_MASK   = 0x00000020;    // Async Advance Interrupt Enable (EHCI).
const uintptr_t USB_INT_AAE_BPOS   = 5;             // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [AAI].

                                                    // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_SEE_MASK   = 0x00000010;    // System Error Interrupt Enable (EHCI).
const uintptr_t USB_INT_SEE_BPOS   = 4;             // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [SEI].

                                                    // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_FRE_MASK   = 0x00000008;    // Frame List Rollover Interrupt Enable (EHCI).
const uintptr_t USB_INT_FRE_BPOS   = 3;             // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [FRI].

                                                    // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_PCE_MASK   = 0x00000004;    // Port Change Detect Interrupt Enable (EHCI).
const uintptr_t USB_INT_PCE_BPOS   = 2;             // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [PCI].

                                                    // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t USB_INT_UEE_MASK   = 0x00000002;    // USB Error Interrupt Enable (EHCI).
const uintptr_t USB_INT_UEE_BPOS   = 1;             // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [UEI].

                                                    // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t USB_INT_UE_MASK    = 0x00000001;    // USB Interrupt Enable (EHCI).
const uintptr_t USB_INT_UE_BPOS    = 0;             // 0: disable.
                                                    // 1: enable.
                                                    // Refer to raw interrupt status: USBSTS [UI].


//------------------------------------------------------------------------------
//
// Register (USB) FRINDEX
//
// Name                    USB_FRINDEX_REG
// Software Name           FRAME
// Relative Address        0x0000014C
// Absolute Address        usb0: 0xE000214C
//                         usb1: 0xE000314C
// Width                   14 bits
// Access Type             rw
// Reset Value              0x00000000
// Description              Frame List Index
//
// Register USB_FRINDEX_REG Details
//         This register is used by the host controller to index the periodic frame list. The register updates every 125
//         us (once each micro-frame).
//
                                                  // Properties: Bits: 13:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_FRINDEX_MASK = 0x00003FFF;    // Frame Index (EHCI) (Host and Device mode).
const uintptr_t USB_FRINDEX_BPOS = 0;             // Host mode --
                                                  // Read: current frame index value.
                                                  // Write: set the frame index value.
                                                  // Device mode --
                                                  // Read-only: frame index from received packet.


//------------------------------------------------------------------------------
//
// Register (USB) PLSTBASE_DEVADDR
//
// Name                     USB_PLSTBASE_DEVADDR_REG
// Software Name            LISTBASE
// Relative Address         0x00000154
// Absolute Address         usb0: 0xE0002154
//                          usb1: 0xE0003154
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              Host/Device Address dual-use
//
// Register USB_PLSTBASE_DEVADDR_REG Details
//         Host mode: PERIODICLISTBASE.
//         Device mode: Device Address Advance and
//
                                                           // Properties: Bits: 31:25, Type: rw, Reset Value: 0x0
const uintptr_t USB_PERBASE_USBADRA_MASK  = 0xFE000000;    // Host mode ---- Periodic List Base Address.
const uintptr_t USB_PERBASE_USBADRA_BPOS  = 25;            // Memory address bits [31:25].
                                                           // Device Mode ---- Device Address Advance.
                                                           // When this bit is '0b', any writes to USBADR are
                                                           // instantaneous. When this bit is written to a '1' at
                                                           // the same time or before USBADR is written, the
                                                           // write to the USBADR field is staged and held in a
                                                           // hidden register. After an IN occurs on endpoint 0
                                                           // and is ACKed, USBADR will be loaded from the
                                                           // hidden register.
                                                           // Hardware will automatically clear this bit on the
                                                           // following conditions:
                                                           // 1) IN is ACKed to endpoint 0. (USBADR is
                                                           // updated from hidden register).
                                                           // 2) OUT/SETUP occur to endpoint 0. (USBADR is
                                                           // not updated).
                                                           // 3) Device Reset occurs (USBADR is reset to 0).

                                                           // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t USB_PERBASE_USBADR_MASK   = 0x01000000;    // Host mode ---- Periodic List Base Address.
const uintptr_t USB_PERBASE_USBADR_BPOS   = 24;            // Memory address bits [24].
                                                           // Device Mode ----

                                                           // Properties: Bits: 23:12, Type: rw, Reset Value: 0x0
const uintptr_t USB_PERBASE_RESERVED_MASK = 0x00FFF000;    // Host mode ---- Periodic List Base Address.
const uintptr_t USB_PERBASE_RESERVED_BPOS = 12;            // Memory address bits [23:12].
                                                           // Device Mode ----
                                                           // Reserved.

// RESERVED                                                   Properties: Bits: 11:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (USB) ASLSTADDR_EPNTLSTADDR
//
// Name                    USB_ASLSTADDR_EPNTLSTADDR_REG
// Software Name           ASYNCLISTADDR
// Relative Address        0x00000158
// Absolute Address        usb0: 0xE0002158
//                         usb1: 0xE0003158
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Host/Device dual-use
//
// Register USB_ASLSTADDR_EPNTLSTADDR_REG Details
//         Host mode: ASYNCLISTADDR.
//         Device mode: ENDPOINTLISTADDR.
//
                                                         // Properties: Bits: 31:11, Type: rw, Reset Value: 0x0
const uintptr_t USB_ASYBASE_EPBASE_MASK = 0xFFFFF800;    // Host mode -- Async List Base Address.
const uintptr_t USB_ASYBASE_EPBASE_BPOS = 11;            // Memory address bits [31:11] point to the Queue
                                                         // Heads (QH) . Refer to [ASYBASE} bit field for
                                                         // [10:5] address bits.
                                                         // Device Mode -- Endpoint List Base Address.
                                                         // Memory address bits [31:11] point to the Queue
                                                         // Heads (QH). There are unused memory locations.
                                                         // The stride for the base address is for a 16-endpoint
                                                         // model using both IN and OUT functions.
                                                         // However, twelve endpoints are implemented.

                                                         // Properties: Bits: 10:5, Type: rw, Reset Value: 0x0
const uintptr_t USB_ASYBASE_MASK        = 0x000007E0;    // Host mode ---- Asynchronous List Base Address.
const uintptr_t USB_ASYBASE_BPOS        = 5;             // Memory address bits [10:5].
                                                         // Device Mode ---- Reserved.

// RESERVED                                                 Properties: Bits: 4:0, Type: ro, Reset Value: 0x0


//------------------------------------------------------------------------------
//
// Register (USB) TTCTRL
//
// Name                    USB_TTCTRL_REG
// Relative Address        0x0000015C
// Absolute Address        usb0: 0xE000215C
//                         usb1: 0xE000315C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             TT Control
//
// Register USB_TTCTRL_REG Details
//         This register contains parameters needed for internal TT operations.
//
// RESERVED                                              Properties: Bit: 31, Type: ro, Reset Value: 0x0

                                                      // Properties: Bits: 30:24, Type: rw, Reset Value: 0x0
const uintptr_t USB_TTCTRL_TTHA_MASK = 0x7F000000;    // Internal TT Hub Address Representation.
const uintptr_t USB_TTCTRL_TTHA_BPOS = 24;            // This field is used to match against the Hub
                                                      // Address field in QH & siTD to determine if the
                                                      // packet is routed to the internal TT for directly
                                                      // attached FS/LS devices. If the Hub
                                                      // Address in the QH or siTD does not match this
                                                      // address then the packet will be broadcast on the
                                                      // High Speed ports destined for a downstream
                                                      // High Speed hub with the
                                                      // address in the QH/siTD.

// RESERVED                                              Properties: Bits: 23:2, Type: ro, Reset Value: 0x0

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t USB_TTCTRL_TTAS_MASK = 0x00000002;    // Embedded TT Asynchronous Buffers Clear. This
const uintptr_t USB_TTCTRL_TTAS_BPOS = 1;             // field will clear all pending transactions in the
                                                      // embedded TT Asynchronous Buffer(s). The clear
                                                      // will take as much time as necessary to clear buffer
                                                      // without interfering with a transaction in progress.
                                                      // TTAC will return to zero after being set by
                                                      // software only after the actual clear occurs. The TT
                                                      // supports up to two contexts.

                                                      // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t USB_TTCTRL_TTAC_MASK = 0x00000001;    // Embedded TT Async Buffers Status. This read
const uintptr_t USB_TTCTRL_TTAC_BPOS = 0;             // only bit will be '1' if one or more transactions are
                                                      // being held in the embedded TT Asynchronous
                                                      // Buffers. When this bit is a zero, then all
                                                      // outstanding transactions in the embedded TT
                                                      // have been flushed.


//------------------------------------------------------------------------------
//
// Register (USB) BURSTSIZE
//
// Name                    USB_BURSTSIZE_REG
// Relative Address        0x00000160
// Absolute Address        usb0: 0xE0002160
//                         usb1: 0xE0003160
// Width                   17 bits
// Access Type             rw
// Reset Value             0x00001010
// Description             Burst Size
//
// Register USB_BURSTSIZE_REG Details
//         This register controls the burst size used during data movement on the initiator/master interface.
//
                                                   // Properties: Bits: 16:8, Type: rw, Reset Value: 0x10
const uintptr_t USB_TXPBURST_MASK = 0x0001FF00;    // Programmable TX Burst Length.
const uintptr_t USB_TXPBURST_BPOS = 8;             // Default is the constant VUSB_HS_TX_BURST.
                                                   // This register represents the maximum length of a
                                                   // burst in 32-bit words while moving data from
                                                   // system memory to the USB bus.
                                                   // If field AHBBRST of register SBUSCFG is different
                                                   // from zero, this field TXPBURST will return the
                                                   // value of the INCRx length.
                                                   // Supported values are integer values from 4 to 128.
                                                   // It is recommended to set this value to a integer
                                                   // sub-multiple of VUSB_HS_TX_CHAN. Different
                                                   // values will not use all the available buffer space,
                                                   // preventing proper TX endpoint priming in stream
                                                   // disable mode (SDIS bit of USBMODE register set
                                                   // to '1').

                                                   // Properties: Bits: 7:0, Type: rw, Reset Value: 0x10
const uintptr_t USB_RXPBURST_MASK = 0x000000FF;    // Programmable RX Burst Length. Default is the
const uintptr_t USB_RXPBURST_BPOS = 0;             // constant VUSB_HS_RX_BURST. This register
                                                   // represents the maximum length of a burst in
                                                   // 32-bit words while moving data from the USB bus
                                                   // to system memory. If field AHBBRST of register
                                                   // SBUSCFG is different from zero, this field
                                                   // RXPBRUST will return the value of the INCRx
                                                   // length.
                                                   // The supported values are integer values from 4 to
                                                   // 128. It is recommended to set this value to a
                                                   // integer sub-multiple of VUSB_HS_RX_DEPTH.


//------------------------------------------------------------------------------
//
// Register (USB) TXFILLTUNING
//
// Name                     USB_TXFILLTUNING_REG
// Software Name            TXFILL
// Relative Address         0x00000164
// Absolute Address         usb0: 0xE0002164
//                          usb1: 0xE0003164
// Width                    22 bits
// Access Type              mixed
// Reset Value              0x00000000
// Description              TxFIFO Fill Tuning
//
// Register USB_TXFILLTUNING_REG Details
//         The fields in this register control performance tuning associated with how the Controller posts data to the
//         TX latency FIFO before moving the data onto the USB bus.
//
                                                      // Properties: Bits: 21:16, Type: rw, Reset Value: 0x0
const uintptr_t USB_TXFIFOTHRES_MASK = 0x003F0000;    // FIFO Burst Threshold:
const uintptr_t USB_TXFIFOTHRES_BPOS = 16;            // This register controls the number of data bursts
                                                      // that are posted to the TX latency FIFO in host
                                                      // mode before the packet begins on to the bus. The
                                                      // minimum value is 2 and this value should be a
                                                      // low as possible to maximize USB performance. A
                                                      // higher value can be used in systems with
                                                      // unpredictable latency and/or insufficient
                                                      // bandwidth, where the FIFO may under run
                                                      // because the data transferred from the latency
                                                      // FIFO to USB occurs before it can be replenished
                                                      // from system memory. This value is ignored if the
                                                      // Stream Disable bit in USBMODE register is set
                                                      // (SDIS).

// RESERVED                                              Properties: Bits: 15:13, Type: ro, Reset Value: 0x0

                                                      // Properties: Bits: 12:8, Type: rw, Reset Value: 0x0
const uintptr_t USB_TXSCHEALTH_MASK  = 0x00001F00;    // Scheduler Health Counter.
const uintptr_t USB_TXSCHEALTH_BPOS  = 8;             // This register increments when the Controller fails
                                                      // to fill the TX latency FIFO to the level
                                                      // programmed by TXFIFOTHRES before running
                                                      // out of time to send the packet before the next
                                                      // Start-Of-Frame.
                                                      // This health counter measures the number of times
                                                      // this occurs to provide feedback to selecting a
                                                      // proper TXSCHOH. Writing to this register will
                                                      // clear the counter. This counter will max. at 31.

// RESERVED                                              Properties: Bit: 7, Type: ro, Reset Value: 0x0

                                                      // Properties: Bits: 6:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_TXSCHOH_MASK     = 0x0000007F;    // Scheduler Overhead.
const uintptr_t USB_TXSCHOH_BPOS     = 0;             // This register adds an additional fixed offset to the
                                                      // schedule time estimator described above as Tff.
                                                      // As an approximation, the value chosen for this
                                                      // register should limit the number of back-off
                                                      // events captured in the TXSCHHEALTH to less
                                                      // than 10 per second in a highly utilized bus.
                                                      // Choosing a value that is too high for this register
                                                      // is not desired as it can needlessly reduce USB
                                                      // utilization.
                                                      // The time unit represented in this register is
                                                      // 1.267us when a device is connected in High-Speed
                                                      // Mode for OTG(on the go) & SPH(single port host)
                                                      // implementations.
                                                      // The time unit represented in this register is
                                                      // 6.333us when a device is connected in Low/Full
                                                      // Speed Mode for OTG & SPH implementations.
                                                      // The time unit represented in this register is
                                                      // always 1.267us for the MPH implementation


//------------------------------------------------------------------------------
//
// Register (USB) TXTTFILLTUNING
//
// Name                    USB_TXTTFILLTUNING_REG
// Relative Address        0x00000168
// Absolute Address        usb0: 0xE0002168
//                         usb1: 0xE0003168
// Width                   13 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             TT TX latency FIFO
//
// Register USB_TXTTFILLTUNING_REG Details
//         This register provides a function similar to TXFILLTUNING except there is no equivalent to
//         TXFIFOTHRES because the TT TX latency FIFO is always loaded in a single burst. Even
//
                                                        // Properties: Bits: 12:8, Type: rw, Reset Value: 0x0
const uintptr_t USB_TXTTSCHHEALTH_MASK = 0x00001F00;    // TT Scheduler Health Counter
const uintptr_t USB_TXTTSCHHEALTH_BPOS = 8;             // Same description as TXSCHHEALTH

// RESERVED                                                Properties: Bits: 7:5, Type: ro, Reset Value: 0x0

                                                        // Properties: Bits: 4:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_TXTTSCHOH_MASK     = 0x0000001F;    // TT Scheduler Overhead
const uintptr_t USB_TXTTSCHOH_BPOS     = 0;             // Same description as TXSCHOH.
                                                        // The time unit represented in this register is
                                                        // 6.333us.


//------------------------------------------------------------------------------
//
// Register (USB) IC_USB
//
// Name                    USB_IC_USB_REG
// Relative Address        0x0000016C
// Absolute Address        usb0: 0xE000216C
//                         usb1: 0xE000316C
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             Low and Fast Speed Control constants
//
// Register USB_IC_USB_REG Details
//         This register enable and controls the IC_USB FS/LS transceiver.
//
                                                         // Properties: Bit: 31, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC8_MASK     = 0x80000000;    // Inter-Chip transceiver enable 8. These bits enables
const uintptr_t USB_IC_USB_IC8_BPOS     = 31;            // the Inter-Chip transceiver for each port (for the
                                                         // MPH case). To enable the interface, the bits PTS
                                                         // must be set to '011b' in the PORTSC8. Writing a '1'
                                                         // to each bit selects the IC_USB interface for that
                                                         // port.

                                                         // Properties: Bits: 30:28, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC_VDD8_MASK = 0x70000000;    // Inter-Chip voltage selection 8
const uintptr_t USB_IC_USB_IC_VDD8_BPOS = 28;            // It selects which voltage is being supplied to the
                                                         // peripheral through each port This field is
                                                         // read-only and set to '000b' in case of device mode
                                                         // operation.
                                                         // This field is read-only and set to '000b' in case of
                                                         // Single port host controller.

                                                         // Properties: Bit: 27, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC7_MASK     = 0x08000000;    // Inter-Chip transceiver enable 7. These bits enables
const uintptr_t USB_IC_USB_IC7_BPOS     = 27;            // the Inter-Chip transceiver for each port (for the
                                                         // MPH case). To enable the interface, the bits PTS
                                                         // must be set to '011b' in the PORTSC7. Writing a '1'
                                                         // to each bit selects the IC_USB interface for that
                                                         // port.

                                                         // Properties: Bits: 26:24, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC_VDD7_MASK = 0x07000000;    // Inter-Chip voltage selection 7
const uintptr_t USB_IC_USB_IC_VDD7_BPOS = 24;            // It selects which voltage is being supplied to the
                                                         // peripheral through each port This field is
                                                         // read-only and set to '000b' in case of device mode
                                                         // operation.
                                                         // This field is read-only and set to '000b' in case of
                                                         // Single port host controller.

                                                         // Properties: Bit: 23, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC6_MASK     = 0x00800000;    // Inter-Chip transceiver enable 6. These bits enables
const uintptr_t USB_IC_USB_IC6_BPOS     = 23;            // the Inter-Chip transceiver for each port (for the
                                                         // MPH case). To enable the interface, the bits PTS
                                                         // must be set to '011b' in the PORTSC6. Writing a '1'
                                                         // to each bit selects the IC_USB interface for that
                                                         // port.

                                                         // Properties: Bits: 22:20, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC_VDD6_MASK = 0x00700000;    // Inter-Chip voltage selection 6
const uintptr_t USB_IC_USB_IC_VDD6_BPOS = 20;            // It selects which voltage is being supplied to the
                                                         // peripheral through each port This field is
                                                         // read-only and set to '000b' in case of device mode
                                                         // operation.
                                                         // This field is read-only and set to '000b' in case of
                                                         // Single port host controller.

                                                         // Properties: Bit: 19, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC5_MASK     = 0x00080000;    // Inter-Chip transceiver enable 5. These bits enables
const uintptr_t USB_IC_USB_IC5_BPOS     = 19;            // the Inter-Chip transceiver for each port (for the
                                                         // MPH case). To enable the interface, the bits PTS
                                                         // must be set to '011b' in the PORTSC5. Writing a '1'
                                                         // to each bit selects the IC_USB interface for that
                                                         // port.

                                                         // Properties: Bits: 18:16, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC_VDD5_MASK = 0x00070000;    // Inter-Chip voltage selection 5
const uintptr_t USB_IC_USB_IC_VDD5_BPOS = 16;            // It selects which voltage is being supplied to the
                                                         // peripheral through each port This field is
                                                         // read-only and set to '000b' in case of device mode
                                                         // operation.
                                                         // This field is read-only and set to '000b' in case of
                                                         // Single port host controller.

                                                         // Properties: Bit: 15, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC4_MASK     = 0x00008000;    // Inter-Chip transceiver enable 4. These bits enables
const uintptr_t USB_IC_USB_IC4_BPOS     = 15;            // the Inter-Chip transceiver for each port (for the
                                                         // MPH case). To enable the interface, the bits PTS
                                                         // must be set to '011b' in the PORTSC4. Writing a '1'
                                                         // to each bit selects the IC_USB interface for that
                                                         // port.

                                                         // Properties: Bits: 14:12, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC_VDD4_MASK = 0x00007000;    // Inter-Chip voltage selection 4
const uintptr_t USB_IC_USB_IC_VDD4_BPOS = 12;            // It selects which voltage is being supplied to the
                                                         // peripheral through each port This field is
                                                         // read-only and set to '000b' in case of device mode
                                                         // operation.
                                                         // This field is read-only and set to '000b' in case of
                                                         // Single port host controller.

                                                         // Properties: Bit: 11, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC3_MASK     = 0x00000800;    // Inter-Chip transceiver enable 3. These bits enables
const uintptr_t USB_IC_USB_IC3_BPOS     = 11;            // the Inter-Chip transceiver for each port (for the
                                                         // MPH case). To enable the interface, the bits PTS
                                                         // must be set to '011b' in the PORTSC3. Writing a '1'
                                                         // to each bit selects the IC_USB interface for that
                                                         // port.

                                                         // Properties: Bits: 10:8, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC_VDD3_MASK = 0x00000700;    // Inter-Chip voltage selection 3
const uintptr_t USB_IC_USB_IC_VDD3_BPOS = 8;             // It selects which voltage is being supplied to the
                                                         // peripheral through each port. This field is
                                                         // read-only and set to '000b' in case of device mode
                                                         // operation.
                                                         // This field is read-only and set to '000b' in case of
                                                         // Single port host controller.

                                                         // Properties: Bit: 7, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC2_MASK     = 0x00000080;    // Inter-Chip transceiver enable 2. These bits enables
const uintptr_t USB_IC_USB_IC2_BPOS     = 7;             // the Inter-Chip transceiver for each port (for the
                                                         // MPH case). To enable the interface, the bits PTS
                                                         // must be set to '011b' in the PORTSC2. Writing a '1'
                                                         // to each bit selects the IC_USB interface for that
                                                         // port.

                                                         // Properties: Bits: 6:4, Type: ro, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC_VDD2_MASK = 0x00000070;    // Inter-Chip voltage selection 2
const uintptr_t USB_IC_USB_IC_VDD2_BPOS = 4;             // It selects which voltage is being supplied to the
                                                         // peripheral through each port. This field is
                                                         // read-only and set to '000b' in case of device mode
                                                         // operation.
                                                         // This field is read-only and set to '000b' in case of
                                                         // Single port host controller.

                                                         // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC1_MASK     = 0x00000008;    // Inter-Chip transceiver enable 1. These bits enables
const uintptr_t USB_IC_USB_IC1_BPOS     = 3;             // the Inter-Chip transceiver for each port (for the
                                                         // MPH case). To enable the interface, the bits PTS
                                                         // must be set to '011b' in the PORTSC1. Writing a '1'
                                                         // to each bit selects the IC_USB interface for that
                                                         // port. If the Controller is not a MPH
                                                         // implementation, IC8 to IC2 will be '0' and
                                                         // Read-Only.

                                                         // Properties: Bits: 2:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_IC_USB_IC_VDD1_MASK = 0x00000007;    // Inter-Chip voltage selection 1 -- Host mode.
const uintptr_t USB_IC_USB_IC_VDD1_BPOS = 0;             // Select the voltage being supplied to the
                                                         // peripheral:
                                                         // 000: No voltage
                                                         // 001: 1.0V
                                                         // 010: 1.2V
                                                         // 011: 1.5V
                                                         // 100: 1.8V
                                                         // 101: 3.0V
                                                         // 110, 111: reserved
                                                         // The voltage negotiation should happen between
                                                         // enabling port power (PP) in PORTSC1 register
                                                         // and asserting the run/stop bit in USBCMD
                                                         // register.
                                                         // Device Mode: Read-only and equals 000.


//------------------------------------------------------------------------------
//
// Register (USB) ULPI_VIEWPORT
//
// Name                     USB_ULPI_VIEWPORT_REG
// Software Name            ULPIVIEW
// Relative Address         0x00000170
// Absolute Address         usb0: 0xE0002170
//                          usb1: 0xE0003170
// Width                    32 bits
// Access Type              mixed
// Reset Value              0x08000000
// Description              ULPI Viewport
//
// Register USB_ULPI_VIEWPORT_REG Details
//         The register provides indirect access to the ULPI PHY register set. Although the core performs access to the
//         ULPI PHY register set, there may be extraordinary circumstances where software may need direct access.
//
                                                                  // Properties: Bit: 31, Type: rw, Reset Value: 0x0
const uintptr_t USB_ULPI_VIEWPORT_ULPIWU_MASK    = 0x80000000;    // ULPI Wake Up Operation.
const uintptr_t USB_ULPI_VIEWPORT_ULPIWU_BPOS    = 31;            // Write:
                                                                  // 0: no affect.
                                                                  // 1: execute the Wake Up operation (no undoing).
                                                                  // Read:
                                                                  // 0: operation complete.
                                                                  // 1: operation in-progress.
                                                                  // Note: Do not issue a ULPI Wake Up and ULPI
                                                                  // Read/Write (via Viewport operation) with the
                                                                  // same register write.

                                                                  // Properties: Bit: 30, Type: rw, Reset Value: 0x0
const uintptr_t USB_ULPI_VIEWPORT_ULPIRUN_MASK   = 0x40000000;    // ULPI Viewport Transaction.
const uintptr_t USB_ULPI_VIEWPORT_ULPIRUN_BPOS   = 30;            // Write:
                                                                  // 0: no affect.
                                                                  // 1: execute the ULPI viewport transaction (no
                                                                  // undoing).
                                                                  // Read:
                                                                  // 0: transaction complete.
                                                                  // 1: transaction in-progress.
                                                                  // Note: Do not issue a ULPI Wake Up and Viewport
                                                                  // operations with the same register write.

                                                                  // Properties: Bit: 29, Type: rw, Reset Value: 0x0
const uintptr_t USB_ULPI_VIEWPORT_ULPIRW_MASK    = 0x20000000;    // ULPI Viewport Read/Write Select.
const uintptr_t USB_ULPI_VIEWPORT_ULPIRW_BPOS    = 29;            // 0: read operation.
                                                                  // 1: write operation.

// RESERVED                                                          Properties: Bit: 28, Type: ro, Reset Value: 0x0

                                                                  // Properties: Bit: 27, Type: ro, Reset Value: 0x1
const uintptr_t USB_ULPI_VIEWPORT_ULPISS_MASK    = 0x08000000;    // ULPI Synchronous State
const uintptr_t USB_ULPI_VIEWPORT_ULPISS_BPOS    = 27;            // 0: In another state (i.e. carkit, serial, low power).
                                                                  // 1: Normal synchronous state.
                                                                  // This bit represents the state of the ULPI interface.
                                                                  // Before reading this bit, the ULPIPORT field
                                                                  // should be set accordingly if used in a MPH
                                                                  // implementation.

                                                                  // Properties: Bits: 26:24, Type: rw, Reset Value: 0x0
const uintptr_t USB_ULPI_VIEWPORT_ULPIPORT_MASK  = 0x07000000;    // Reserved, always write 0.
const uintptr_t USB_ULPI_VIEWPORT_ULPIPORT_BPOS  = 24;            // 

                                                                  // Properties: Bits: 23:16, Type: rw, Reset Value: 0x0
const uintptr_t USB_ULPI_VIEWPORT_ULPIADDR_MASK  = 0x00FF0000;    // ULPI Data Address. When a read or write
const uintptr_t USB_ULPI_VIEWPORT_ULPIADDR_BPOS  = 16;            // operation is commanded, the address of the
                                                                  // operation is written to this field.

                                                                  // Properties: Bits: 15:8, Type: ro, Reset Value: 0x0
const uintptr_t USB_ULPI_VIEWPORT_ULPIDATRD_MASK = 0x0000FF00;    // ULPI Data Read.
const uintptr_t USB_ULPI_VIEWPORT_ULPIDATRD_BPOS = 8;             // After a read operation completes, the result is
                                                                  // placed in this field.

                                                                  // Properties: Bits: 7:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_ULPI_VIEWPORT_ULPIDATWR_MASK = 0x000000FF;    // ULPI Data Write. When a write operation is
const uintptr_t USB_ULPI_VIEWPORT_ULPIDATWR_BPOS = 0;             // commanded, the data to be sent is written to this
                                                                  // field


//------------------------------------------------------------------------------
//
// Register (USB) ENDPTNAK
//
// Name                    USB_ENDPTNAK_REG
// Software Name           EPNAKISR
// Relative Address        0x00000178
// Absolute Address        usb0: 0xE0002178
//                         usb1: 0xE0003178
// Width                   32 bits
// Access Type             wtc
// Reset Value             0x00000000
// Description             Endpoint NAK (Device mode)
//
// Register USB_ENDPTNAK_REG Details
//
                                                        // Properties: Bits: 31:16, Type: wtc, Reset Value: 0x0
const uintptr_t USB_ENDPTNAK_EPTN_MASK = 0xFFFF0000;    // TX Endpoint NAK (Device mode).
const uintptr_t USB_ENDPTNAK_EPTN_BPOS = 16;            // The Endpoint bit is set = 1 when the device
                                                        // controller sends a NAK handshake on a received
                                                        // IN token for the corresponding endpoint.
                                                        // Bit[16]: Endpoint 0.
                                                        // Bit[17]: Endpoint 1.
                                                        // ...
                                                        // Bit[28]: Endpoint 12.
                                                        // Bits[31:29]: reserved.

                                                        // Properties: Bits: 15:0, Type: wtc, Reset Value: 0x0
const uintptr_t USB_ENDPTNAK_EPRN_MASK = 0x0000FFFF;    // RX Endpoint NAK (Device mode).
const uintptr_t USB_ENDPTNAK_EPRN_BPOS = 0;             // The bit is set = 1 when the Controller sends a NAK
                                                        // handshake on a received OUT or PING token for
                                                        // the corresponding endpoint.
                                                        // Bit[0]: Endpoint 0.
                                                        // Bit[1]: Endpoint 1.
                                                        // ...
                                                        // Bit[12]: Endpoint 12.
                                                        // Bits[15:13]: reserved.


//------------------------------------------------------------------------------
//
// Register (USB) ENDPTNAKEN
//
// Name                    USB_ENDPTNAKEN_REG
// Software Name           EPNAKIER
// Relative Address        0x0000017C
// Absolute Address        usb0: 0xE000217C
//                         usb1: 0xE000317C
// Width                   32 bits
// Access Type             rw
// Reset Value             0x00000000
// Description             Endpoint NAK (Device mode)
//
// Register USB_ENDPTNAKEN_REG Details
//
                                                           // Properties: Bits: 31:16, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTNAKEN_EPTNE_MASK = 0xFFFF0000;    // TX Endpoint NAK Enable (Device mode).
const uintptr_t USB_ENDPTNAKEN_EPTNE_BPOS = 16;            // 0: disable.
                                                           // 1: enable.
                                                           // Each bit is an enable bit for the corresponding TX
                                                           // Endpoint NAK. If NAK is enabled and the
                                                           // corresponding TX Endpoint NAK bit is set, then
                                                           // the NAK Interrupt bit is set.
                                                           // Bit[16]: Endpoint 0.
                                                           // Bit[17]: Endpoint 1.
                                                           // ...
                                                           // Bit[28]: Endpoint 12.
                                                           // Bits[31:29]: reserved.

                                                           // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTNAKEN_EPRNE_MASK = 0x0000FFFF;    // RX Endpoint NAK Enable (Device mode).
const uintptr_t USB_ENDPTNAKEN_EPRNE_BPOS = 0;             // 0: disable.
                                                           // 1: enable.
                                                           // Each bit is an enable bit for the corresponding RX
                                                           // Endpoint NAK. If NAK is enabled and the
                                                           // corresponding RX Endpoint NAK bit is set, then
                                                           // the NAK Interrupt bit is set.
                                                           // Bit[0]: Endpoint 0.
                                                           // Bit[1]: Endpoint 1.
                                                           // ...
                                                           // Bit[12]: Endpoint 12.
                                                           // Bits[15:13]: reserved.


//------------------------------------------------------------------------------
//
// Register (USB) CONFIGFLAG
//
// Name                    USB_CONFIGFLAG_REG
// Relative Address        0x00000180
// Absolute Address        usb0: 0xE0002180
//                         usb1: 0xE0003180
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000001
// Description             reserved
//
// Register USB_CONFIGFLAG_REG Details
//
// RESERVED                                       Properties: Bits: 31:0, Type: ro, Reset Value: 0x1


//------------------------------------------------------------------------------
//
// Register (USB) PORTSC1
//
// Name                    USB_PORTSC1_REG
// Software Name           PORTSCR1
// Relative Address        0x00000184
// Absolute Address        usb0: 0xE0002184
//                         usb1: 0xE0003184
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x8C000004
// Description             Port Status & Control
//
// Register USB_PORTSC1_REG Details
//         The Controller implement one The number of port registers implemented by a particular instantiation is
//         documented in the HCSPARAM register. Software uses this information as an input parameter to
//         determine how many ports need service. This implement contains only 1 host port.
//
                                                       // Properties: Bits: 31:30, Type: rw, Reset Value: 0x2
const uintptr_t USB_PORTSC1_PTS_MASK  = 0xC0000000;    // PHY Type Status constant (Host/Device).
const uintptr_t USB_PORTSC1_PTS_BPOS  = 30;            // [PTS2] + [PTS] bit fields:
                                                       // 010: ULPI interface.

                                                       // Properties: Bit: 29, Type: ro, Reset Value: 0x0
const uintptr_t USB_PORTSC1_STS_MASK  = 0x20000000;    // Serial Transceiver Select constant (Host/Device).
const uintptr_t USB_PORTSC1_STS_BPOS  = 29;            // VUSB_HS_PHY_SERIAL = 0.
                                                       // Serial interface engine (SIE) not implemented.

                                                       // Properties: Bit: 28, Type: ro, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PTW_MASK  = 0x10000000;    // Parallel Transceiver Width constant
const uintptr_t USB_PORTSC1_PTW_BPOS  = 28;            // (Host/Device).
                                                       // 0: 8-bit (60MHz) UTMI+ interface to ULPI.

                                                       // Properties: Bits: 27:26, Type: rw, Reset Value: 0x3
const uintptr_t USB_PORTSC1_PSPD_MASK = 0x0C000000;    // Port Speed operating mode (Host/Device).
const uintptr_t USB_PORTSC1_PSPD_BPOS = 26;            // 00: Full Speed
                                                       // 01: Low Speed
                                                       // 10: High Speed
                                                       // 11: Not connected (default)

                                                       // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PTS2_MASK = 0x02000000;    // Parallel Transceiver Select MSB (Host/Device).
const uintptr_t USB_PORTSC1_PTS2_BPOS = 25;            // Refer to the [PTS] bit field for a description.

                                                       // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PFSC_MASK = 0x01000000;    // Port Force Full Speed Connect -- Debug.
const uintptr_t USB_PORTSC1_PFSC_BPOS = 24;            // 0: ???? (default)
                                                       // 1: write a 1 to force the port to only connect at Full
                                                       // Speed.
                                                       // Writing a 1 disables the chirp sequence that allows
                                                       // the port to identify itself as High Speed. This is
                                                       // useful for testing FS configurations with a HS
                                                       // host, hub or device.

                                                       // Properties: Bit: 23, Type: ro, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PHCD_MASK = 0x00800000;    // PHY Low Power Clock Disable - RW. Default =
const uintptr_t USB_PORTSC1_PHCD_BPOS = 23;            // 0b.
                                                       // Writing this bit to a '1b' will disable the PHY clock.
                                                       // Writing a '0b' enables it. Reading this bit will
                                                       // indicate the status of the PHY clock. NOTE: The
                                                       // PHY clock cannot be disabled if it is being used as
                                                       // the system clock. In device mode, the PHY can be
                                                       // put into Low Power Clock Disable when the
                                                       // device is not running (USBCMD RS=0b) or the
                                                       // host has signaled suspend (PORTSCx SUSP=1b).
                                                       // Low Power Clock Disable will be cleared
                                                       // automatically when the host has signaled resume.
                                                       // Before forcing a resume from the device, the
                                                       // Controller driver must clear this bit.
                                                       // In host mode, the PHY can be put into Low Power
                                                       // Suspend Clock Disable when the downstream
                                                       // device has been put into suspend mode or when
                                                       // no downstream device is
                                                       // connected. Low Power Clock Disable is
                                                       // completely under the control of software.

                                                       // Properties: Bit: 22, Type: ro, Reset Value: 0x0
const uintptr_t USB_PORTSC1_WKOC_MASK = 0x00400000;    // Wake on Over-current Enable
const uintptr_t USB_PORTSC1_WKOC_BPOS = 22;            // Writing '1' to this bit enables the port to be
                                                       // sensitive to over-current conditions as wakeup
                                                       // events.
                                                       // This field is zero if Port Power (PP) is '0' or in
                                                       // device mode.
                                                       // This bit is output from the controller as signal
                                                       // pwrctl_wake_ovrcurr_en for use by an external
                                                       // power control circuit. Only used in host mode.

                                                       // Properties: Bit: 21, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_WKDS_MASK = 0x00200000;    // Wake on Disconnect Enable (Host mode).
const uintptr_t USB_PORTSC1_WKDS_BPOS = 21;            // 0: disable
                                                       // 1: enable
                                                       // In device mode, always set = 0.

                                                       // Properties: Bit: 20, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_WKCN_MASK = 0x00100000;    // Wake on Connect Enable (Host mode).
const uintptr_t USB_PORTSC1_WKCN_BPOS = 20;            // 0: disable
                                                       // 1: enable
                                                       // In device mode, always set = 0.

                                                       // Properties: Bits: 19:16, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PTC_MASK  = 0x000F0000;    // Port Test Control.
const uintptr_t USB_PORTSC1_PTC_BPOS  = 16;            // 0000: Normal operation.
                                                       // All others are test modes:
                                                       // 0001: J_STATE
                                                       // 0010: K_STATE
                                                       // 0011: SE0 (host) / NAK (device)
                                                       // 0100: Packet
                                                       // 0101: FORCE_ENABLE_HS
                                                       // 0110: FORCE_ENABLE_FS
                                                       // 0111: FORCE_ENABLE_LS
                                                       // Others: reserved

                                                       // Properties: Bits: 15:14, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PIC_MASK  = 0x0000C000;    // Port Indicator Control outputs (EHCI) (Host
const uintptr_t USB_PORTSC1_PIC_BPOS  = 14;            // mode).
                                                       // 00: Port indicators are off.
                                                       // 01: Amber (PL output signal
                                                       // EMIOUSBxPORTINDCTL0 is driven High).
                                                       // 10: Green (PL output signal
                                                       // EMIOUSBxPORTINDCTL1 is driven High).
                                                       // 11: undefined.
                                                       // Refer to the USB Specification Revision 2.0 for a
                                                       // description on how these bits are to be used.

                                                       // Properties: Bit: 13, Type: ro, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PO_MASK   = 0x00002000;    // Port Owner hand off is not implemented.
const uintptr_t USB_PORTSC1_PO_BPOS   = 13;            // Hardwired to 0.

                                                       // Properties: Bit: 12, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PP_MASK   = 0x00001000;    // Port Power enable (ECHI) (Host mode).
const uintptr_t USB_PORTSC1_PP_BPOS   = 12;            // Controls the PL output signal
                                                       // EMIOUSBxVBUSPWRSELECT.
                                                       // 0: disable, driven Low.
                                                       // 1: enable, driven High.
                                                       // This bit represents the current setting of the
                                                       // switch ('0'=off, '1'=on). When power is not
                                                       // available on a port (i.e. [PP] equals to '0'), the port
                                                       // is non-functional and will not report attaches,
                                                       // detaches, etc.
                                                       // When an over-current condition is detected on a
                                                       // powered port and [PPC] is a one, the [PP] bit in
                                                       // each affected port may be transitioned by the
                                                       // controller driver from '1' to '0'(removing power
                                                       // from the port).

                                                       // Properties: Bits: 11:10, Type: ro, Reset Value: 0x0
const uintptr_t USB_PORTSC1_LS_MASK   = 0x00000C00;    // Line State:
const uintptr_t USB_PORTSC1_LS_BPOS   = 10;            // 00: SE0
                                                       // 01: J-state
                                                       // 10: K-state
                                                       // 11: undefined.

                                                       // Properties: Bit: 9, Type: ro, Reset Value: 0x0
const uintptr_t USB_PORTSC1_HSP_MASK  = 0x00000200;    // High-Speed Port status (Host and Device mode).
const uintptr_t USB_PORTSC1_HSP_BPOS  = 9;             // 0: LS or FS mode
                                                       // 1: HS mode
                                                       // Note: [HSP] is redundant with [PSPD].

                                                       // Properties: Bit: 8, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PR_MASK   = 0x00000100;    // Port Reset - RW. Default = 0b.
const uintptr_t USB_PORTSC1_PR_BPOS   = 8;             // This field is zero if Port Power(PP) is '0'.
                                                       // Host mode: 1=Port is in Reset. 0=Port is not in
                                                       // Reset.
                                                       // Device Mode: This bit is a read only status bit.
                                                       // Device reset from the USB bus is also indicated in
                                                       // the USBSTS register

                                                       // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_SUSP_MASK = 0x00000080;    // Suspend
const uintptr_t USB_PORTSC1_SUSP_BPOS = 7;             // Host mode: 1=Port in suspend state. 0=Port not in
                                                       // suspend state. Port Enabled bit and Suspend bit of
                                                       // this register define the port states as follows:
                                                       // Bits [Port Enabled, Suspend] Port State
                                                       // 0x Disable
                                                       // 10 Enable
                                                       // 11 Suspend
                                                       // Device mode: Read Only. 1=Port in suspend state.
                                                       // 0=Port not in suspend state. In device mode this
                                                       // bit is a read only status bit.

                                                       // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_FPR_MASK  = 0x00000040;    // Force Port Resume
const uintptr_t USB_PORTSC1_FPR_BPOS  = 6;             // 1= Resume detected/driven on port.
                                                       // 0=No resume (K-state) detected/driven on port.

                                                       // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t USB_PORTSC1_OCC_MASK  = 0x00000020;    // Over-current Change
const uintptr_t USB_PORTSC1_OCC_BPOS  = 5;             // This bit gets set to '1' when there is a change to
                                                       // Over-current Active. Software clears this bit by
                                                       // writing a '1' to this bit position.
                                                       // When in host mode implementations the user can
                                                       // provide over-current detection to the
                                                       // vbus_pwr_fault input for this condition.
                                                       // For device mode this bit shall always be '0'.

                                                       // Properties: Bit: 4, Type: ro, Reset Value: 0x0
const uintptr_t USB_PORTSC1_OCA_MASK  = 0x00000010;    // Over-current Active
const uintptr_t USB_PORTSC1_OCA_BPOS  = 4;             // Value Meaning'1b' -> This port currently has an
                                                       // over-current condition.'0b' -> This port does not
                                                       // have an over-current condition.
                                                       // This bit will automatically transition from '1' to '0'
                                                       // when the over current condition is removed.
                                                       // For host mode implementations the user can
                                                       // provide over-current detection to the
                                                       // vbus_pwr_fault input for this condition.
                                                       // For device mode implementations this bit shall
                                                       // always be '0'.

                                                       // Properties: Bit: 3, Type: wtc, Reset Value: 0x0
const uintptr_t USB_PORTSC1_PEC_MASK  = 0x00000008;    // Port Enabled Change
const uintptr_t USB_PORTSC1_PEC_BPOS  = 3;             // If set to '1' indicates a Port Enabled/Disabled
                                                       // status change.
                                                       // Host mode:
                                                       // For the root hub, this bit gets set to a '1' only when
                                                       // a port is disabled due to disconnect on the port or
                                                       // due to the appropriate conditions existing at the
                                                       // EOF2 point (See Chapter 11 of the USB
                                                       // Specification). Software clears this by writing a '1'
                                                       // to it. This field is '0' if Port Power(PP) is '0'.
                                                       // Device mode:
                                                       // The device port is always enabled. (This bit will
                                                       // be '0').

                                                       // Properties: Bit: 2, Type: wtc, Reset Value: 0x1
const uintptr_t USB_PORTSC1_PE_MASK   = 0x00000004;    // Port Enabled
const uintptr_t USB_PORTSC1_PE_BPOS   = 2;             // 1 -> Enable
                                                       // 0-> Disable
                                                       // Host mode:
                                                       // Ports can only be enabled by Controller as a part
                                                       // of the reset and enable. Software cannot enable a
                                                       // port by writing a '1' to this field. Ports can be
                                                       // disabled by either a fault condition (disconnect
                                                       // event or other fault condition) or by the software.
                                                       // This field is '0' if Port Power(PP) is '0' in host
                                                       // mode.
                                                       // Device mode:
                                                       // The device port is always enabled. (This bit will
                                                       // be always '1').

                                                       // Properties: Bit: 1, Type: wtc, Reset Value: 0x0
const uintptr_t USB_PORTSC1_CSC_MASK  = 0x00000002;    // Connect Status Change
const uintptr_t USB_PORTSC1_CSC_BPOS  = 1;             // If set to '1' indicates a change in Current Connect
                                                       // Status (CCS).
                                                       // Host mode:
                                                       // Indicates a change has occurred in the port's
                                                       // Current Connect Status. The Controller sets this
                                                       // bit for all changes to the port device connect
                                                       // status, even if system software
                                                       // has not cleared an existing connect status change.
                                                       // For example, the insertion status changes twice
                                                       // before system software has cleared the changed
                                                       // condition, hub hardware will be 'setting' an
                                                       // already-set bit (i.e., the bit will remain set).
                                                       // Software clears this bit by writing a '1' to it. This
                                                       // field is '0' if Port Power(PP) is '0' in host mode.
                                                       // Device mode:
                                                       // This bit is undefined in device mode.

                                                       // Properties: Bit: 0, Type: ro, Reset Value: 0x0
const uintptr_t USB_PORTSC1_CCS_MASK  = 0x00000001;    // Current Connect Status.
const uintptr_t USB_PORTSC1_CCS_BPOS  = 0;             // Host mode:
                                                       // 1 -> Device is present on port.
                                                       // 0 -> No device is present.
                                                       // Device mode:
                                                       // 1 -> Attached.
                                                       // 0 -> Not Attached.


//------------------------------------------------------------------------------
//
// Register (USB) OTGSC
//
// Name                    USB_OTGSC_REG
// Software Name           OTGCSR
// Relative Address        0x000001A4
// Absolute Address        usb0: 0xE00021A4
//                         usb1: 0xE00031A4
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00001020
// Description             OTG Status and Control
//
// Register USB_OTGSC_REG Details
//         The OTGSC register has four sections:
//         * OTG Interrupt enables (Read/Write)
//         * OTG Interrupt status (Read/Write to Clear)
//         * OTG Status inputs (Read Only)
//         * OTG Controls (Read/Write)
//         IP Config Note: The Controller implements one On-The-Go (OTG) Status and Control register.
//
// RESERVED                                              Properties: Bit: 31, Type: ro, Reset Value: 0x0

                                                      // Properties: Bit: 30, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_DPIE_MASK  = 0x40000000;    // Data Pulse Interrupt Enable.
const uintptr_t USB_OTGSC_DPIE_BPOS  = 30;            // 0: disable.
                                                      // 1: enable usb.OTGSC [DPIS] interrupt.

                                                      // Properties: Bit: 29, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_1MS_E_MASK = 0x20000000;    // 1 ms Timer Interrupt Enable.
const uintptr_t USB_OTGSC_1MS_E_BPOS = 29;            // 0: disable.
                                                      // 1: enable usb.OTGSC [1msS] interrupt.

                                                      // Properties: Bit: 28, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_BSEIE_MASK = 0x10000000;    // B Session End Interrupt Enable.
const uintptr_t USB_OTGSC_BSEIE_BPOS = 28;            // 0: disable.
                                                      // 1: enable usb.OTGSC [BSEIS] interrupt.

                                                      // Properties: Bit: 27, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_BSVIE_MASK = 0x08000000;    // B Session Valid Interrupt Enable.
const uintptr_t USB_OTGSC_BSVIE_BPOS = 27;            // 0: disable.
                                                      // 1: enable usb.OTGSC [BSVIS] interrupt.

                                                      // Properties: Bit: 26, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_ASVIE_MASK = 0x04000000;    // A Session Valid Interrupt Enable.
const uintptr_t USB_OTGSC_ASVIE_BPOS = 26;            // 0: disable.
                                                      // 1: enable usb.OTGSC [ASVIS] interrupt.

                                                      // Properties: Bit: 25, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_AVVIE_MASK = 0x02000000;    // Interrupt Enable.
const uintptr_t USB_OTGSC_AVVIE_BPOS = 25;            // 0: disable.
                                                      // 1: enable usb.OTGSC [AVVIS] interrupt.

                                                      // Properties: Bit: 24, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_IDIE_MASK  = 0x01000000;    // USB ID Interrupt Enable.
const uintptr_t USB_OTGSC_IDIE_BPOS  = 24;            // 0: disable.
                                                      // 1: enable usb.OTGSC [IDIS] interrupt.

// RESERVED                                              Properties: Bit: 23, Type: ro, Reset Value: 0x0

                                                      // Properties: Bit: 22, Type: wtc, Reset Value: 0x0
const uintptr_t USB_OTGSC_DPIS_MASK  = 0x00400000;    // Data Pulse Interrupt Status.
const uintptr_t USB_OTGSC_DPIS_BPOS  = 22;            // 0: no pulses detected.
                                                      // 1: pulses detected. Write 1 to clear bit.
                                                      // The pulses being detected can be on DP or DM.
                                                      // Data bus pulsing is only detected when
                                                      // usb.USBMODE [CM] = 11 (Host mode) and
                                                      // usb.PORTSC0 [PP] = 0 (off). Non-latched status
                                                      // can be read using the [DPS] bit.

                                                      // Properties: Bit: 21, Type: wtc, Reset Value: 0x0
const uintptr_t USB_OTGSC_1MS_S_MASK = 0x00200000;    // 1 millisecond Timer Interrupt Status.
const uintptr_t USB_OTGSC_1MS_S_BPOS = 21;            // 0: no timer alert.
                                                      // 1: timer alert. Write 1 to clear bit.
                                                      // The hardware sets this bit every 1 milliseconds
                                                      // (based on a timer using 60 MHz ULPI).

                                                      // Properties: Bit: 20, Type: wtc, Reset Value: 0x0
const uintptr_t USB_OTGSC_BSEIS_MASK = 0x00100000;    // B Session End Interrupt Status.
const uintptr_t USB_OTGSC_BSEIS_BPOS = 20;            // 0: no event detected.
                                                      // 1: event detected. Write 1 to clear bit.
                                                      // This bit is set when VBus has fallen below the B
                                                      // session end threshold.

                                                      // Properties: Bit: 19, Type: wtc, Reset Value: 0x0
const uintptr_t USB_OTGSC_BSVIS_MASK = 0x00080000;    // B Session Valid Interrupt Status.
const uintptr_t USB_OTGSC_BSVIS_BPOS = 19;            // 0: no event detected.
                                                      // 1: event detected. Write 1 to clear bit.
                                                      // This bit is set when VBus has either risen above or
                                                      // fallen below the B session valid threshold (0.8
                                                      // VDC).

                                                      // Properties: Bit: 18, Type: wtc, Reset Value: 0x0
const uintptr_t USB_OTGSC_ASVIS_MASK = 0x00040000;    // A Session Valid Interrupt Status.
const uintptr_t USB_OTGSC_ASVIS_BPOS = 18;            // 0: no event detected.
                                                      // 1: event detected. Write 1 to clear bit.
                                                      // This bit is set when VBus has either risen above or
                                                      // fallen below the B session valid threshold (0.8
                                                      // VDC).

                                                      // Properties: Bit: 17, Type: wtc, Reset Value: 0x0
const uintptr_t USB_OTGSC_AVVIS_MASK = 0x00020000;    // A Session End Interrupt Status.
const uintptr_t USB_OTGSC_AVVIS_BPOS = 17;            // 0: no event detected.
                                                      // 1: event detected. Write 1 to clear bit.
                                                      // This bit is set when VBus has either risen above or
                                                      // fallen below the VBus valid threshold (4.4 VDC)
                                                      // on an A device.

                                                      // Properties: Bit: 16, Type: wtc, Reset Value: 0x0
const uintptr_t USB_OTGSC_IDIS_MASK  = 0x00010000;    // USB ID Interrupt Status.
const uintptr_t USB_OTGSC_IDIS_BPOS  = 16;            // 0: no interrupt latched
                                                      // 1: interrupt detected. Write 1 to clear this bit.
                                                      // This bit is set when a change on the ID input has
                                                      // been detected.

// RESERVED                                              Properties: Bit: 15, Type: ro, Reset Value: 0x0

                                                      // Properties: Bit: 14, Type: ro, Reset Value: 0x0
const uintptr_t USB_OTGSC_DPS_MASK   = 0x00004000;    // Data Bus Pulsing Status, read-only.
const uintptr_t USB_OTGSC_DPS_BPOS   = 14;            // 0: no pulses being detected.
                                                      // 1: pulses are being detected.
                                                      // Note: refer to the [DPSI] bit for more information.

                                                      // Properties: Bit: 13, Type: ro, Reset Value: 0x0
const uintptr_t USB_OTGSC_1MS_T_MASK = 0x00002000;    // 1 ms Timer High-Low Toggle, read-only. Software
const uintptr_t USB_OTGSC_1MS_T_BPOS = 13;            // will usually read a 0.
                                                      // This bit toggles high-low every millisecond to set
                                                      // the [1msS] bit.

                                                      // Properties: Bit: 12, Type: ro, Reset Value: 0x1
const uintptr_t USB_OTGSC_BSE_MASK   = 0x00001000;    // B Session End Status, read-only.
const uintptr_t USB_OTGSC_BSE_BPOS   = 12;            // 0: Vbus not below threshold.
                                                      // 1: Vbus below threshold.

                                                      // Properties: Bit: 11, Type: ro, Reset Value: 0x0
const uintptr_t USB_OTGSC_BSV_MASK   = 0x00000800;    // B Session Valid
const uintptr_t USB_OTGSC_BSV_BPOS   = 11;            // Indicates VBus is above the B session valid
                                                      // threshold.

                                                      // Properties: Bit: 10, Type: ro, Reset Value: 0x0
const uintptr_t USB_OTGSC_ASV_MASK   = 0x00000400;    // A Session Valid
const uintptr_t USB_OTGSC_ASV_BPOS   = 10;            // Indicates VBus is above the A session valid
                                                      // threshold.

                                                      // Properties: Bit: 9, Type: ro, Reset Value: 0x0
const uintptr_t USB_OTGSC_AVV_MASK   = 0x00000200;    // A VBus Valid.
const uintptr_t USB_OTGSC_AVV_BPOS   = 9;             // Indicates VBus is above the A VBus valid
                                                      // threshold.

                                                      // Properties: Bit: 8, Type: ro, Reset Value: 0x0
const uintptr_t USB_OTGSC_ID_MASK    = 0x00000100;    // USB ID'0' = A device, '1' = B device.
const uintptr_t USB_OTGSC_ID_BPOS    = 8;             // 

                                                      // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_HABA_MASK  = 0x00000080;    // Hardware assisted B-Disconnect to A-connect.
const uintptr_t USB_OTGSC_HABA_BPOS  = 7;             // 0: disabled.
                                                      // 1: enable automatic B-Disconnect to A-Connect
                                                      // sequence.

                                                      // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_HADP_MASK  = 0x00000040;    // Hardware assisted Data-Pulse
const uintptr_t USB_OTGSC_HADP_BPOS  = 6;             // 0: disable
                                                      // 1: hardware assisted data pulsing sequence starts.

                                                      // Properties: Bit: 5, Type: rw, Reset Value: 0x1
const uintptr_t USB_OTGSC_IDPU_MASK  = 0x00000020;    // ID Pullup. Control the ID Pullup resistor.
const uintptr_t USB_OTGSC_IDPU_BPOS  = 5;             // 0: off (the ID input will not be sampled).
                                                      // 1: on.

                                                      // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_DP_MASK    = 0x00000010;    // Data Pulsing enable.
const uintptr_t USB_OTGSC_DP_BPOS    = 4;             // 0:
                                                      // 1: pullup on DP is asserted for data pulsing
                                                      // during SRP.

                                                      // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_OT_MASK    = 0x00000008;    // OTG Termination
const uintptr_t USB_OTGSC_OT_BPOS    = 3;             // 0:
                                                      // 1: This bit must be set when the Controller is in
                                                      // device mode. It controls the pulldown on DM.

                                                      // Properties: Bit: 2, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_HAAR_MASK  = 0x00000004;    // Hardware Assist Auto-Reset'0' = Disabled, '1' =
const uintptr_t USB_OTGSC_HAAR_BPOS  = 2;             // Enable automatic reset after connect on host port.

                                                      // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_VC_MASK    = 0x00000002;    // VBUS Charge
const uintptr_t USB_OTGSC_VC_BPOS    = 1;             // Setting this bit causes the VBus line to be charged.
                                                      // This is used for VBus pulsing during SRP.

                                                      // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t USB_OTGSC_VD_MASK    = 0x00000001;    // VBUS Discharge.
const uintptr_t USB_OTGSC_VD_BPOS    = 0;             // Setting this bit causes VBus to discharge through
                                                      // a resistor.


//------------------------------------------------------------------------------
//
// Register (USB) MODE
//
// Name                    USB_MODE_REG
// Software Name           MODE
// Relative Address        0x000001A8
// Absolute Address        usb0: 0xE00021A8
//                         usb1: 0xE00031A8
// Width                   32 bits
// Access Type             mixed
// Reset Value             0x00000000
// Description             USB Mode Selection
//
// Register USB_MODE_REG Details
//
                                                    // Properties: Bit: 15, Type: rw, Reset Value: 0x0
const uintptr_t USB_MODE_SRT_MASK  = 0x00008000;    // Reseverd, set = 0. (Shorten Reset Time)
const uintptr_t USB_MODE_SRT_BPOS  = 15;            // 

// RESERVED                                            Properties: Bits: 14:6, Type: ro, Reset Value: 0x0

                                                    // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t USB_MODE_VBPS_MASK = 0x00000020;    // Vbus Power Select'0' -> Output is '0''1' -> Output
const uintptr_t USB_MODE_VBPS_BPOS = 5;             // is '1'This bit is connected to the vbus_pwr_select
                                                    // output and can be used for any generic control but
                                                    // is named to be used by logic that selects between
                                                    // an on-chip Vbus power source (charge pump) and
                                                    // an off-chip source in systems when both are
                                                    // available.
                                                    // Only used in host mode.

                                                    // Properties: Bit: 4, Type: rw, Reset Value: 0x0
const uintptr_t USB_MODE_SDIS_MASK = 0x00000010;    // Stream Disable Mode'0' -> Inactive'1' -> Active
const uintptr_t USB_MODE_SDIS_BPOS = 4;             // Device mode:
                                                    // Setting to a '1' disables double priming on both RX
                                                    // and TX for low bandwidth systems.
                                                    // Host Mode:
                                                    // Setting to a '1' ensures that overruns/under runs
                                                    // of the latency FIFO are eliminated for low
                                                    // bandwidth systems where the RX and TX buffers
                                                    // are sufficient to contain the entire packet.

                                                    // Properties: Bit: 3, Type: rw, Reset Value: 0x0
const uintptr_t USB_MODE_SLOM_MASK = 0x00000008;    // Setup Lockout Mode
const uintptr_t USB_MODE_SLOM_BPOS = 3;             // This bit controls behavior of the setup lock
                                                    // mechanism.'0' -> Setup Lockouts On.'1' -> Setup
                                                    // Lockouts Off (DCD requires use of Setup Data
                                                    // Buffer Tripwire in USBCMD).
                                                    // Only used in device mode

                                                    // Properties: Bit: 2, Type: ro, Reset Value: 0x0
const uintptr_t USB_MODE_ES_MASK   = 0x00000004;    // Reseverd, set = 0. (Endian Select)
const uintptr_t USB_MODE_ES_BPOS   = 2;             // 

                                                    // Properties: Bits: 1:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_MODE_CM_MASK   = 0x00000003;    // Controller Mode is defaulted to the proper mode
const uintptr_t USB_MODE_CM_BPOS   = 0;             // for host only and device only implementations.
                                                    // For those designs that contain both host & device
                                                    // capability (OTG), the Controller will default to an
                                                    // idle state and will need to be initialized to the
                                                    // desired operating mode after reset. For
                                                    // combination host/device controllers, this register
                                                    // can only be written once after reset. If it is
                                                    // necessary to switch modes, software must reset
                                                    // the controller by writing to the RST bit in the
                                                    // USBCMD register before reprogramming this
                                                    // register.'00b' -> Idle (Default for combination
                                                    // host/device).'01b' -> Reserved.'10b' -> Controller
                                                    // in device mode (Default for device only
                                                    // controller).'11b' -> Controller in host mode
                                                    // (Default for host only controller).


//------------------------------------------------------------------------------
//
// Register (USB) ENDPTSETUPSTAT
//
// Name                    USB_ENDPTSETUPSTAT_REG
// Software Name           EPSTAT
// Relative Address        0x000001AC
// Absolute Address        usb0: 0xE00021AC
//                         usb1: 0xE00031AC
// Width                   16 bits
// Access Type             wtc
// Reset Value             0x00000000
// Description             Endpoint Status Setup (Device mode)
//
// Register USB_ENDPTSETUPSTAT_REG Details
//
                                                         // Properties: Bits: 15:0, Type: wtc, Reset Value: 0x0
const uintptr_t USB_ENDPTSETUPSTAT_MASK = 0x0000FFFF;    // Setup Endpoint Status (Device mode).
const uintptr_t USB_ENDPTSETUPSTAT_BPOS = 0;             // When a Setup transaction is received, the
                                                         // corresponding bit is set = 1. Software reads the
                                                         // setup data from the Queue Head and then writes
                                                         // a 1 to clear the status bit.
                                                         // Bit[0]: Endpoint 0.
                                                         // Bit[1]: Endpoint 1.
                                                         // ...
                                                         // Bit[12]: Endpoint 12.
                                                         // Other bits: reserved.


//------------------------------------------------------------------------------
//
// Register (USB) ENDPTPRIME
//
// Name                     USB_ENDPTPRIME_REG
// Software Name            EPPRIME
// Relative Address         0x000001B0
// Absolute Address         usb0: 0xE00021B0
//                          usb1: 0xE00031B0
// Width                    32 bits
// Access Type              wtc
// Reset Value              0x00000000
// Description              Endpoint Primer (Device mode)
//
// Register USB_ENDPTPRIME_REG Details
//         For each endpoint a corresponding bit is used to request that a buffer be prepared for an operation in order
//         to respond to a USB transaction. Software
//         writes a 1 to the corresponding bit when posting a new transfer descriptor to an endpoint. Hardware will
//         automatically use this bit to begin parsing for the new transfer descriptor. Hardware clears this bit when
//         the associated endpoint(s) is (are) successfully primed.
//         Note: These bits will be momentarily set by hardware during hardware re-priming operations when a dTD
//         is retired, and the dQH is updated.
//
                                                          // Properties: Bits: 31:16, Type: wtc, Reset Value: 0x0
const uintptr_t USB_ENDPTPRIME_PETB_MASK = 0xFFFF0000;    // Prime Endpoint TxBuffer (Device mode).
const uintptr_t USB_ENDPTPRIME_PETB_BPOS = 16;            // Write a 1 to the corresponding bit to request
                                                          // TxBuffer to respond to a USB IN/INTERRUPT
                                                          // transaction.
                                                          // Bit[16]: Endpoint 0.
                                                          // Bit[17]: Endpoint 1.
                                                          // ...
                                                          // Bit[28]: Endpoint 12.
                                                          // Bits[31:29]: reserved.

                                                          // Properties: Bits: 15:0, Type: wtc, Reset Value: 0x0
const uintptr_t USB_ENDPTPRIME_PERB_MASK = 0x0000FFFF;    // Prime Endpoint RxBuffer (Device mode).
const uintptr_t USB_ENDPTPRIME_PERB_BPOS = 0;             // Write a 1 to the corresponding bit to request
                                                          // RxBuffer to respond to a USB OUT transaction.
                                                          // Bit[0]: Endpoint 0.
                                                          // Bit[1]: Endpoint 1.
                                                          // ...
                                                          // Bit[12]: Endpoint 12.
                                                          // Bits[15:13]: reserved.


//------------------------------------------------------------------------------
//
// Register (USB) ENDPTFLUSH
//
// Name                      USB_ENDPTFLUSH_REG
// Software Name             EPFLUSH
// Relative Address          0x000001B4
// Absolute Address          usb0: 0xE00021B4
//                           usb1: 0xE00031B4
// Width                     32 bits
// Access Type               wtc
// Reset Value               0x00000000
// Description               Endpoint Flush (Device mode)
//
// Register USB_ENDPTFLUSH_REG Details
//         The Flush operation of an endpoint will clear the usb.ENDPTSTAT bit and reset the RX/TX data buffer.
//         Ready status of that endpoint and re-align the Latency Buffer pointers, but not clear the actual data that
//         resides in the Latency Buffers.
//         Write a 1 to a bit(s) to cause the associated endpoint(s) to clear any primed buffers. If a packet is in progress
//         for one of the associated endpoints, then that
//         transfer will continue until completion. Hardware will clear this register after the endpoint flush operation
//         is successful.
//
                                                          // Properties: Bits: 31:16, Type: wtc, Reset Value: 0x0
const uintptr_t USB_ENDPTFLUSH_FETB_MASK = 0xFFFF0000;    // Flush Endpoint TxBuffer (Device mode).
const uintptr_t USB_ENDPTFLUSH_FETB_BPOS = 16;            // Write a 1 to the corresponding bit to flush the
                                                          // TxBuffer.
                                                          // Bit[16]: Endpoint 0.
                                                          // Bit[17]: Endpoint 1.
                                                          // ...
                                                          // Bit[28]: Endpoint 12.
                                                          // Bits[31:29]: reserved.

                                                          // Properties: Bits: 15:0, Type: wtc, Reset Value: 0x0
const uintptr_t USB_ENDPTFLUSH_FERB_MASK = 0x0000FFFF;    // Flush Endpoint RxBuffer (Device mode).
const uintptr_t USB_ENDPTFLUSH_FERB_BPOS = 0;             // Write a 1 to the corresponding bit to flush the
                                                          // RxBuffer.
                                                          // Bit[0]: Endpoint 0.
                                                          // Bit[1]: Endpoint 1.
                                                          // ...
                                                          // Bit[12]: Endpoint 12.
                                                          // Bits[15:13]: reserved.


//------------------------------------------------------------------------------
//
// Register (USB) ENDPTSTAT
//
// Name                    USB_ENDPTSTAT_REG
// Software Name           EPRDY
// Relative Address        0x000001B8
// Absolute Address        usb0: 0xE00021B8
//                         usb1: 0xE00031B8
// Width                   32 bits
// Access Type             ro
// Reset Value             0x00000000
// Description             Endpoint Buffer Ready Status (Device mode), RO
//
// Register USB_ENDPTSTAT_REG Details
//         For each endpoint, there is one buffer ready status (ENDPTSTAT) bit for the TX buffer and one bit for RX
//         buffer.
//         An ENDPTSTAT bit is set to a 1 by the hardware in a response to receiving an EP prime command (write 1
//         to usb.ENDPTPRIME regsiter). There will always be a delay between writing a 1 to a usb.ENDPTPRIME
//         register bit and the ENDPTSTAT bit asserting to indicate ready. This delay time varies based upon the
//         current USB traffic and the number of bits in the usb.ENDPTPRIME register that transition from 0 to 1.
//         An ENDPTSTAT bit is cleared in one of three ways: by a USB reset, by the DMA engine hardware, or by a
//         flush command using the usb.ENDPTFLUSH register.
//         Note: The ENDPTSTAT bit will be momentarily read = 0 during the time the hardware is retiring a dTD
//         and updating the dQH transfer descriptors.
//
                                                         // Properties: Bits: 31:16, Type: ro, Reset Value: 0x0
const uintptr_t USB_ENDPTSTAT_ETBR_MASK = 0xFFFF0000;    // TxBuffer ready status (Device mode), read-only.
const uintptr_t USB_ENDPTSTAT_ETBR_BPOS = 16;            // 0: cleared by reset, DMA, or ENDPTFLUSH.
                                                         // 1: ENDPTPRIME command received.
                                                         // Bit[16]: Endpoint 0.
                                                         // Bit[17]: Endpoint 1.
                                                         // ...
                                                         // Bit[28]: Endpoint 12.
                                                         // Bits[31:29]: reserved.

                                                         // Properties: Bits: 15:0, Type: ro, Reset Value: 0x0
const uintptr_t USB_ENDPTSTAT_ERBR_MASK = 0x0000FFFF;    // RxBuffer ready status (Device mode), read-only.
const uintptr_t USB_ENDPTSTAT_ERBR_BPOS = 0;             // 0: cleared by reset, DMA, or ENDPTFLUSH.
                                                         // 1: ENDPTPRIME command received.
                                                         // Bit[0]: Endpoint 0.
                                                         // Bit[1]: Endpoint 1.
                                                         // ...
                                                         // Bit[12]: Endpoint 12.
                                                         // Bits[15:13]: reserved.


//------------------------------------------------------------------------------
//
// Register (USB) ENDPTCOMPLETE
//
// Name                    USB_ENDPTCOMPLETE_REG
// Software Name            EPCOMPL
// Relative Address         0x000001BC
// Absolute Address         usb0: 0xE00021BC
//                          usb1: 0xE00031BC
// Width                    32 bits
// Access Type              rw
// Reset Value              0x00000000
// Description              Endpoint Tx Complete (Device mode)
//
// Register USB_ENDPTCOMPLETE_REG Details
//         Each bit indicates an event (Transmit/Receive) occurred and software should read the corresponding
//         endpoint queue to determine the endpoint status. If the
//         corresponding IOC bit is set in the Transfer Descriptor, then this bit will be set simultaneously with the
//         USBINT. Writing a 1 will clear the corresponding bit in this register.
//
                                                             // Properties: Bits: 31:16, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCOMPLETE_ETCE_MASK = 0xFFFF0000;    // Endpoint Transmit Complete Event (Device
const uintptr_t USB_ENDPTCOMPLETE_ETCE_BPOS = 16;            // mode), read-only.
                                                             // 0: not completed.
                                                             // 1: completed. Write a 1 to clear.
                                                             // Bit[16]: Endpoint 0.
                                                             // Bit[17]: Endpoint 1.
                                                             // ...
                                                             // Bit[28]: Endpoint 12.
                                                             // Bits[31:29]: reserved.

                                                             // Properties: Bits: 15:0, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCOMPLETE_ERCE_MASK = 0x0000FFFF;    // Endpoint Receive Complete Event (Device
const uintptr_t USB_ENDPTCOMPLETE_ERCE_BPOS = 0;             // mode), read-only.
                                                             // 0: not completed.
                                                             // 1: completed. Write a 1 to clear.
                                                             // Bit[0]: Endpoint 0.
                                                             // Bit[1]: Endpoint 1.
                                                             // ...
                                                             // Bit[12]: Endpoint 12.
                                                             // Bits[15:13]: reserved.


//------------------------------------------------------------------------------
//
// Register (USB) ENDPTCTRL0
//
// Name                     USB_ENDPTCTRL0_REG
// Software Name            EPCR0
// Relative Address         0x000001C0
// Absolute Address         usb0: 0xE00021C0
//                          usb1: 0xE00031C0
// Width                    24 bits
// Access Type              mixed
// Reset Value              0x00800080
// Description              Endpoint 0 (Device mode)
//
// Register USB_ENDPTCTRL0_REG Details
//         Every device controller implements Endpoint 0 as a control endpoint.
//         Rx and Tx Endpoint Stall bits [0] and [16]:
//         Software can write a one to a stall bit to force the endpoint to return a STALL handshake to the Host. The
//         device controller will continue returning STALL until the bit is cleared by software or it will automatically
//         be cleared upon receipt of a new SETUP request. After receiving a SETUP request, the stall bit will continue
//         to be cleared by hardware until the associated ENDPTSETUPSTAT bit is cleared. Note: There is a slight
//         delay (50 clocks max.) between the ENDPTSETUPSTAT being cleared and hardware continuing to clear
//         this bit. In most systems it is unlikely the software will observe this delay. However, should the software
//         observe that the stall bit is not set after writing a 1 to it then follow this procedure: continually write this
//         stall bit until it is set or until a new SETUP has been received by checking the associated
//         ENDPTSETUPSTAT bit.
//
                                                         // Properties: Bit: 23, Type: ro, Reset Value: 0x1
const uintptr_t USB_ENDPTCTRL0_TXE_MASK = 0x00800000;    // Transmit Endpoint Enable, read-only.
const uintptr_t USB_ENDPTCTRL0_TXE_BPOS = 23;            // 1: EP 0 is always enabled.

// RESERVED                                                 Properties: Bits: 22:20, Type: ro, Reset Value: 0x0

                                                         // Properties: Bits: 19:18, Type: ro, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL0_TXT_MASK = 0x000C0000;    // TX Endpoint Type, read-only.
const uintptr_t USB_ENDPTCTRL0_TXT_BPOS = 18;            // 00: EP 0 is always a control endpoint.

// RESERVED                                                 Properties: Bit: 17, Type: ro, Reset Value: 0x0

                                                         // Properties: Bit: 16, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL0_TXS_MASK = 0x00010000;    // TX Endpoint Stall, read-only.
const uintptr_t USB_ENDPTCTRL0_TXS_BPOS = 16;            // 0: Normal operation.
                                                         // 1: Force Stall handshake.
                                                         // Note: refer to the register description for more
                                                         // description.

// RESERVED                                                 Properties: Bits: 15:8, Type: ro, Reset Value: 0x0

                                                         // Properties: Bit: 7, Type: ro, Reset Value: 0x1
const uintptr_t USB_ENDPTCTRL0_RXE_MASK = 0x00000080;    // RX Endpoint Enable, read-only.
const uintptr_t USB_ENDPTCTRL0_RXE_BPOS = 7;             // 1: EP 0
                                                         // is always enabled.

// RESERVED                                                 Properties: Bits: 6:4, Type: ro, Reset Value: 0x0

                                                         // Properties: Bits: 3:2, Type: ro, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL0_RXT_MASK = 0x0000000C;    // RX Endpoint Type, read-only.
const uintptr_t USB_ENDPTCTRL0_RXT_BPOS = 2;             // 00: EP0 is always a control endpoint.

// RESERVED                                                 Properties: Bit: 1, Type: ro, Reset Value: 0x0

                                                         // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL0_RXS_MASK = 0x00000001;    // RX Endpoint Stall.
const uintptr_t USB_ENDPTCTRL0_RXS_BPOS = 0;             // 0: Normal operation.
                                                         // 1: Force Stall handshake.
                                                         // Note: refer to the register description for more
                                                         // description.


//------------------------------------------------------------------------------
//
// Register (USB) ENDPTCTRL1_11
//
// Name                      USB_ENDPTCTRL1_11_REG
// Relative Address          0x000001C4
// Absolute Address          usb0: 0xE00021C4
//                           usb1: 0xE00031C4
// Width                     24 bits
// Access Type               mixed
// Reset Value               0x00000000
// Description               Endpoints 1 to 11 (Device mode)
//         Note: This register is the first in an array of 11 identical registers listed in the table below. The details
//         provided in this section apply to the entire array.
//    Name                     Address
// ENDPTCTRL1                0xe00021c4
// ENDPTCTRL2                0xe00021c8
// ENDPTCTRL3                0xe00021cc
// ENDPTCTRL4                0xe00021d0
// ENDPTCTRL5                0xe00021d4
// ENDPTCTRL6                0xe00021d8
// ENDPTCTRL7                0xe00021dc
// ENDPTCTRL8                0xe00021e0
// ENDPTCTRL9                0xe00021e4
// ENDPTCTRL10               0xe00021e8
// ENDPTCTRL11               0xe00021ec
//
// Register ENDPTCTRL1 to ENDPTCTRL11 Details
//
                                                            // Properties: Bit: 23, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_TXE_MASK = 0x00800000;    // TX Endpoint Enable.
const uintptr_t USB_ENDPTCTRL1_11_TXE_BPOS = 23;            // 0: disable.
                                                            // 1: enable.
                                                            // Enable an Endpoing after it has been configured.

                                                            // Properties: Bit: 22, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_TXR_MASK = 0x00400000;    // TX Data Toggle Reset.
const uintptr_t USB_ENDPTCTRL1_11_TXR_BPOS = 22;            // Write '1' will reset the PID sequence. Whenever a
                                                            // configuration event is received for this Endpoint,
                                                            // software must write a one to this bit in order to
                                                            // synchronize the data PID's between the host and
                                                            // device.

                                                            // Properties: Bit: 21, Type: ro, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_TXI_MASK = 0x00200000;    // TX Data Toggle Inhibit. (testing)
const uintptr_t USB_ENDPTCTRL1_11_TXI_BPOS = 21;            // 0: PID Sequencing enabled
                                                            // 1: PID Sequencing disabled

// RESERVED                                                    Properties: Bit: 20, Type: ro, Reset Value: 0x0

                                                            // Properties: Bits: 19:18, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_TXT_MASK = 0x000C0000;    // TX Endpoint Type control.
const uintptr_t USB_ENDPTCTRL1_11_TXT_BPOS = 18;            // 00: Control
                                                            // 01: Isochronous
                                                            // 10: Bulk
                                                            // 11: Interrupt

                                                            // Properties: Bit: 17, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_TXD_MASK = 0x00020000;    // TX Endpoint Data datapath.
const uintptr_t USB_ENDPTCTRL1_11_TXD_BPOS = 17;            // 0: dual-port memory buffer with a DMA Engine.
                                                            // Always write a 0.

                                                            // Properties: Bit: 16, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_TXS_MASK = 0x00010000;    // TX Endpoint Stall.
const uintptr_t USB_ENDPTCTRL1_11_TXS_BPOS = 16;            // 0: Normal operation.
                                                            // 1: Force Stall handshake.
                                                            // Note: refer to the ENDPTCTRL 0 register
                                                            // description for more description.

// RESERVED                                                    Properties: Bits: 15:8, Type: ro, Reset Value: 0x0

                                                            // Properties: Bit: 7, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_RXE_MASK = 0x00000080;    // RX Endpoint Enable
const uintptr_t USB_ENDPTCTRL1_11_RXE_BPOS = 7;             // 0: Disable
                                                            // 1: Enable
                                                            // Enable an Endpoing after it has been configured.

                                                            // Properties: Bit: 6, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_RXR_MASK = 0x00000040;    // RX Data Toggle Reset.
const uintptr_t USB_ENDPTCTRL1_11_RXR_BPOS = 6;             // Write '1' will reset the PID sequence. Whenever a
                                                            // configuration event is received for this Endpoint,
                                                            // software must write a one to this bit in order to
                                                            // synchronize the data PID's between the host and
                                                            // device.

                                                            // Properties: Bit: 5, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_RXI_MASK = 0x00000020;    // RX Data Toggle Inhibit.
const uintptr_t USB_ENDPTCTRL1_11_RXI_BPOS = 5;             // 0: PID Sequencing enabled
                                                            // 1: PID Sequencing disabled

// RESERVED                                                    Properties: Bit: 4, Type: rw, Reset Value: 0x0

                                                            // Properties: Bits: 3:2, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_RXT_MASK = 0x0000000C;    // RX Endpoint Type.
const uintptr_t USB_ENDPTCTRL1_11_RXT_BPOS = 2;             // 0: Control
                                                            // 1: Isochronous
                                                            // 0: Bulk
                                                            // 1: Interrupt

                                                            // Properties: Bit: 1, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_RXD_MASK = 0x00000002;    // RX Endpoint Data datapath.
const uintptr_t USB_ENDPTCTRL1_11_RXD_BPOS = 1;             // 0: dual-port memory buffer with a DMA Engine.
                                                            // Always write a 0.

                                                            // Properties: Bit: 0, Type: rw, Reset Value: 0x0
const uintptr_t USB_ENDPTCTRL1_11_RXS_MASK = 0x00000001;    // RX Endpoint Stall.
const uintptr_t USB_ENDPTCTRL1_11_RXS_BPOS = 0;             // : Normal operation.
                                                            // : Force Stall handshake.
                                                            // ote: refer to the ENDPTCTRL 0 register
                                                            // escription for more description.


#endif // PS7_USB_H

