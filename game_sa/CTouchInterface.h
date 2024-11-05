#pragma once

#include "CRect.h"
#include "CWidget.h"
#include "CVector.h"

struct CTouchInterface {

    

    static int &m_nMaxTouches;
    static const char* m_pszWidgetPositionNames; //m_pszWidgetPositionNames[138]
    static CWidget **m_pWidgets; // [190]
    static WidgetPosition *m_WidgetPosition; // [138]
    static bool &m_bPinchZoom;
    static bool &m_bTouchDown; // [4]
    static CVector2D *m_vecCachedPos; // [4]
    static CVector2D *m_vecCachedDelta;  // [4]
    static unsigned char *m_pszWidgetTextures; // [128]

    // funcs //
    

    // statics // 
    static void LoadDefaultConfigFile();
    static void LoadFromFile();
    // ....
};
