#pragma once

enum RsInputDeviceType
{
  rsKEYBOARD = 0x0,
  rsMOUSE = 0x1,
  rsPAD = 0x2,
};

struct RsInputDevice
{
  int inputDeviceType;
  bool used;
  int *inputEventHandler;
};

struct RsGlobalType
{
  const char *appName;
  int32_t screenWidth;
  int32_t screenHeight;
  int32_t maxFPS;
  bool quit;
  void *ps;
  RsInputDevice keyboard;
  RsInputDevice mouse;
  RsInputDevice pad;
};

extern RsGlobalType* RsGlobal;