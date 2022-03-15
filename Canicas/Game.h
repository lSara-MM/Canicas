#pragma once

#include <iostream>
using namespace std;

#include "SDL/include/SDL.h"
#pragma comment( lib, "SDL/libx86/SDL2.lib" )
#pragma comment( lib, "SDL/libx86/SDL2main.lib" )

#include "SDL_image/include/SDL_image.h"
#pragma comment( lib, "SDL_image/libx86/SDL2_image.lib" )

#define W_WIDTH 1290
#define W_HEIGHT 780

#define MAX_KEYS 256

class Game
{
private:
	SDL_Window* Window;
	SDL_Renderer* Renderer;

	enum KEY_STATE
	{
		KEY_IDLE,
		KEY_PRESS,
		KEY_HOLD,
		KEY_RELEASE
	};

	KEY_STATE keys[MAX_KEYS];

	bool god_mode;

public:

	bool Init();

};

