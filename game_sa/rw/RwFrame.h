#ifndef RwFrame_H
#define RwFrame_H

#include <game_sa/rw/RwObject.h>
#include <game_sa/rw/RwLLLink.h>
#include <game_sa/rw/RwMatrix.h>
#include <game_sa/rw/RwLinkList.h>

struct RwFrame
{
  RwObject object;
  RwLLLink inDirtyListLink;
  RwMatrix modelling;
  RwMatrix ltm;
  RwLinkList objectList;
  RwFrame *child;
  RwFrame *next;
  RwFrame *root;
};

#endif