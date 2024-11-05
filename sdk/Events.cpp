#include <mod/amlmod.h>
#include <game_sa/sdk.h>
#include <sdk/Call.h>
#include "Events.h"

///////////// continuation of CEvents from Xmds /////////////

CEvents initGameEvent(initGame);
CEvents initScriptsEvent(initScripts);
CEvents initRwEvent(initRw);
CEvents shutdownRwEvent(shutdownRw); 
CEvents initPoolsEvent(initPools);
CEvents shutdownPoolsEvent(shutdownPools);

CEvents pedCtorEvent(pedCtor);
CEvents pedDtorEvent(pedDtor);
CEvents pedRenderEvent(pedRender);

CEvents objectCtorEvent(objectCtor);
CEvents objectDtorEvent(objectDtor);
CEvents objectRenderEvent(objectRender);
CEvents objectPreRenderEvent(objectPreRender);

CEvents processScriptsEvent(processScripts);
CEvents renderCloudsEvent(renderClouds); 
CEvents touchEvent(touch);

CEvents drawHudEvent(drawHud);
CEvents drawingEvent(drawing);
CEvents drawAfterFadeEvent(drawAfterFade);
CEvents drawRadarEvent(drawRadar);
CEvents drawBlipsEvent(drawBlips);
CEvents drawRadarOverlayEvent(drawRadarOverlay);
CEvents drawMenuEvent(drawMenu);

CEvents vehicleRenderEvent(vehicleRender);
CEvents vehicleCtorEvent(vehicleCtor);
CEvents vehicleDtorEvent(vehicleDtor);

// new events
CEvents updateWidgetsEvent(updateWidgets);

#define callFuncs(_eventPtr, _eventsList, _funcType, ...) for(_eventPtr = _eventsList.begin(); _eventPtr != _eventsList.end(); ++_eventPtr){ _funcType func = *_eventPtr; func(__VA_ARGS__);}

void CEvents::pedRenderCalls(CPed* ped) {
    callFuncs(pedRenderEvent.PedPtr, pedRenderEvent.PedEvents, EventPtrPed, ped)
}

DECL_HOOKv(PedRenderHook, CPed* ped) {
    PedRenderHook(ped);
    CEvents::pedRenderCalls(ped);
}

void CEvents::drawingCalls() {
    callFuncs(drawingEvent.actPtr, drawingEvent.events, EventPtr);
}

DECL_HOOKv(drawingHook) {
    drawingHook();
    CEvents::drawingCalls();
}

void CEvents::drawAfterFadeCalls() {
    callFuncs(drawAfterFadeEvent.actPtr, drawAfterFadeEvent.events, EventPtr);
}

DECL_HOOKv(drawAfterFadeHook) {
    drawAfterFadeHook();
    CEvents::drawAfterFadeCalls();
}

void CEvents::vehicleRenderCalls(CVehicle* veh) {
    callFuncs(vehicleRenderEvent.VehPtr, vehicleRenderEvent.VehEvents, EventPtrVeh, veh);
}

DECL_HOOKv(vehicleRenderHook, CVehicle* veh) {
    vehicleRenderHook(veh);
    CEvents::vehicleRenderCalls(veh);
}

void CEvents::drawBlipsCalls(float size) {
    callFuncs(drawBlipsEvent.blipsPtr, drawBlipsEvent.blipsEvents, EventPtrBlips, size);
}

DECL_HOOKp(drawBlipsHook, float size) {
    void* ret = drawBlipsHook(size);
    CEvents::drawBlipsCalls(size);
    return ret;
}

void CEvents::objectPreRenderCalls(CObject* obj) {
    callFuncs(objectPreRenderEvent.ObjPtr, objectPreRenderEvent.ObjEvents, EventPtrObj, obj);
}

DECL_HOOKv(objectPreRenderHook, CObject* obj) {
    objectPreRenderHook(obj);
    CEvents::objectPreRenderCalls(obj);
}

void CEvents::objectRenderCalls(CObject* obj) {
    callFuncs(objectRenderEvent.ObjPtr, objectRenderEvent.ObjEvents, EventPtrObj, obj);
}

DECL_HOOKv(objectRenderHook, CObject* obj) {
    objectRenderHook(obj);
    CEvents::objectRenderCalls(obj);
}

void CEvents::initRwCalls() {
    callFuncs(initRwEvent.actPtr, initRwEvent.events, EventPtr);
}

DECL_HOOKi(initRwHook) {
    int ret = initRwHook();
    CEvents::initRwCalls();
    return ret;
}

void CEvents::shutdownRwCalls() {
    callFuncs(shutdownRwEvent.actPtr, shutdownRwEvent.events, EventPtr);
}

DECL_HOOKv(shutdownRwHook) {
    CEvents::shutdownRwCalls();
    shutdownRwHook();
}

