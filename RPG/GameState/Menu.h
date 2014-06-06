#include <SDL.h>
#include <SDL_image.h>
#include "GameState.h"
class Menu:public GameState
{
private:
	SDL_Surface* background;
public:
	Menu();
};