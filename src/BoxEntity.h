#pragma once

#include "PhysicsObj.h"

class BoxEntity : public PhysicsObj
{
    char rad_to_degree[8];
    char texture[16];
    char body[8];
    b2BodyDef body_def;
    b2FixtureDef fixture_def;
    int velocity_x_y;
    float angle_clone;
    int linear_velocity;
    const char* texture_path;
    float x;
    float y;
    float width;
    float height;
    float angle_init;
    int box_shape;

    BoxEntity::BoxEntity(char const*, float, float, float, float, float);

    void BoxEntity::Register(b2World*, SDL_Renderer*);
    void BoxEntity::Reset(b2World*, SDL_Renderer*);
    void BoxEntity::Render(SDL_Renderer*, float, float, float);
};
