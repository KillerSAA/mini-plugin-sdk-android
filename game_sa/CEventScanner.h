#pragma once

#include "CScanners.h"
#include "CPedAcquaintanceScanner.h"
#include "CSexyPedScanner.h"
#include "CNearbyFireScanner.h"

struct CEventScanner
{
  int32_t m_startTime;
  CVehiclePotentialCollisionScanner m_vehicleCollisionScanner;
  CObjectPotentialCollisionScanner m_objectCollisionScanner;
  CAttractorScanner m_attractorScanner;
  CPedAcquaintanceScanner m_acquaintanceScanner;
  CSexyPedScanner m_sexyPedScanner;
  CNearbyFireScanner m_fireScanner;
};
