#include "Game.h"

bool Game::Init()
{
	//Initialize SDL with all subsystems
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)		
	{
		cout << "SDL could not initialize: SDL_Error: " << SDL_GetError << endl;
		return false;
	}
	//Create window: title, x, y, w, h, flags
	Window = SDL_CreateWindow("Canicas", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, W_WIDTH, W_HEIGHT,  SDL_WINDOW_SHOWN);
	if (Window = nullptr)
	{
		cout << "Unable to create Window. SDL_Error: " << SDL_Error << endl;
		return false;
	}

	//Create a 2D area to see things in the window
	Renderer = SDL_CreateRenderer(Window, -1, 0);

	/*
	Surfaces are basically image data operated on by the CPU and stored in normal system RAM.

	Textures are image data that the GPU can work with and are stored in GPU RAM, you might need 
	to load an image from a surface and then convert it to a texture first.

	Renderer is basically everything to do with telling the GPU what to do, like clear the screen or draw a texture.
	*/

	//Initialize key arrays
	for (int i = 0; i < MAX_KEYS; i++)
	{
		keys[i] = KEY_IDLE;
	}
}