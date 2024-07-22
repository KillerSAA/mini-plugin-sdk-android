#pragma once 

enum rxEmbeddedPacketState : int32_t
{
  rxPKST_PACKETLESS = 0x0,
  rxPKST_UNUSED = 0x1,
  rxPKST_INUSE = 0x2,
  rxPKST_PENDING = 0x3,
  rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7FFFFFFF,
};