void CEvents::initPoolsCalls() {
    callFuncs(initPoolsEvent.actPtr, initPoolsEvent.events, EventPtr);
}

DECL_HOOKi(initPoolsHook) {
    int ret = initPoolsHook();
    CEvents::initPoolsCalls();
    return ret;
}

void CEvents::shutdownPoolsCalls() {
    callFuncs(shutdownPoolsEvent.actPtr, shutdownPoolsEvent.events, EventPtr);
}

DECL_HOOKv(shutdownPoolsHook) {
    CEvents::shutdownPoolsCalls();
    shutdownPoolsHook();
}

void CEvents::drawMenuCalls(void* gMobileMenu) {
    callFuncs(drawMenuEvent.mobMenuPtr, drawMenuEvent.mobMenuEvents, EventPtrMob, gMobileMenu);
}

DECL_HOOKv(drawMenuHook, void* gMobileMenu) {
    drawMenuHook(gMobileMenu);
    CEvents::drawMenuCalls(gMobileMenu);
}

void CEvents::drawRadarCalls() {
    callFuncs(drawRadarEvent.actPtr, drawRadarEvent.events, EventPtr);
}

DECL_HOOKi(drawRadarHook) {
    int ret = drawRadarHook();
    CEvents::drawRadarCalls();
    return ret;
}

void CEvents::drawRadarOverlayCalls(bool inMenu) {
    callFuncs(drawRadarOverlayEvent.radarPtr, drawRadarOverlayEvent.radarEvents, EventPtrRadarOv, inMenu);
}

DECL_HOOKv(drawRadarOverlayHook, bool inMenu) {
    drawRadarOverlayHook(inMenu);
    CEvents::drawRadarOverlayCalls(inMenu);
}

void CEvents::processScriptsCalls() {
    callFuncs(processScriptsEvent.actPtr, processScriptsEvent.events, EventPtr);
}

DECL_HOOKv(processScriptsHook) {
    processScriptsHook();
    CEvents::processScriptsCalls();
}

void CEvents::touchCalls(NVTouchEventType actionType, int trackNum, int x, int y) {
    callFuncs(touchEvent.TouchPtr, touchEvent.TouchEvents, EventPtrTouch, actionType, trackNum, x, y);
}

DECL_HOOKv(touchHook, NVTouchEventType actionType, int trackNum, int x, int y) {
    touchHook(actionType, trackNum, x, y);
    CEvents::touchCalls(actionType, trackNum, x, y);
}

void CEvents::initScriptsCalls() {
    callFuncs(initScriptsEvent.actPtr, initScriptsEvent.events, EventPtr);
}

DECL_HOOKi(initScriptsHook) {
    int ret = initScriptsHook();
    CEvents::initScriptsCalls();
    return ret;
}

void CEvents::renderCloudsCalls() {
    callFuncs(renderCloudsEvent.actPtr, renderCloudsEvent.events, EventPtr);
}

DECL_HOOKi(renderCloudsHook) {
    return renderCloudsHook();
    CEvents::renderCloudsCalls();
}

void CEvents::pedCtorCalls(CPed* ped) {
    callFuncs(pedCtorEvent.PedPtr, pedCtorEvent.PedEvents, EventPtrPed, ped);
}

DECL_HOOKv(pedCtorHook, CPed* ped) {
    pedCtorHook(ped);
    CEvents::pedCtorCalls(ped);
}

void CEvents::pedDtorCalls(CPed* ped) {
    callFuncs(pedDtorEvent.PedPtr, pedDtorEvent.PedEvents, EventPtrPed, ped);
}

DECL_HOOKv(pedDtorHook, CPed* ped) {
    CEvents::pedDtorCalls(ped);
    pedDtorHook(ped);
}

void CEvents::vehicleCtorCalls(CVehicle* veh) {
    callFuncs(vehicleCtorEvent.VehPtr, vehicleCtorEvent.VehEvents, EventPtrVeh, veh);
}

DECL_HOOKv(vehicleCtorHook, CVehicle* veh) {
    vehicleCtorHook(veh);
    CEvents::vehicleCtorCalls(veh);
}

void CEvents::vehicleDtorCalls(CVehicle* veh) {
    callFuncs(vehicleDtorEvent.VehPtr, vehicleDtorEvent.VehEvents, EventPtrVeh, veh);
}

DECL_HOOKv(vehicleDtorHook, CVehicle* veh) {
    CEvents::vehicleDtorCalls(veh);
    vehicleDtorHook(veh);
}

void CEvents::initGameCalls() {
    callFuncs(initGameEvent.actPtr, initGameEvent.events, EventPtr);
}

DECL_HOOKv(initGameHook) {
    initGameHook();
    CEvents::initGameCalls();
}

void CEvents::objectCtorCalls(CObject* obj) {
    callFuncs(objectCtorEvent.ObjPtr, objectCtorEvent.ObjEvents, EventPtrObj, obj);
}

