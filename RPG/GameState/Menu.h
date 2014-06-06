#include <SDL.h>
#include <SDL_image.h>
#include "GameState.h"
#pragma once
class Menu:public GameState
{
private:
	SDL_Surface* background;
public:
	Menu();
	void Update();
	void render();
};