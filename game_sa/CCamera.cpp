#include <mod/amlmod.h>
#include <game_sa/CCamera.h>
#include <game_sa/sdk.h>

CCamera* TheCamera = (CCamera*)(GetSym("TheCamera"));

bool OnCamModeState(eCamMode iMode) {                                   
    int id = TheCamera->m_ActiveCam; // current camera id
    if(TheCamera->Cams[id].Mode == iMode) return true;
    else return false;
}

// ........

