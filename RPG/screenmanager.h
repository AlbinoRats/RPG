#include "SDL.h"
class screenmanager
{
private:
	SDL_Surface* screen;
	bool gameRunning;
public:
	screenmanager(int width, int height, char* TITLE);
	~screenmanager();
	void gameLoop();
};
