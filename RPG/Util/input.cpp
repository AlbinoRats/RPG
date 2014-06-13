#include "input.h"
input::input()
{

}
bool input::poll()
{
	switch (event.type)
	{
		case SDL_QUIT:
		{
			return false;
		}
		case SDL_KEYDOWN:
		case SDL_KEYUP:
		{
				keyboard.setKeyState(&event);
				break;
		}
	}
	return true;
}