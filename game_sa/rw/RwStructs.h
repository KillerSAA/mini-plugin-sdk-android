#ifndef RwStructs_H
#define RwStructs_H



struct RwObject
{
  int8_t type;
  int8_t subType;
  int8_t flags;
  int8_t privateFlags;
  void *parent;
};

struct RwLLLink
{
  RwLLLink *next;
  RwLLLink *prev;
};

struct RwObjectHasFrame
{
  RwObject object;
  RwLLLink lFrame;
  uintptr_t sync; // offset?
};

enum RwCameraProjection : int32_t
{
  rwNACAMERAPROJECTION = 0x0,
  rwPERSPECTIVE = 0x1,
  rwPARALLEL = 0x2,
  rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7FFFFFFF,
};

struct RwMatrix
{
  RwV3d right;
  uint32_t flags;
  RwV3d up;
  uint32_t pad1;
  RwV3d at;
  uint32_t pad2;
  RwV3d pos;
  uint32_t pad3;
};


struct RwTexture
{
  RwRaster *raster;
  RwTexDictionary *dict;
  RwLLLink lInDictionary;
  char name[32];
  char mask[32];
  uint32_t filterAddressing;
  int refCount;
};

struct RwRaster
{
  RwRaster *parent;
  uint8_t *cpPixels;
  uint8_t *palette;
  int width;
  int height;
  int depth;
  int stride;
  int16_t nOffsetX;
  int16_t nOffsetY;
  uint8_t cType;
  uint8_t cFlags;
  uint8_t cFormat;
  int originalWidth;
  int originalHeight;
  TextureDatabaseEntry *dbEntry;
  uint16_t privateFlags;
  int8_t m_undefined; // ??
  int8_t m_undefined1; // ??
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

struct RwBBox
{
  RwV3d sup;
  RwV3d inf;
};

struct RwPlane
{
  RwV3d normal;
  float distance;
};

struct RwFrustumPlane
{
  RwPlane plane;
  uint8_t closestX;
  uint8_t closestY;
  uint8_t closestZ;
  uint8_t pad;
};

struct RwTexDictionary
{
  RwObject object;
  RwLinkList texturesInDict;
  RwLLLink lInInstance;
};

struct RwFrame
{
  RwObject object;
  RwLLLink inDirtyListLink;
  RwMatrix modelling;
  RwMatrix ltm;
  RwLinkList objectList;
  RwFrame *child;
  RwFrame *next;
  RwFrame *root;
};

struct RwLinkList
{
  RwLLLink link;
};

#endif
