#pragma once

class Ctrl
{
    SDL_Event Ctrl::e;

    void Ctrl::Check();

    int Ctrl::getExit();
    int Ctrl::getReset();
    int Ctrl::getFullscreen();
    int Ctrl::getMoveUp();
    int Ctrl::getMoveRight();
    int Ctrl::getMoveDown();
    int Ctrl::getMoveLeft();
    int Ctrl::getZoomIn();
    int Ctrl::getZoomOut();
};
