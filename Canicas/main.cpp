#include "Game.h"

int main(int  argc, char* args[])
{
	Game game;
	if (!game.Init()) { return -1;  }

	bool quit = false;
	while (!quit)
	{
		quit = game.Init();
	}

	return 0;
}