DECL_HOOKv(objectCtorHook, CObject* obj) {
    objectCtorHook(obj);
    CEvents::objectCtorCalls(obj);
}

void CEvents::objectDtorCalls(CObject* obj) {
    callFuncs(objectDtorEvent.ObjPtr, objectDtorEvent.ObjEvents, EventPtrObj, obj);
}

DECL_HOOKv(objectDtorHook, CObject* obj) {
    CEvents::objectDtorCalls(obj);
    objectDtorHook(obj);
}

void CEvents::updateWidgetCalls(CWidget* w) {
    callFuncs(updateWidgetsEvent.widgetPtr, updateWidgetsEvent.widgetEvents, EventPtrWidget, w);
}

DECL_HOOKi(updateWidgetsHook, CWidget* w) {
    int ret = updateWidgetsHook(w);
    CEvents::updateWidgetCalls(w);
    return ret;
}

CEvents::CEvents(EventsType type) {
    eventType = type;
    switch(type){
        case updateWidgets:
            HOOKPLT(updateWidgetsHook, 0x66FBCC + libs.pGame);
            break;
        case initGame:
            HOOKBLX(initGameHook, GetSym("_Z11DoGameStatev") + 0x226);
            break;
        case drawBlips:
            HOOKPLT(drawBlipsHook, 0x66E910 + libs.pGame);
            break;
        case initPools:
            HOOKPLT(initPoolsHook, 0x672468 + libs.pGame);
            break;
        case shutdownPools:
            HOOKBLX(shutdownPoolsHook, GetSym("_ZN5CGame8ShutdownEv") + 0x15C);
            break;
        case initRw:
            HOOKPLT(initRwHook, 0x66F2D0 + libs.pGame);
            break;
        case objectPreRender:
            HOOKBLX(objectPreRenderHook, GetSym("_ZN7CObject9PreRenderEv") + 0x1B0);
            break;
        case objectRender:
            HOOKBLX(objectRenderHook, GetSym("_ZN7CObject6RenderEv") + 0x6A);
            break;
        case objectCtor:
            HOOKBLX(objectCtorHook, GetSym("_ZN7CObjectC2Ev") + 0x6);
            HOOKBLX(objectCtorHook, GetSym("_ZN7CObjectC2Eib") + 0xE);
            HOOKBLX(objectCtorHook, GetSym("_ZN7CObjectC2EP12CDummyObject") + 0xC);
            HOOKBLX(objectCtorHook, GetSym("_ZN7CObject6CreateEib") + 0x62);
            HOOKBLX(objectCtorHook, GetSym("_ZN7CObject6CreateEib") + 0x158);
            break;
        case objectDtor:
            HOOKB(objectDtorHook, GetSym("_ZN7CObjectD2Ev") + 0x198);
            break;
        case drawMenu:
            HOOKPLT(drawMenuHook, 0x674254 + libs.pGame);
            break;
        case drawRadar:
            HOOKPLT(drawRadarHook, 0x66F618 + libs.pGame);
            break;
        case drawRadarOverlay:
            HOOKPLT(drawRadarOverlayHook, 0x67196C + libs.pGame);
            break;
        case touch:
            HOOKPLT(touchHook, 0x675DE4 + libs.pGame);
            break;
        case initScripts:
            HOOKPLT(initScriptsHook, 0x671B14 + libs.pGame);
            break;
        case renderClouds:
            HOOKPLT(renderCloudsHook, 0x672FFC + libs.pGame);
            break;
        case vehicleRender:
            HOOKB(vehicleRenderHook, GetSym("_ZN8CVehicle6RenderEv") + 0xE6);
            break;
        case vehicleCtor:
            HOOKBLX(vehicleCtorHook, GetSym("_ZN8CVehicleC2Eh") + 0xC);
            break;
        case vehicleDtor:
            HOOKB(vehicleDtorHook, GetSym("_ZN8CVehicleD2Ev") + 0x20C);
            break;
        case processScripts:
            HOOKPLT(processScriptsHook, 0x672AAC + libs.pGame);
            break;
        case pedCtor:
            HOOKBLX(pedCtorHook, GetSym("_ZN4CPedC2Ej") + 0x12);
            break;
        case pedDtor:
            HOOKB(pedDtorHook, GetSym("_ZN4CPedD2Ev") + 0x156);
            break;
        case pedRender:
            HOOKBLX(PedRenderHook, GetSym("_ZN4CPed6RenderEv") + 0xBE);
            break;
        case drawing:   
            HOOKBLX(drawingHook, GetSym("_Z13Render2dStuffv") + 0x48);
            break;
        case drawAfterFade:
            HOOKPLT(drawAfterFadeHook, 0x673C4C + libs.pGame);
            break;    
        case shutdownRw:
            HOOKBLX(shutdownRwHook, GetSym("_Z15AppEventHandler7RsEventPv") + 0x94);
            break;
        default:
            break;
    }
}