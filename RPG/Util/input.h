#include "SDL.h"
#include "SDL_Image.h"
#include "Keyboard.h"
class input
{
private:
	SDL_Event event;
	Keyboard keyboard;
public:
	input();
	bool poll();

};