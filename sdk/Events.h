#pragma once 
#include <variant>
#include <game_sa/CPed.h>
#include <game_sa/CObject.h>
#include <game_sa/eNVTouchEventType.h>
#include <game_sa/CWidget.h>

#include "EventsList.h"

enum EventsType {
	drawHud, //_ZN4CHud4DrawEv
	drawing, //_ZN9CPopCycle7DisplayEv
	drawAfterFade, //_ZN4CHud13DrawAfterFadeEv
	drawRadar, //_ZN4CHud9DrawRadarEv
	drawBlips, //_ZN6CRadar9DrawBlipsEf
	drawRadarOverlay, //_ZN6CRadar20DrawRadarGangOverlayEb
	drawMenu, //_ZN10MobileMenu6RenderEv

	initRw, //_ZN5CGame20InitialiseRenderWareEv
	initPools, //_ZN6CPools10InitialiseEv
	pedCtor, //_ZN4CPedC2Ej                       BLX CPhysical::CPhysical(void)
	pedDtor, //_ZN4CPedD2Ev                       B.W CPhysical::~CPhysical
	pedRender, //_ZN4CPed6RenderEv                BLX CEntity::Render(void)
	objectRender, // _ZN7CObject6RenderEv         BLX CEntity::Render(void)
	objectPreRender, // _ZN7CObject9PreRenderEv   BLX CEntity::PreRender(void)
	objectCtor,
	objectDtor,
	vehicleRender, // _ZN8CVehicle6RenderEv       B.W CEntity::Render(void)
	vehicleCtor,
	vehicleDtor,
	touch, //_Z14AND_TouchEventiiii
	processScripts, // _ZN7CCranes12UpdateCranesEv
	initScripts, // _ZN11CTheScripts4InitEv
	renderClouds, // _ZN7CClouds6RenderEv
	initGame, // _Z14InitialiseGamev   BLX InitialiseGame(void)
   
	updateWidgets 
};

using EventArgs = std::variant<
    std::function<void()>,
    std::function<void(CPed*)>,
    std::function<void(CObject*)>,
    std::function<void(CVehicle*)>,
    std::function<void(float)>,
    std::function<void(bool)>,
    std::function<void(int, int, int, int)>,
    std::function<void(CWidget*)>,
    std::function<void(void*)>
>;

class CEvents : public EventsList {
public:
	CEvents(EventsType type);

	EventsType eventType;

	// arguments
    void operator+=(EventPtr p) {
        events.push_back(p);
    }


};


extern CEvents renderCloudsEvent;
extern CEvents initScriptsEvent;
extern CEvents processScriptsEvent;
extern CEvents initRwEvent;
extern CEvents initPoolsEvent;
extern CEvents pedCtorEvent;
extern CEvents pedDtorEvent;
extern CEvents pedRenderEvent;
extern CEvents objectRenderEvent;
extern CEvents objectPreRenderEvent;
extern CEvents touchEvent;
extern CEvents drawHudEvent;
extern CEvents drawingEvent;
extern CEvents drawAfterFadeEvent;
extern CEvents drawRadarEvent;
extern CEvents drawBlipsEvent;
extern CEvents drawRadarOverlayEvent;
extern CEvents drawMenuEvent;
extern CEvents vehicleRenderEvent;
extern CEvents vehicleCtorEvent;
extern CEvents vehicleDtorEvent;
extern CEvents objectCtorEvent;
extern CEvents objectDtorEvent;
extern CEvents initGameEvent;

// new events
extern CEvents updateWidgetsEvent;
