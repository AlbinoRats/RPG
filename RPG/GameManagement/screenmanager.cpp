#include "screenmanager.h"
#include "../GameState/menu.h"
screenmanager::screenmanager(int width, int height, char* TITLE)
:screen(NULL), 
gameRunning(true),
currentState(new Menu)
{
	SDL_Init(SDL_INIT_EVERYTHING);//starts sdl
	atexit(SDL_Quit);//if the program crashes when the program ends, it will free up memory
	SDL_putenv("SDL_VIDEO_WINDOW_POS=center");//environment variables. sets the position of window to the middle of the screen
	SDL_WM_SetCaption(TITLE, NULL);//title
	if (SDL_SetVideoMode(width, height, 32, SDL_SWSURFACE) == NULL)
	{
		printf("Unable to create Window \n");
	}
	screen = SDL_GetVideoSurface();// gets videosurface
	SDL_EventState(SDL_MOUSEMOTION, SDL_IGNORE);//ignores mouse motion
	
}
screenmanager::~screenmanager()
{
	SDL_FreeSurface(screen);//clean up the memory located in the screen
}
void screenmanager::gameLoop()
{
	SDL_Event event;
	while (gameRunning)
	{
		if (SDL_PollEvent(&event) != 0)
		{
			if (event.type == SDL_QUIT)//only the x
			{
				gameRunning = false;
			}
		}
		if (currentState->isDone())
		{
			nextState = (STATES)currentState->getNextState();
		}
		//parameter: (screen, rectangle dimensions null=whole surface, color)
		SDL_FillRect(SDL_GetVideoSurface(), NULL, 0xff000000);//clears screen
		SDL_Flip(screen);//must flip in order to show in screen

	}
}