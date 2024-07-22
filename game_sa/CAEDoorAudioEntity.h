#pragma once

#include <game_sa/CAEAudioEntity.h>

struct CAEDoorAudioEntity : CAEAudioEntity
{
  uint32_t m_nLastGarageDoorEventTimeMs;
  uint32_t m_nLastEntryExitDoorEventTimeMs;
  float m_fDoorTurnSpeedLastFrame;
};
