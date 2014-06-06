#include "SDL.h"
#include "../GameState/GameState.h"
#pragma once
class screenmanager
{
private:
	SDL_Surface* screen;
	bool gameRunning;
	GameState*currentState;
public:
	screenmanager(int width, int height, char* TITLE);
	~screenmanager();
	void gameLoop();
};
