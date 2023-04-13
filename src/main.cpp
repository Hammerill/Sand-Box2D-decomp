#include "BoxEntity.h"
#include "PhysicsObj.h"
#include "PlatformEntity.h"
#include "WorldManager.h"

const int WINDOW_WIDTH = 960;
const int WINDOW_HEIGHT = 544;

int main()
{
  const char* box_texture_path = "assets/img/box.png";

  WorldManager* world_manager = new WorldManager(WINDOW_WIDTH, WINDOW_HEIGHT, false, 10, 1);

  world_manager->addObject(new PlatformEntity(0, 6, 8, 6));

  world_manager->addObject(new BoxEntity(box_texture_path, 0, 0, 2, 2, 0));
  world_manager->addObject(new BoxEntity(box_texture_path, 2, 0, 2, 1, 45));
  world_manager->addObject(new BoxEntity(box_texture_path, 5, 0, 0.25, 1.5, 45));
  world_manager->addObject(new BoxEntity(box_texture_path, 5.5, 0, 0.25, 0.25, 45));

  world_manager->Cycle();

  return 0;
}
