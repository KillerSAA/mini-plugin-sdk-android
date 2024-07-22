#pragma once 

enum OSPointerState : uint32_t
{
  OSPS_ButtonReleased = 0x0,
  OSPS_ButtonUp = 0x1,
  OSPS_ButtonPressed = 0x2,
  OSPS_ButtonDown = 0x3,
  OSPS_ButtonInvalid = 0xFFFFFFFF,
};