#pragma once
/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CVector.h"
#include "CRGBA.h"
#include "CRect.h"
#include "CSprite2d.h"
#include "CEntryExit.h"

// Thanks to Wesser for radar-related things
enum eBlipAppearance {
    BLIP_FLAG_FRIEND, // It selects BLIP_COLOUR_BLUE. If unset toghether with BLIP_FLAG_THREAT, any color.
    BLIP_FLAG_THREAT  // It selects BLIP_COLOUR_RED. If unset toghether with BLIP_FLAG_FRIEND, any color.
};

enum eBlipType {
    BLIP_NONE,          // 0
    BLIP_CAR,           // 1
    BLIP_CHAR,          // 2
    BLIP_OBJECT,        // 3
    BLIP_COORD,         // 4 - Checkpoint.
    BLIP_CONTACTPOINT,  // 5 - Sphere.
    BLIP_SPOTLIGHT,     // 6
    BLIP_PICKUP,        // 7
    BLIP_AIRSTRIP       // 8
};

enum eBlipDisplay {
    BLIP_DISPLAY_NEITHER,    // 0
    BLIP_DISPLAY_MARKER_ONLY, // 1
    BLIP_DISPLAY_BLIP_ONLY,   // 2
    BLIP_DISPLAY_BOTH        // 3
};

// See <https://www.dropbox.com/s/oi3i4f0qsbe7z10/blip_marker_colors.html> to view these colors.
enum eBlipColour {
    BLIP_COLOUR_RED,        // 0
    BLIP_COLOUR_GREEN,      // 1
    BLIP_COLOUR_BLUE,       // 2
    BLIP_COLOUR_WHITE,      // 3
    BLIP_COLOUR_YELLOW,     // 4
    BLIP_COLOUR_REDCOPY,    // 5 - What? It was BLIP_COLOUR_PURPLE.
    BLIP_COLOUR_BLUECOPY,   // 6 - Why? It was BLIP_COLOUR_CYAN.
    BLIP_COLOUR_THREAT,     // 7 - If BLIP_FLAG_FRIENDLY is not set (by default) it is BLIP_COLOUR_RED, else BLIP_COLOUR_BLUE.
    BLIP_COLOUR_DESTINATION // 8 - Default color.
};

