#pragma once

struct CDoor
{
  float m_fOpenAngle;
  float m_fClosedAngle;
  uint16_t m_nDirn;
  uint8_t m_nAxis;
  uint8_t m_nDoorState;
  float m_fAngle;
  float m_fPrevAngle;
  float m_fAngVel;
};
