#pragma once

#include "CSphere.h"
#include "ColData.h"

struct CColSphere : CSphere
{
  ColData m_data;
  int8_t undefined; // ??
};
