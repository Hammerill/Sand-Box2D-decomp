#include "Ctrl.h"

void Ctrl::Check()
{
  while ( 1 )
  {
    result = SDL_PollEvent(&Ctrl::e) != 0;
    if ( !result )
      return result;
    if ( Ctrl::e == 0x100 )
    {
      Ctrl::exit = 1;
    }
    else if ( scankey == 0x40000052 )
    {
W:
      if ( Ctrl::e == 0x300 )
        v1 = 0x3FF0000000000000i64;
      else
        v1 = 0i64;
      Ctrl::moveUp = v1;
    }
    else if ( scankey <= 0x40000052 )
    {
      if ( scankey == 0x40000051 )
      {
S:
        if ( Ctrl::e == 0x300 )
          v3 = 0x3FF0000000000000i64;
        else
          v3 = 0i64;
        Ctrl::moveDown = v3;
      }
      else if ( scankey <= 0x40000051 )
      {
        if ( scankey == 0x40000050 )
        {
A:
          if ( Ctrl::e == 0x300 )
            v4 = 0x3FF0000000000000i64;
          else
            v4 = 0i64;
          Ctrl::moveLeft = v4;
        }
        else if ( scankey > 0x77 )
        {
          if ( scankey == 0x4000004F )
          {
D:
            if ( Ctrl::e == 0x300 )
              v2 = 0x3FF0000000000000i64;
            else
              v2 = 0i64;
            Ctrl::moveRight = v2;
          }
        }
        else if ( scankey >= 0x61 )
        {
          switch ( scankey )
          {
            case 'a':
              goto A;
            case 'd':
              goto D;
            case 'e':
              if ( Ctrl::e == 0x300 )
                v5 = 0x3FF0000000000000i64;
              else
                v5 = 0i64;
              Ctrl::zoomIn = v5;
              break;
            case 'f':
              Ctrl::fullscreen = Ctrl::e == 0x300;
              break;
            case 'q':
              if ( Ctrl::e == 0x300 )
                v6 = 0x3FF0000000000000i64;
              else
                v6 = 0i64;
              Ctrl::zoomOut = v6;
              break;
            case 'r':
              Ctrl::reset = Ctrl::e == 0x300;
              break;
            case 's':
              goto S;
            case 'w':
              goto W;
            default:
              continue;
          }
        }
      }
    }
  }
}
