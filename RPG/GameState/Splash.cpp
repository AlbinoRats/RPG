#include"Splash.h"
#include "../Util/Util.h"
Splash::Splash()//uses gamestate header
{
	background = SDL_LoadImage("res/image/splash.png");
}
Splash::Splash()
{
	SDL_FreeSurface(background);
}
void Splash::render()
{
	SDL_BlitSurface(background, NULL, SDL_GetVideoSurface(), NULL);
}
void Splash::Update()
{

}