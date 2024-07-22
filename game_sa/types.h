#pragma once

// oh jesus... bruh ida moment
#define Uint32 uint32_t
#define uint32 uint32_t
#define UInt32 uint32_t

#define Uint16 uint16_t
#define UInt16 uint16_t

#define uint8 int8_t 
#define UInt8 int8_t  

#define int32 int32_t

#define int16 int16_t
#define Int16 int16_t

//// defining types //// 

// Rx //
typedef int RxNodeBodyFn; 
typedef int RxNodeInitFn;
typedef int RxNodeTermFn;

typedef int RxPipelineNodeInitFn;
typedef int RxPipelineNodeTermFn;
typedef int RxPipelineNodeConfigFn;
typedef int RxConfigMsgHandlerFn;

// Rw vars //      I didn't use this in the structs, it's not necessary
typedef int RwInt32;
typedef unsigned int RwUInt32;
typedef char RwChar;
typedef bool RwBool;
typedef int32_t u_native;

// Rw //
typedef int RpClumpCallBack;
typedef int RpAtomicCallBackRender;

// GL //
typedef unsigned int GLenum;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef bool GLboolean;
