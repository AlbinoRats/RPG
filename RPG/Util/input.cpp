#include "input.h"
input::input()
{

}
bool input::poll()
{
	if (SDL_PollEvent(&event) != 0)
	{
		if (event.type == SDL_QUIT)//only the x
		{
			return false;
		}
	}
}