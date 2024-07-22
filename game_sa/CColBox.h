#pragma once

#include "CBox.h"
#include "ColData.h"

struct CColBox : CBox
{
  ColData m_data;
  int8_t undefined; // ??
};
