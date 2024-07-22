#include <mod/amlmod.h>
#include <game_sa/sdk.h>

#include "CRadar.h"
#include "CRGBA.h"

// values //
float &CRadar::m_radarRange = *(float*)GetSym("_ZN6CRadar12m_radarRangeE");
unsigned short *CRadar::MapLegendList = (unsigned short*)GetSym("_ZN6CRadar13MapLegendListE");
unsigned short &CRadar::MapLegendCounter = *(unsigned short*)GetSym("_ZN6CRadar16MapLegendCounterE");
CRGBA *CRadar::ArrowBlipColour = (CRGBA*)GetSym("_ZN6CRadar15ArrowBlipColourE");
sRadarTrace *CRadar::ms_RadarTrace = (sRadarTrace*)GetSym("_ZN6CRadar13ms_RadarTraceE");
CVector2D &CRadar::vec2DRadarOrigin = *(CVector2D*)GetSym("_ZN6CRadar16vec2DRadarOriginE");
CSprite2d *CRadar::RadarBlipSprites = (CSprite2d*)GetSym("_ZN6CRadar16RadarBlipSpritesE");
CRect &CRadar::m_radarRect = *(CRect*)GetSym("_ZN6CRadar11m_radarRectE");
unsigned char &CRadar::airstrip_location = *(unsigned char*)GetSym("_ZN6CRadar17airstrip_locationE");
int &CRadar::airstrip_blip = *(int*)GetSym("_ZN6CRadar13airstrip_blipE");
airstrip_info *airstrip_table = (airstrip_info*)GetSym("airstrip_table");
int *gRadarTextures = (int*)GetSym("gRadarTextures");

// functions //
// I will do it later