#ifndef RwMatrix_H
#define RwMatrix_H

#include <game_sa/rw/RwVectors.h>

struct RwMatrix
{
  RwV3d right;
  uint32_t flags;
  RwV3d up;
  uint32_t pad1;
  RwV3d at;
  uint32_t pad2;
  RwV3d pos;
  uint32_t pad3;
};

#endif