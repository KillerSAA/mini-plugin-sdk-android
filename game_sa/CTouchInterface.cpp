#include <mod/amlmod.h>
#include <sdk/Call.h>
#include <game_sa/sdk.h>

#include "CTouchInterface.h"

int &CTouchInterface::m_nMaxTouches = *(int*)GetSym("_ZN15CTouchInterface13m_nMaxTouchesE");
const char* CTouchInterface::m_pszWidgetPositionNames = (const char*)GetSym("_ZN15CTouchInterface24m_pszWidgetPositionNamesE");
CWidget** CTouchInterface::m_pWidgets = (CWidget**)GetSym("_ZN15CTouchInterface10m_pWidgetsE");
WidgetPosition* CTouchInterface::m_WidgetPosition = (WidgetPosition*)GetSym("_ZN15CTouchInterface16m_WidgetPositionE");
bool &CTouchInterface::m_bPinchZoom = *(bool*)GetSym("_ZN15CTouchInterface12m_bPinchZoomE");
bool &CTouchInterface::m_bTouchDown = *(bool*)GetSym("_ZN15CTouchInterface12m_bTouchDownE");
CVector2D* CTouchInterface::m_vecCachedPos = (CVector2D*)GetSym("_ZN15CTouchInterface14m_vecCachedPosE");
CVector2D* CTouchInterface::m_vecCachedDelta = (CVector2D*)GetSym("_ZN15CTouchInterface16m_vecCachedDeltaE");
unsigned char* CTouchInterface::m_pszWidgetTextures = (unsigned char*)GetSym("_ZN15CTouchInterface19m_pszWidgetTexturesE");

// functions //
// ........
