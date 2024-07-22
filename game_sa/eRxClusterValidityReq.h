#pragma once

enum RxClusterValidityReq : int32_t
{
  rxCLREQ_DONTWANT = 0x0,
  rxCLREQ_REQUIRED = 0x1,
  rxCLREQ_OPTIONAL = 0x2,
  rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7FFFFFFF,
};
