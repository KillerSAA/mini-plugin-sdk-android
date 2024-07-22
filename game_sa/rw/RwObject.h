#ifndef RwObject_H
#define RwObject_H

#include <game_sa/rw/RwLLLink.h>

struct RwObject
{
  int8_t type;
  int8_t subType;
  int8_t flags;
  int8_t privateFlags;
  void *parent;
};

struct RwObjectHasFrame
{
  RwObject object;
  RwLLLink lFrame;
  uintptr_t sync; // offset?
};
#endif