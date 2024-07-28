#pragma once

#include "rw/RwVectors.h"

enum RsKeyCodes : int32_t
{
  rsESC = 0x3E8,
  rsF1 = 0x3E9,
  rsF2 = 0x3EA,
  rsF3 = 0x3EB,
  rsF4 = 0x3EC,
  rsF5 = 0x3ED,
  rsF6 = 0x3EE,
  rsF7 = 0x3EF,
  rsF8 = 0x3F0,
  rsF9 = 0x3F1,
  rsF10 = 0x3F2,
  rsF11 = 0x3F3,
  rsF12 = 0x3F4,
  rsINS = 0x3F5,
  rsDEL = 0x3F6,
  rsHOME = 0x3F7,
  rsEND = 0x3F8,
  rsPGUP = 0x3F9,
  rsPGDN = 0x3FA,
  rsUP = 0x3FB,
  rsDOWN = 0x3FC,
  rsLEFT = 0x3FD,
  rsRIGHT = 0x3FE,
  rsNUMPAD_FRW_SLASH = 0x3FF,
  rsNUMPAD_STAR = 0x400,
  rsNUMPAD_PLUS_SIGN = 0x401,
  rsNUMPAD_MINUS = 0x402,
  rsNUMPAD_DOT = 0x403,
  rsNUMPAD_ONE = 0x404,
  rsNUMPAD_TWO = 0x405,
  rsNUMPAD_THREE = 0x406,
  rsNUMPAD_FOUR = 0x407,
  rsNUMPAD_FIVE = 0x408,
  rsNUMLOCK = 0x409,
  rsNUMPAD_SIX = 0x40A,
  rsNUMPAD_SEVEN = 0x40B,
  rsNUMPAD_EIGHT = 0x40C,
  rsNUMPAD_NINE = 0x40D,
  rsNUMPAD_ZERO = 0x40E,
  rsNUMPAD_ENTER = 0x40F,
  rsSCROLL_LOCK = 0x410,
  rsPAUSE_BREAK = 0x411,
  rsBACKSP = 0x412,
  rsTAB = 0x413,
  rsCAPSLK = 0x414,
  rsENTER = 0x415,
  rsLSHIFT = 0x416,
  rsRSHIFT = 0x417,
  rsSHIFT = 0x418,
  rsLCTRL = 0x419,
  rsRCTRL = 0x41A,
  rsLALT = 0x41B,
  rsRALT = 0x41C,
  rsLEFT_WINDOW_KEY = 0x41D,
  rsRIGHT_WINDOW_KEY = 0x41E,
  rsRIGHT_CLICK_MENU = 0x41F,
  rsNULL = 0x420,
};

enum RsEvent : int32_t
{
  rsCAMERASIZE = 0x0,
  rsCOMMANDLINE = 0x1,
  rsFILELOAD = 0x2,
  rsINITDEBUG = 0x3,
  rsINPUTDEVICEATTACH = 0x4,
  rsLEFTBUTTONDOWN = 0x5,
  rsLEFTBUTTONUP = 0x6,
  rsMOUSEMOVE = 0x7,
  rsMOUSEWHEELMOVE = 0x8,
  rsPLUGINATTACH = 0x9,
  rsREGISTERIMAGELOADER = 0xA,
  rsRIGHTBUTTONDOWN = 0xB,
  rsRIGHTBUTTONUP = 0xC,
  rsMIDDLEBUTTONDOWN = 0xD,
  rsMIDDLEBUTTONUP = 0xE,
  rsMOUSEWHEELMOVEDUP = 0xF,
  rsMOUSEWHEELMOVEDDOWN = 0x10,
  rsFIRST_XBUTTONUP = 0x11,
  rsSECOND_XBUTTONUP = 0x12,
  rsFIRST_XBUTTONDOWN = 0x13,
  rsSECOND_XBUTTONDOWN = 0x14,
  rsRWINITIALIZE = 0x15,
  rsRWTERMINATE = 0x16,
  rsSELECTDEVICE = 0x17,
  rsINITIALIZE = 0x18,
  rsTERMINATE = 0x19,
  rsIDLE = 0x1A,
  rsFRONTENDIDLE = 0x1B,
  rsKEYDOWN = 0x1C,
  rsKEYUP = 0x1D,
  rsQUITAPP = 0x1E,
  rsPADBUTTONDOWN = 0x1F,
  rsPADBUTTONUP = 0x20,
  rsPADANALOGUELEFT = 0x21,
  rsPADANALOGUELEFTRESET = 0x22,
  rsPADANALOGUERIGHT = 0x23,
  rsPADANALOGUERIGHTRESET = 0x24,
  rsPREINITCOMMANDLINE = 0x25,
  rsACTIVATE = 0x26,
  rsSETMEMORYFUNCS = 0x27,
};

enum RsEventStatus : int32_t
{
  rsEVENTERROR = 0x0,
  rsEVENTPROCESSED = 0x1,
  rsEVENTNOTPROCESSED = 0x2,
};

enum RsInputDeviceType : int32_t
{
  rsKEYBOARD = 0x0,
  rsMOUSE = 0x1,
  rsPAD = 0x2,
};

struct RsInputDevice
{
  RsInputDeviceType inputDeviceType;
  bool used;
  int *inputEventHandler;
};

struct psGlobalType
{
    //HWND      window;
    //HINSTANCE instance;
    bool    fullScreen;
    RwV2d     lastMousePos;
    int       lastRenderTime;
    /* there are no such values ​​on Android
    void*     diInterface;
    void*     diMouse;
    void*     diDevice1;
    void*     diDevice2;
    */
};

struct RsGlobalType
{
  const char *appName;
  int32_t screenWidth;
  int32_t screenHeight;
  int32_t maxFPS;
  bool quit;
  psGlobalType* ps;
  RsInputDevice keyboard;
  RsInputDevice mouse;
  RsInputDevice pad;
};

extern RsGlobalType* RsGlobal;