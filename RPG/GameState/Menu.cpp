#include "Menu.h"
#include "../Util/Util.h"
Menu::Menu()//uses gamestate header
{
	background=SDL_LoadImage("res/image/menu.png");
}
Menu::~Menu()
{
	SDL_FreeSurface(background);
}
void Menu::render()
{
	SDL_BlitSurface(background, NULL, SDL_GetVideoSurface(),NULL); 
}
void Menu::Update()
{

}