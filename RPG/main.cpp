#include "GameManagement/screenmanager.h"
int main(int argc, char* args[])//MUST HAVE
{
	screenmanager manager(800, 600, "Za.Waroldo");
	manager.gameLoop();
	SDL_Quit();
	return 0;
}