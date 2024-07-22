#pragma once

struct RwReqEntry;

struct RwScopeTrace
{
  RwReqEntry *head;
  RwScopeTrace *continuation;
  RwScopeTrace *next;
  RwScopeTrace *parent;
};