#include "PlatformEntity.h"

PlatformEntity::PlatformEntity(float x0, float y0, float x1, float y1)
{
  this->platform_shape_link = b2EdgeShape();
  this->x0 = x0;
  this->y0 = y0;
  this->x1 = x1;
  this->y1 = y1;
  b2EdgeShape::SetTwoSided(&this->platform_shape_link, {x0, y0}, {x1, y1});
  this->platform_shape = &this->platform_shape_link;
}

void PlatformEntity::Register(b2World *world)
{
  *this->body = b2World::CreateBody(world, this->body_def);
  return b2Body::CreateFixture(*this->body, &this->platform_shape);
}

void PlatformEntity::Reset(PlatformEntity *this)
{
}

void PlatformEntity::Render(SDL_Renderer* renderer, float x_offset, float y_offset, float zoom)
{
  SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0, 0);
  return SDL_RenderDrawLine(
           renderer,
           ((this->x0 * zoom) + x_offset),
           ((this->y0 * zoom) + y_offset),
           ((this->x1 * zoom) + x_offset),
           ((this->y1 * zoom) + y_offset));
}
