#include "Util.h"
#include<iostream>
using namespace std;
SDL_Surface* SDL_LoadImage(const char * imagePath)
{
	SDL_Surface*loadedImage = NULL;//loaded image
	SDL_Surface*optimizedImage = NULL;//that will be used
	loadedImage = IMG_Load(imagePath);//loads image
	if (loadedImage != NULL)
	{
		//uses the loaded image
		optimizedImage = SDL_DisplayFormat(loadedImage);
		//frees up the old image
		SDL_FreeSurface(loadedImage);
	}
	else
	{
		cout << "Error: could not load image from\n" << imagePath;
	}
	return optimizedImage;
}