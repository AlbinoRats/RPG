#include "SDL.h"
#include "GameState\GameState.h"
class screenmanager
{
private:
	SDL_Surface* screen;
	bool gameRunning;
	GameState*currentState;
public:
	screenmanager(int width, int height, char* TITLE);
	~screenmanager();
	void gameLoop();
};
