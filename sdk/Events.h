#pragma once 
#include <vector>
#include <game_sa/CPed.h>
#include <game_sa/CObject.h>
#include <game_sa/eNVTouchEventType.h>

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
	initGame // _Z14InitialiseGamev   BLX InitialiseGame(void)
};

using EventPtr = std::function<void()>;
using EventPtrPed = std::function<void(CPed*)>;
using EventPtrObj = std::function<void(CObject*)>;
using EventPtrVeh = std::function<void(CVehicle*)>;
using EventPtrBlips = std::function<void(float)>;
using EventPtrRadarOv = std::function<void(bool)>;
using EventPtrMob = std::function<void(void*)>;
using EventPtrTouch = std::function<void(int, int, int, int)>;

class EventsList {
public:
	std::vector<EventPtr> events; // parameterless events
	std::vector<EventPtrPed> PedEvents;
	std::vector<EventPtrObj> ObjEvents;
	std::vector<EventPtrVeh> VehEvents;
	std::vector<EventPtrBlips> blipsEvents;
	std::vector<EventPtrTouch> TouchEvents;
	std::vector<EventPtrRadarOv> radarEvents;
	std::vector<EventPtrMob> mobMenuEvents;

	std::vector<EventPtr>::iterator actPtr;
	std::vector<EventPtrPed>::iterator PedPtr;
	std::vector<EventPtrObj>::iterator ObjPtr;
	std::vector<EventPtrVeh>::iterator VehPtr;
	std::vector<EventPtrBlips>::iterator blipsPtr;
	std::vector<EventPtrTouch>::iterator TouchPtr;
	std::vector<EventPtrRadarOv>::iterator radarPtr;
	std::vector<EventPtrMob>::iterator mobMenuPtr;
};

class CEvents : EventsList {
public:
	CEvents(EventsType type);

	// arguments
    void operator+=(EventPtr p) {
        events.push_back(p);
    }
	void operator+=(EventPtrPed p) {
		PedEvents.push_back(p);
	}
	void operator+=(EventPtrObj p) {
		ObjEvents.push_back(p);
	}
	void operator+=(EventPtrVeh p) {
		VehEvents.push_back(p);
	}
	void operator+=(EventPtrTouch p) {
		TouchEvents.push_back(p);
	}
	void operator+=(EventPtrBlips p) {
		blipsEvents.push_back(p);
	}

// funcs
	static void initRwCalls();
	static void initPoolsCalls();
	static void initGameCalls();
	static void pedCtorCalls(CPed* ped);
	static void pedDtorCalls(CPed* ped);
	static void pedRenderCalls(CPed* ped);
	static void objectRenderCalls(CObject* obj);
	static void vehicleRenderCalls(CVehicle* veh);
	static void objectPreRenderCalls(CObject* obj);
	static void touchCalls(NVTouchEventType actionType, int trackNum, int x, int y);
	static void drawHudCalls();
	static void drawingCalls();
	static void drawAfterFadeCalls();
	static void drawRadarCalls();
	static void drawBlipsCalls(float size);
	static void drawRadarOverlayCalls(bool inMenu);
	static void drawMenuCalls(void* gMobileMenu);
	static void processScriptsCalls();
	static void initScriptsCalls();
	static void renderCloudsCalls();  
	static void vehicleCtorCalls(CVehicle* veh);
	static void vehicleDtorCalls(CVehicle* veh);
	static void objectCtorCalls(CObject* obj);
	static void objectDtorCalls(CObject* obj);
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

