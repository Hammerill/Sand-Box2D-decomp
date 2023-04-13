#pragma once

#include "PhysicsObj.h"

class PlatformEntity : public PhysicsObj
{
  b2Body body;
  b2BodyDef body_def;
  b2EdgeShape platform_shape;
  b2EdgeShape* platform_shape_link;
  float x0;
  float y0;
  float x1;
  float y1;

  PlatformEntity::PlatformEntity(float,float,float,float);
  void PlatformEntity::Register(b2World *,SDL_Renderer *);
  void PlatformEntity::Reset(void);
  void PlatformEntity::Render(SDL_Renderer *,float,float,float);
};
