#include<SDL_image.h>
#include<SDL.h>
#pragma once
class Util
{
public:
	SDL_Surface* SDL_LoadImage(char*imagePath);
};