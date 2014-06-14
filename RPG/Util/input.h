#include "SDL.h"
#include "SDL_Image.h"
#include "Keyboard.h"
class input
{
private:
	SDL_Event event;
	
	static input*m_instance;// static = only ONE, shared through all the objects
public:
	Keyboard keyboard;
	input();
	bool poll();
	static input*Instance();
	static void Delete();
};