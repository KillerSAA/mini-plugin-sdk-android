#pragma once 

#include "MenuScreen.h"

struct OSArray_MenuScreen // incorrect name? (original: "OSArray<MenuScreen *>")
{
  unsigned int numAlloced;
  unsigned int numEntries;
  MenuScreen **dataPtr;
};
