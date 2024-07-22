#pragma once

struct RpMeshHeader
{
  uint32_t flags;
  uint16_t numMeshes;
  uint16_t serialNum;
  uint32_t totalIndicesInMesh;
  uint32_t firstMeshOffset;
  uint32_t indexBuffer;
};