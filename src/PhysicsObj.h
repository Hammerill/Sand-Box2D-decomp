#pragma once

class PhysicsObj
{
  PhysicsObj::~PhysicsObj();
  void PhysicsObj::LoadTexture(SDL_Renderer *);
  b2Body* PhysicsObj::getBody(void);
};
