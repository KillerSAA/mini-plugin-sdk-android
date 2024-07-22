#ifndef RwCamera_H
#define RwCamera_H

#include <game_sa/rw/RwMatrix.h>
#include <game_sa/rw/RwVectors.h>
#include <game_sa/rw/RwRaster.h>
#include <game_sa/rw/RwObject.h>
#include <game_sa/rw/RwFrustumPlane.h>
#include <game_sa/rw/RwBBox.h>

typedef uint32_t RwCameraBeginUpdateFunc; // unsigned or signed??
typedef uint32_t RwCameraEndUpdateFunc; // unsigned or signed??

enum RwCameraProjection : int32_t
{
  rwNACAMERAPROJECTION = 0x0,
  rwPERSPECTIVE = 0x1,
  rwPARALLEL = 0x2,
  rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7FFFFFFF,
};

struct RwCamera
{
  RwObjectHasFrame object;
  RwCameraProjection projectionType;
  RwCameraBeginUpdateFunc beginUpdate; 
  RwCameraEndUpdateFunc endUpdate; 
  RwMatrix viewMatrix;
  RwRaster *frameBuffer;
  RwRaster *zBuffer;
  RwV2d viewWindow;
  RwV2d recipViewWindow;
  RwV2d viewOffset;
  float nearPlane;
  float farPlane;
  float fogPlane;
  float zScale;
  float zShift;
  uint16_t renderFrame;
  uint16_t pad;
  RwFrustumPlane frustumPlanes[6];
  RwBBox frustumBoundBox;
  RwV3d frustumCorners[8];
};

#endif 