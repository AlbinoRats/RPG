#include "GameState.h"
#pragma once
class Game:public GameState
{
public:
	Game();
	void Update();
	void render();
};