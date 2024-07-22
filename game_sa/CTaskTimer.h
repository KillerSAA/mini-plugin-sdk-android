#pragma once

struct CTaskTimer
{
  int m_iStartTime;
  int m_iDuration;
  uint8_t m_bIsActive;
  uint8_t m_bIsStopped;
  char undefined[2];
};
