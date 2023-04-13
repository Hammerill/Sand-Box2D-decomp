#include "BoxEntity.h"

BoxEntity::BoxEntity(const char *texture_path, float x, float y, float width, float height, float angle)
{
  this->box_shape = new b2PolygonShape::b2PolygonShape();
  this->x = (width / 2.0) + x;
  this->y = (height / 2.0) + y;
  this->width = width;
  this->height = height;
  this->angle_init = angle;
  this->texture_path = texture_path;
  this->body_def = b2BodyDef();
  this->angle_clone = LODWORD(this->angle_init);
  b2Vec2::Set(&this->velocity_x_y, this->x, this->y);
  b2Vec2::Set(&this->linear_velocity, 0.0, 0.2);
  b2PolygonShape::SetAsBox(&this->box_shape, this->width / 2.0, this->height / 2.0);
  this->fixture_def = &this->box_shape;
}

void BoxEntity::Register(b2World *world, SDL_Renderer* renderer)
{
  *this->body = b2World::CreateBody(world, &this->body_def);
  b2Body::SetLinearVelocity(*this->body, &this->linear_velocity);
  b2Body::CreateFixture(*this->body, &this->fixture_def);
  PhysicsObj::LoadTexture(this, renderer);
}
void BoxEntity::Reset()
{
  b2Body *body; // rbx
  float angle; // xmm6_4
  __int64 v4; // [rsp+0h] [rbp-30h] BYREF
  char v5[8]; // [rsp+28h] [rbp-8h] BYREF

  body = *this->body;
  angle = this->angle_init;
  b2Vec2::b2Vec2((&v4 + 5), this->x, this->y);
  b2Body::SetTransform(body, v5, angle);
  return b2Body::SetLinearVelocity(*this->body, &this->linear_velocity);
}
