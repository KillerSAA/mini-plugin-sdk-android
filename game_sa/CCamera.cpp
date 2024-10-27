#include <mod/amlmod.h>
#include <game_sa/CCamera.h>
#include <game_sa/sdk.h>

CCamera* TheCamera = (CCamera*)(GetSym("TheCamera"));

bool CCamera::OnCamModeState(eCamMode iMode) {                                   
    int id = TheCamera->m_ActiveCam; // current camera id
    if(TheCamera->Cams[id].Mode == iMode) return true;
    else return false;
}

CVector CCamera::GetPosition() {
    return TheCamera->m_vecGameCamPos;
}

// ........

