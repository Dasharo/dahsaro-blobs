/** @file

Copyright (c) 2019, Intel Corporation. All rights reserved.<BR>

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this
  list of conditions and the following disclaimer in the documentation and/or
  other materials provided with the distribution.
* Neither the name of Intel Corporation nor the names of its contributors may
  be used to endorse or promote products derived from this software without
  specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
  THE POSSIBILITY OF SUCH DAMAGE.

  This file is automatically generated. Please do NOT modify !!!

**/

#ifndef __FSPTUPD_H__
#define __FSPTUPD_H__

#include <FspUpd.h>

#pragma pack(1)


/** Fsp T Core UPD
**/
typedef struct {

/** Offset 0x0020
**/
  UINT32                      MicrocodeRegionBase;

/** Offset 0x0024
**/
  UINT32                      MicrocodeRegionSize;

/** Offset 0x0028
**/
  UINT32                      CodeRegionBase;

/** Offset 0x002C
**/
  UINT32                      CodeRegionSize;

/** Offset 0x0030
**/
  UINT8                       Reserved[48];
} FSPT_CORE_UPD;

/** Fsp T Configuration
**/
typedef struct {

/** Offset 0x0060 - PcdSerialIoUartDebugEnable
  Enable SerialIo Uart debug library with/without initializing SerialIo Uart device in FSP.
  0:Disable, 1:Enable and Initialize, 2:Enable without Initializing
**/
  UINT8                       PcdSerialIoUartDebugEnable;

/** Offset 0x0061 - PcdSerialIoUartNumber - FSPT
  Select SerialIo Uart Controller for debug. Note: If UART0 is selected as CNVi BT
  Core interface, it cannot be used for debug purpose.
  0:SerialIoUart0, 1:SerialIoUart1, 2:SerialIoUart2
**/
  UINT8                       PcdSerialIoUartNumber;

/** Offset 0x0062 - PcdSerialIoUartMode - FSPT
  Select SerialIo Uart Controller mode
  0:SerialIoUartDisabled, 1:SerialIoUartPci, 2:SerialIoUartHidden, 3:SerialIoUartCom,
  4:SerialIoUartSkipInit
**/
  UINT8                       PcdSerialIoUartMode;

/** Offset 0x0063
**/
  UINT8                       UnusedUpdSpace0;

/** Offset 0x0064 - PcdSerialIoUartBaudRate - FSPT
  Set default BaudRate Supported from 0 - default to 6000000
**/
  UINT32                      PcdSerialIoUartBaudRate;

/** Offset 0x0068 - Pci Express Base Address
  Base address to be programmed for Pci Express
**/
  UINT64                      PcdPciExpressBaseAddress;

/** Offset 0x0070 - Pci Express Region Length
  Region Length to be programmed for Pci Express
**/
  UINT32                      PcdPciExpressRegionLength;

/** Offset 0x0074 - PcdSerialIoUartParity - FSPT
  Set default Parity.
  0: DefaultParity, 1: NoParity, 2: EvenParity, 3: OddParity
**/
  UINT8                       PcdSerialIoUartParity;

/** Offset 0x0075 - PcdSerialIoUartDataBits - FSPT
  Set default word length. 0: Default, 5,6,7,8
**/
  UINT8                       PcdSerialIoUartDataBits;

/** Offset 0x0076 - PcdSerialIoUartStopBits - FSPT
  Set default stop bits.
  0: DefaultStopBits, 1: OneStopBit, 2: OneFiveStopBits, 3: TwoStopBits
**/
  UINT8                       PcdSerialIoUartStopBits;

/** Offset 0x0077 - PcdSerialIoUartAutoFlow - FSPT
  Enables UART hardware flow control, CTS and RTS lines.
  0: Disable, 1:Enable
**/
  UINT8                       PcdSerialIoUartAutoFlow;

/** Offset 0x0078 - PcdSerialIoUartRxPinMux - FSPT
  Select RX pin muxing for SerialIo UART used for debug
**/
  UINT32                      PcdSerialIoUartRxPinMux;

/** Offset 0x007C - PcdSerialIoUartTxPinMux - FSPT
  Select TX pin muxing for SerialIo UART used for debug
**/
  UINT32                      PcdSerialIoUartTxPinMux;

/** Offset 0x0080 - PcdSerialIoUartRtsPinMux - FSPT
  Select SerialIo Uart used for debug Rts pin muxing. Refer to GPIO_*_MUXING_SERIALIO_UARTx_RTS*
  for possible values.
**/
  UINT32                      PcdSerialIoUartRtsPinMux;

/** Offset 0x0084 - PcdSerialIoUartCtsPinMux - FSPT
  Select SerialIo Uart used for debug Cts pin muxing. Refer to GPIO_*_MUXING_SERIALIO_UARTx_CTS*
  for possible values.
**/
  UINT32                      PcdSerialIoUartCtsPinMux;

/** Offset 0x0088 - PcdSerialIoUartDebugMmioBase - FSPT
**/
  UINT32                      PcdSerialIoUartDebugMmioBase;

/** Offset 0x008C - PcdLpcUartDebugEnable - FSPT
**/
  UINT8                       PcdLpcUartDebugEnable;

/** Offset 0x008D - PcdDebugInterfaceFlags - FSPT
**/
  UINT8                       PcdDebugInterfaceFlags;

/** Offset 0x008E - PcdDebugInterfaceFlags - FSPT
**/
  UINT8                       PcdSerialDebugLevel;
  
/** Offset 0x008F - PcdIsaSerialUartBase - FSPT
**/
  UINT8                       PcdIsaSerialUartBase;

/** Offset 0x0090 - PcdSerialIo2ndUartEnable - FSPT
**/
  UINT8                       PcdSerialIo2ndUartEnable;

/** Offset 0x0091 - PcdSerialIo2ndUartNumber - FSPT
**/
  UINT8                       PcdSerialIo2ndUartNumber;

/** Offset 0x0092 - PcdSerialIo2ndUartMode - FSPT
**/
  UINT8                       PcdSerialIo2ndUartMode;

/** Offset 0x0093
**/
  UINT8                       ReservedFsptUpd1[1];

/** Offset 0x0094 - PcdSerialIo2ndUartBaudRate - FSPT 
**/
  UINT32                       PcdSerialIo2ndUartBaudRate;

/** Offset 0x0098 - PcdSerialIo2ndUartParity - FSPT 
**/
  UINT8                        PcdSerialIo2ndUartParity;

/** Offset 0x0099 - PcdSerialIo2ndUartDataBits - FSPT 
**/
  UINT8                        PcdSerialIo2ndUartDataBits;

/** Offset 0x009A - PcdSerialIo2ndUartStopBits - FSPT 
**/
  UINT8                        PcdSerialIo2ndUartStopBits;

/** Offset 0x009B - PcdSerialIo2ndUartAutoFlow - FSPT 
**/
  UINT8                        PcdSerialIo2ndUartAutoFlow;

/** Offset 0x009C - PcdSerialIo2ndUartRxPinMux - FSPT 
**/
  UINT32                       PcdSerialIo2ndUartRxPinMux;

/** Offset 0x00A0 - PcdSerialIo2ndUartTxPinMux - FSPT 
**/
  UINT32                       PcdSerialIo2ndUartTxPinMux;

/** Offset 0x00A4 - PcdSerialIo2ndUartRtsPinMux - FSPT 
**/
  UINT32                       PcdSerialIo2ndUartRtsPinMux;

/** Offset 0x00A8 - PcdSerialIo2ndUartCtsPinMux - FSPT 
**/
  UINT32                       PcdSerialIo2ndUartCtsPinMux;

/** Offset 0x00AC - PcdSerialIo2ndUartMmioBase - FSPT 
**/
  UINT32                       PcdSerialIo2ndUartMmioBase;



} FSP_T_CONFIG;

/** Fsp T UPD Configuration
**/
typedef struct {

/** Offset 0x0000
**/
  FSP_UPD_HEADER              FspUpdHeader;

/** Offset 0x0020
**/
  FSPT_CORE_UPD               FsptCoreUpd;

/** Offset 0x0060
**/
  FSP_T_CONFIG                FsptConfig;

/** Offset 0x00B0
**/
  UINT8                       UnusedUpdSpace1[30];

/** Offset 0x00A6
**/
  UINT16                      UpdTerminator;
} FSPT_UPD;

#pragma pack()

#endif