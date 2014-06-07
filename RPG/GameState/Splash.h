#include <SDL.h>
#include <SDL_image.h>
#include "GameState.h"
#pragma once
class Splash :public GameState
{
private:
	SDL_Surface*background;
public:
	Splash();
	~Splash();
	void Update();
	void render();
};