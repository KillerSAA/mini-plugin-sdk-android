#pragma once 

#include <game_sa/rw/RwLLLink.h>

typedef int RwResEntryDestroyNotify;

struct RwResEntry
{
  RwLLLink link;
  int32_t size;
  void *owner;
  RwResEntry **ownerRef;
  RwResEntryDestroyNotify *destroyNotify;
};

