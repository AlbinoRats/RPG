#include "screenmanager.h"
int main(int argc, char* args[])//MUST HAVE
{
	screenmanager manager(800, 600, "ATH IS A FAGGOT");
	manager.gameLoop();
	SDL_Quit();
	return 0;
}