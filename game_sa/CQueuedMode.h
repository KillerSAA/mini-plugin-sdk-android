#pragma once

struct CQueuedMode
{
  int16_t Mode;
  char undefined[2]; // ??
  float Duration;
  int16_t MinZoom;
  int16_t MaxZoom;
};
