#ifndef RwTexDictionary_H
#define RwTexDictionary_H

#include <game_sa/rw/RwObject.h>
#include <game_sa/rw/RwLinkList.h>
#include <game_sa/rw/RwLLLink.h>

struct RwTexDictionary
{
  RwObject object;
  RwLinkList texturesInDict;
  RwLLLink lInInstance;
};


#endif