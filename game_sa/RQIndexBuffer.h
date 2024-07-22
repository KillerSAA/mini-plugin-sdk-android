#pragma once

enum RQIndexBufferFormat : int32_t
{
  IBF_16bit = 0x0,
  IBF_8bit = 0x1,
};

struct RQIndexBuffer
{
  int (**_vptr$RQIndexBuffer)(void);
  RQIndexBufferFormat format;
};
