#pragma once

#include "PhysicsObj.h"

class WorldManager
{
  WorldManager::WorldManager(int,int,bool,float,float);
  WorldManager::~WorldManager();
  
  void WorldManager::initVideo(void);
  void WorldManager::addObject(PhysicsObj *);
  void WorldManager::deleteObject(int);
  bool WorldManager::Step(void);
  void WorldManager::Render(void);
  void WorldManager::Cycle(void);
};
