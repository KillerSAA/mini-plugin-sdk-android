#pragma once

enum HIDMapping : int32_t
{
  HID_MAPPING_UNKNOWN = 0x0,
  HID_MAPPING_ATTACK = 0x1,
  HID_MAPPING_SPRINT = 0x2,
  HID_MAPPING_JUMP = 0x3,
  HID_MAPPING_CROUCH = 0x4,
  HID_MAPPING_ENTER_CAR = 0x5,
  HID_MAPPING_BRAKE = 0x6,
  HID_MAPPING_HANDBRAKE = 0x7,
  HID_MAPPING_ACCELERATE = 0x8,
  HID_MAPPING_CAMERA_CLOSER = 0x9,
  HID_MAPPING_CAMERA_FARTHER = 0xA,
  HID_MAPPING_HORN = 0xB,
  HID_MAPPING_RADIO_PREV_STATION = 0xC,
  HID_MAPPING_RADIO_NEXT_STATION = 0xD,
  HID_MAPPING_VITAL_STATS = 0xE,
  HID_MAPPING_NEXT_WEAPON = 0xF,
  HID_MAPPING_PREV_WEAPON = 0x10,
  HID_MAPPING_RADAR = 0x11,
  HID_MAPPING_PED_LOOK_BACK = 0x12,
  HID_MAPPING_VEHICLE_LOOK_LEFT = 0x13,
  HID_MAPPING_VEHICLE_LOOK_RIGHT = 0x14,
  HID_MAPPING_VEHICLE_LOOK_BACK = 0x15,
  HID_MAPPING_MISSION_START_AND_CANCEL = 0x16,
  HID_MAPPING_MISSION_START_AND_CANCEL_VIGILANTE = 0x17,
  HID_MAPPING_VEHICLE_STEER_X = 0x18,
  HID_MAPPING_VEHICLE_STEER_Y = 0x19,
  HID_MAPPING_VEHICLE_STEER_LEFT = 0x1A,
  HID_MAPPING_VEHICLE_STEER_RIGHT = 0x1B,
  HID_MAPPING_LOOK_X = 0x1C,
  HID_MAPPING_LOOK_Y = 0x1D,
  HID_MAPPING_PED_MOVE_X = 0x1E,
  HID_MAPPING_PED_MOVE_Y = 0x1F,
  HID_MAPPING_AUTO_HYDRAULICS = 0x20,
  HID_MAPPING_SWAP_WEAPONS_AND_PURCHASE = 0x21,
  HID_MAPPING_WEAPON_ZOOM_IN = 0x22,
  HID_MAPPING_WEAPON_ZOOM_OUT = 0x23,
  HID_MAPPING_ENTER_AND_EXIT_TARGETING = 0x24,
  HID_MAPPING_VEHICLE_BOMB = 0x25,
  HID_MAPPING_TURRET_LEFT = 0x26,
  HID_MAPPING_TURRET_RIGHT = 0x27,
  HID_MAPPING_MAGNET = 0x28,
  HID_MAPPING_SKIP_CUTSCENE = 0x29,
  HID_MAPPING_GANG_RECRUIT = 0x2A,
  HID_MAPPING_GANG_IGNORE = 0x2B,
  HID_MAPPING_GANG_FOLLOW = 0x2C,
  HID_MAPPING_GANG_HOLD_POSITION = 0x2D,
  HID_MAPPING_RHYTHM_UP = 0x2E,
  HID_MAPPING_RHYTHM_DOWN = 0x2F,
  HID_MAPPING_RHYTHM_LEFT = 0x30,
  HID_MAPPING_RHYTHM_RIGHT = 0x31,
  HID_MAPPING_DROP_CRANE = 0x32,
  HID_MAPPING_DROP_ITEM = 0x33,
  HID_MAPPING_PHONE = 0x34,
  HID_MAPPING_NITRO = 0x35,
  HID_MAPPING_CRANE_UP = 0x36,
  HID_MAPPING_CRANE_DOWN = 0x37,
  HID_MAPPING_ACCEPT = 0x38,
  HID_MAPPING_CANCEL = 0x39,
  HID_MAPPING_GRAB = 0x3A,
  HID_MAPPING_STINGER = 0x3B,
  HID_MAPPING_MENU_DOWN = 0x3C,
  HID_MAPPING_MENU_UP = 0x3D,
  HID_MAPPING_MENU_LEFT = 0x3E,
  HID_MAPPING_MENU_RIGHT = 0x3F,
  HID_MAPPING_MENU_ACCEPT = 0x40,
  HID_MAPPING_MENU_BACK = 0x41,
  HID_MAPPING_MENU_MAP = 0x42,
  HID_MAPPING_ARCADE_BUTTON = 0x43,
  HID_MAPPING_ARCADE_POWER_OFF = 0x44,
  HID_MAPPING_ARCADE_RESET = 0x45,
  HID_MAPPING_ARCADE_JOYSTICK = 0x46,
  HID_MAPPING_GYM_ACTION = 0x47,
  HID_MAPPING_GYM_EASIER_LEVEL = 0x48,
  HID_MAPPING_GYM_HARDER_LEVEL = 0x49,
  HID_MAPPING_BLACK_JACK_SPLIT = 0x4A,
  HID_MAPPING_BLACK_JACK_DOUBLE = 0x4B,
  HID_MAPPING_BLACK_JACK_HIT = 0x4C,
  HID_MAPPING_BLACK_JACK_STAND = 0x4D,
  HID_MAPPING_PLACE_BET = 0x4E,
  HID_MAPPING_REMOVE_BET = 0x4F,
  HID_MAPPING_NEXT_TARGET = 0x50,
  HID_MAPPING_PREV_TARGET = 0x51,
  HID_MAPPING_WAYPOINT_BLIP = 0x52,
  HID_MAPPING_HELICOPTER_MAGNET_UP = 0x53,
  HID_MAPPING_HELICOPTER_MAGNET_DOWN = 0x54,
  HID_MAPPING_LOCK_HYDRAULICS = 0x55,
  HID_MAPPING_FLIGHT_ASCEND = 0x56,
  HID_MAPPING_FLIGHT_DESCEND = 0x57,
  HID_MAPPING_FLIGHT_PRIMARY_ATTACK = 0x58,
  HID_MAPPING_FLIGHT_SECONDARY_ATTACK = 0x59,
  HID_MAPPING_FLIGHT_ALT_LEFT = 0x5A,
  HID_MAPPING_FLIGHT_ALT_RIGHT = 0x5B,
  HID_MAPPING_FLIGHT_ALT_UP = 0x5C,
  HID_MAPPING_FLIGHT_ALT_DOWN = 0x5D,
  HID_MAPPING_BASKETBALL_SHOOT = 0x5E,
  HID_MAPPING_BUNNY_HOP = 0x5F,
  HID_MAPPING_MAP_ZOOM_IN = 0x60,
  HID_MAPPING_MAP_ZOOM_OUT = 0x61,
  HID_MAPPING_ALT_ATTACK = 0x62,
  HID_MAPPING_BLOCK = 0x63,
  HID_MAPPING_TAKE_COVER_LEFT = 0x64,
  HID_MAPPING_TAKE_COVER_RIGHT = 0x65,
  HID_MAPPING_TOGGLE_LANDING_GEAR = 0x66,
  HID_MAPPING_KISS = 0x67,
  HID_MAPPING_DANCING_UP = 0x68,
  HID_MAPPING_DANCING_DOWN = 0x69,
  HID_MAPPING_DANCING_LEFT = 0x6A,
  HID_MAPPING_DANCING_RIGHT = 0x6B,
  HID_MAPPING_REPLAY = 0x6C,
  NUM_HID_MAPPINGS = 0x6D,
};