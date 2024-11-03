#include <mod/amlmod.h>
#include <game_sa/sdk.h>
#include <sdk/Call.h>
#include "injector.h"
#include "Events.h"


CEvents initGameEvent(initGame);
CEvents initScriptsEvent(initScripts);
CEvents initRwEvent(initRw);
CEvents initPoolsEvent(initPools);

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

DECL_HOOKv(PedRenderHook, CPed* ped) {
    callFuncs(pedRenderEvent.PedPtr, pedRenderEvent.PedEvents, EventPtrPed, ped)
    
    PedRenderHook(ped);
}

DECL_HOOKv(drawingHook) {
    callFuncs(drawingEvent.actPtr, drawingEvent.events, EventPtr, );
    drawingHook();
}

DECL_HOOKv(drawAfterFadeHook) {
    callFuncs(drawAfterFadeEvent.actPtr, drawAfterFadeEvent.events, EventPtr, );
    drawAfterFadeHook();
}

DECL_HOOKv(vehicleRenderHook, CVehicle* veh) {
    callFuncs(vehicleRenderEvent.VehPtr, vehicleRenderEvent.VehEvents, EventPtrVeh, veh);
    vehicleRenderHook(veh);
}

DECL_HOOKp(drawBlipsHook, float size) {
    callFuncs(drawBlipsEvent.blipsPtr, drawBlipsEvent.blipsEvents, EventPtrBlips, size);
    return drawBlipsHook(size);
}

DECL_HOOKv(objectPreRenderHook, CObject* obj) {
    callFuncs(objectPreRenderEvent.ObjPtr, objectPreRenderEvent.ObjEvents, EventPtrObj, obj);
    objectPreRenderHook(obj);
}

DECL_HOOKv(objectRenderHook, CObject* obj) {
    callFuncs(objectRenderEvent.ObjPtr, objectRenderEvent.ObjEvents, EventPtrObj, obj);
    objectRenderHook(obj);
}

DECL_HOOKi(initRwHook) {
    callFuncs(initRwEvent.actPtr, initRwEvent.events, EventPtr, );
    return initRwHook();
}

DECL_HOOKi(initPoolsHook) {
    callFuncs(initPoolsEvent.actPtr, initPoolsEvent.events, EventPtr, );
    return initPoolsHook();
}

DECL_HOOKv(drawMenuHook, void* gMobileMenu) {
    callFuncs(drawMenuEvent.mobMenuPtr, drawMenuEvent.mobMenuEvents, EventPtrMob, gMobileMenu);
    drawMenuHook(gMobileMenu);
}

DECL_HOOKi(drawRadarHook) {
    callFuncs(drawRadarEvent.actPtr, drawRadarEvent.events, EventPtr, );
    return drawRadarHook();
}

DECL_HOOKv(drawRadarOverlayHook, bool inMenu) {
    callFuncs(drawRadarOverlayEvent.radarPtr, drawRadarOverlayEvent.radarEvents, EventPtrRadarOv, inMenu);
    drawRadarOverlayHook(inMenu);
}

DECL_HOOKv(processScriptsHook) {
    callFuncs(processScriptsEvent.actPtr, processScriptsEvent.events, EventPtr, );
    processScriptsHook();
}

DECL_HOOKv(touchHook, NVTouchEventType actionType, int trackNum, int x, int y) {
    callFuncs(touchEvent.TouchPtr, touchEvent.TouchEvents, EventPtrTouch, actionType, trackNum, x, y);
    touchHook(actionType, trackNum, x, y);
}

DECL_HOOKi(initScriptsHook) {
    callFuncs(initScriptsEvent.actPtr, initScriptsEvent.events, EventPtr, );
    return initScriptsHook();
}

DECL_HOOKi(renderCloudsHook) {
    callFuncs(renderCloudsEvent.actPtr, renderCloudsEvent.events, EventPtr, );
    return renderCloudsHook();
}

DECL_HOOKv(pedCtorHook, CPed* ped) {
    callFuncs(pedCtorEvent.PedPtr, pedCtorEvent.PedEvents, EventPtrPed, ped);
    pedCtorHook(ped);
}

DECL_HOOKv(pedDtorHook, CPed* ped) {
    callFuncs(pedDtorEvent.PedPtr, pedDtorEvent.PedEvents, EventPtrPed, ped);
    pedDtorHook(ped);
}

DECL_HOOKv(vehicleCtorHook, CVehicle* veh) {
    callFuncs(vehicleCtorEvent.VehPtr, vehicleCtorEvent.VehEvents, EventPtrVeh, veh);
    vehicleCtorHook(veh);
}

DECL_HOOKv(vehicleDtorHook, CVehicle* veh) {
    callFuncs(vehicleDtorEvent.VehPtr, vehicleDtorEvent.VehEvents, EventPtrVeh, veh);
    vehicleDtorHook(veh);
}

DECL_HOOKv(initGameHook) {
    callFuncs(initGameEvent.actPtr, initGameEvent.events, EventPtr, );
    initGameHook();
}

DECL_HOOKv(objectCtorHook, CObject* obj) {
    callFuncs(objectCtorEvent.ObjPtr, objectCtorEvent.ObjEvents, EventPtrObj, obj);
    objectCtorHook(obj);
}

DECL_HOOKv(objectDtorHook, CObject* obj) {
    callFuncs(objectDtorEvent.ObjPtr, objectDtorEvent.ObjEvents, EventPtrObj, obj);
    objectDtorHook(obj);
}

DECL_HOOKi(updateWidgetsHook, CWidget* w) {
    callFuncs(updateWidgetsEvent.widgetPtr, updateWidgetsEvent.widgetEvents, EventPtrWidget, w);
    return updateWidgetsHook(w);
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
        default:
            break;
    }
}