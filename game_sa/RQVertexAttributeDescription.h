#pragma once

#include "eRQVertexAttributeFormat.h"

struct RQVertexAttributeDescription
{
  bool enabled;
  bool normalized;
  unsigned int count;
  unsigned int stride;
  unsigned int offset;
  RQVertexAttributeFormat format;
};