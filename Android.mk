LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_CPP_EXTENSION := .cpp .cc
LOCAL_MODULE    := SDK
LOCAL_SRC_FILES := main.cpp sdk/sdk.cpp mod/logger.cpp mod/config.cpp sdk/Events.cpp

LOCAL_STATIC_LIBRARIES := libGlossHook
FILE_LIST := $(wildcard $(LOCAL_PATH)/game_sa/*.cpp)
LOCAL_SRC_FILES += $(patsubst $(LOCAL_PATH)/%, %, $(FILE_LIST))
LOCAL_CFLAGS += -O2 -mfloat-abi=softfp -DNDEBUG -std=c++17

LOCAL_LDLIBS += -llog
include $(BUILD_SHARED_LIBRARY)
