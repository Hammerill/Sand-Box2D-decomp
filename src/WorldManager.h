#include "PhysicsObj.h"

class WorldManager
{
    WorldManager::WorldManager(int,int,bool,float,float);
    WorldManager::~WorldManager();
    WorldManager::initVideo(void);
    WorldManager::addObject(PhysicsObj *);
    WorldManager::deleteObject(int);
    WorldManager::Step(void);
    WorldManager::Render(void);
    WorldManager::Cycle(void);
};
