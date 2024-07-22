#pragma once

enum RxClusterValid : int32_t
{
  rxCLVALID_NOCHANGE = 0x0,
  rxCLVALID_VALID = 0x1,
  rxCLVALID_INVALID = 0x2,
  rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7FFFFFFF,
};