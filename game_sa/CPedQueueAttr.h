#pragma once 

#include <game_sa/rw/RwVectors.h>

struct CPedQueueAttr
{
  RwV3d m_queueDir;
  RwV3d m_useDir;
  RwV3d m_forwardDir;
  uint8_t m_type;
  uint8_t m_interest;
  uint8_t m_lookAt;
  uint8_t m_flags;
  char m_scriptName[8];
};