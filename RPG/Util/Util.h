#include<SDL.h>
#include<SDL_image.h>
#include"../Entity/Entity.h"
SDL_Surface* SDL_LoadImage(char*imagePath);
SDL_Rect makeRect(Sint16 x, Sint16 y, Uint16 width, Uint16 height)
{
	SDL_Rect rect = { x, y, width, height };
	return rect;
}