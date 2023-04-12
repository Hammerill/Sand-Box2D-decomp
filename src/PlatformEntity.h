class PlatformEntity
{
    PlatformEntity::PlatformEntity(float,float,float,float);
    PlatformEntity::Register(b2World *,SDL_Renderer *);
    PlatformEntity::Reset(void);
    PlatformEntity::Render(SDL_Renderer *,float,float,float);
};
