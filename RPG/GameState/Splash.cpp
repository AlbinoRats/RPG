#include"Splash.h"
#include "../Util/Util.h"
#include "../Util/input.h"
Splash::Splash()//uses gamestate header
{
	timer = 0;
	background = SDL_LoadImage("res/image/splash.png");
	nextState = MENU;
}
Splash::~Splash()
{
	SDL_FreeSurface(background);
}
void Splash::render()
{
	SDL_BlitSurface(background, NULL, SDL_GetVideoSurface(), NULL);
}
void Splash::Update()
{
	timer += 1;
	if (timer > 150)
	{
		isRunning = false;
	}
	else if (input::Instance()->keyboard.isDown(SDLK_SPACE))
	{
		isRunning = false;
	}
	else if (input::Instance()->keyboard.isDown(SDLK_RETURN))
	{
		isRunning = false;
	}
}