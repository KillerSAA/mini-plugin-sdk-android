#pragma once

#include "RpMaterial.h"

struct RpMaterialList
{
  RpMaterial **materials;
  int32_t numMaterials;
  int32_t space;
};