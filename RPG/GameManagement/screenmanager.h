#include "SDL.h"
#include "../GameState/GameState.h"
#include"../Util/timer.h"
#pragma once
class screenmanager
{
private:
	SDL_Surface* screen;
	bool gameRunning;
	GameState*currentState;
	Timer fpsTimer;
public:
	screenmanager(int width, int height, char* TITLE);
	~screenmanager();
	void gameLoop();
};