enum eRadarSprite {
    RADAR_SPRITE_NONE,          // 0
    RADAR_SPRITE_WHITE,         // 1
    RADAR_SPRITE_CENTRE,        // 2
    RADAR_SPRITE_MAP_HERE,      // 3
    RADAR_SPRITE_NORTH,         // 4
    RADAR_SPRITE_AIRYARD,       // 5
    RADAR_SPRITE_AMMUGUN,       // 6
    RADAR_SPRITE_BARBERS,       // 7
    RADAR_SPRITE_BIGSMOKE,      // 8
    RADAR_SPRITE_BOATYARD,      // 9
    RADAR_SPRITE_BURGERSHOT,    // 10
    RADAR_SPRITE_BULLDOZER,     // 11
    RADAR_SPRITE_CATALINAPINK,  // 12
    RADAR_SPRITE_CESARVIAPANDO, // 13 - What? R* mistype?
    RADAR_SPRITE_CHICKEN,       // 14
    RADAR_SPRITE_CJ,            // 15
    RADAR_SPRITE_CRASH1,        // 16
    RADAR_SPRITE_DINER,         // 17 - Yet another one?
    RADAR_SPRITE_EMMETGUN,      // 18
    RADAR_SPRITE_ENEMYATTACK,   // 19
    RADAR_SPRITE_FIRE,          // 20
    RADAR_SPRITE_GIRLFRIEND,    // 21
    RADAR_SPRITE_HOSTPITAL,     // 22 - Again?
    RADAR_SPRITE_LOGOSYNDICATE, // 23
    RADAR_SPRITE_MADDOG,        // 24
    RADAR_SPRITE_MAFIACASINO,   // 25
    RADAR_SPRITE_MCSTRAP,       // 26
    RADAR_SPRITE_MODGARAGE,     // 27
    RADAR_SPRITE_OGLOC,         // 28
    RADAR_SPRITE_PIZZA,         // 29
    RADAR_SPRITE_POLICE,        // 30
    RADAR_SPRITE_PROPERTYG,     // 31
    RADAR_SPRITE_PROPERTYR,     // 32
    RADAR_SPRITE_RACE,          // 33
    RADAR_SPRITE_RYDER,         // 34
    RADAR_SPRITE_SAVEGAME,      // 35
    RADAR_SPRITE_SCHOOL,        // 36
    RADAR_SPRITE_QMARK,         // 37
    RADAR_SPRITE_SWEET,         // 38
    RADAR_SPRITE_TATTOO,        // 39
    RADAR_SPRITE_THETRUTH,      // 40
    RADAR_SPRITE_WAYPOINT,      // 41
    RADAR_SPRITE_TORENORANCH,   // 42
    RADAR_SPRITE_TRIADS,        // 43
    RADAR_SPRITE_TRIADSCASINO,  // 44
    RADAR_SPRITE_TSHIRT,        // 45
    RADAR_SPRITE_WOOZIE,        // 46
    RADAR_SPRITE_ZERO,          // 47
    RADAR_SPRITE_DATEDISCO,     // 48
    RADAR_SPRITE_DATEDRINK,     // 49
    RADAR_SPRITE_DATEFOOD,      // 50
    RADAR_SPRITE_TRUCK,         // 51
    RADAR_SPRITE_CASH,          // 52
    RADAR_SPRITE_FLAG,          // 53
    RADAR_SPRITE_GYM,           // 54
    RADAR_SPRITE_IMPOUND,       // 55
    RADAR_SPRITE_LIGHT,         // 56
    RADAR_SPRITE_RUNWAY,        // 57
    RADAR_SPRITE_GANGB,         // 58
    RADAR_SPRITE_GANGP,         // 59
    RADAR_SPRITE_GANGY,         // 60
    RADAR_SPRITE_GANGN,         // 61
    RADAR_SPRITE_GANGG,         // 62
    RADAR_SPRITE_SPRAY,/*,       // 63
    RADAR_SPRITE_TORENO*/       // 64
    RADAR_SPRITE_COUNT,
};

enum eRadarTraceHeight {
    RADAR_TRACE_LOW,
    RADAR_TRACE_HIGH,
    RADAR_TRACE_NORMAL
};

struct sRadarTrace
{
  uint32_t nColour;
  int32_t PoolIndex;
  CVector position;
  uint16_t ReferenceIndex;
  char undefined[2]; // ??
  float fBlipMarkerScale;
  int16_t nBlipScale;
  char undefined1[2]; // ??
  CEntryExit *pEntryExit;
  int8_t nBlipSprite;
  uint8_t bBright : 1;
  uint8_t bTrackingBlip : 1;
  uint8_t bShortRange : 1;
  uint8_t bFriendly : 1;
  uint8_t bBlipRemain : 1;
  uint8_t bBlipFade : 1;
  uint8_t nCoordBlipAppearance : 2;
  uint8_t nBlipDisplayFlag : 2;
  uint8_t BlipType : 4;
  int8_t undefined2; // ??
};

struct tBlipHandle {
    unsigned short arrayIndex;
    unsigned short number;
};

struct airstrip_info {
    float x;
    float y;
    float direction; // angle
    float length; 
};

struct CRadar {
    //static float &cachedCos;
    //static float &cachedSin; these values ​​do not exist on Android
    //static float &m_fRadarOrientation;

    // 2990.0 by default
    static float &m_radarRange;
    // static unsigned short MapLegendList[250];
    static unsigned short *MapLegendList;
    // num icons in legend
    static unsigned short &MapLegendCounter;
    // static CRGBA ArrowBlipColours[6];
    static CRGBA *ArrowBlipColour;
    // static tRadarTrace ms_RadarTrace[250];
    static sRadarTrace *ms_RadarTrace;
    // static CVector2D vec2DRadarOrigin;
    static CVector2D &vec2DRadarOrigin;
    // static CSprite2d RadarBlipSprites[64];
    static CSprite2d *RadarBlipSprites;
    // 
    static CRect &m_radarRect;
    // current airstrip index in airstrip_table
    static unsigned char &airstrip_location;
    // blip handle
    static int &airstrip_blip;
};