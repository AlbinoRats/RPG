#include "screenmanager.h"
#include "../GameState/menu.h"
#include "../GameState/Game.h"
#include "../GameState/Splash.h"
#include"../Util/input.h"
screenmanager::screenmanager(int width, int height, char* TITLE)
:screen(NULL), 
gameRunning(true)
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
	currentState = new Splash();
}
screenmanager::~screenmanager()
{
	SDL_FreeSurface(screen);//clean up the memory located in the screen
}
void screenmanager::gameLoop()
{
	input event;
	
	while (gameRunning)
	{
		fpsTimer.start();
		gameRunning = event.poll();
		if (currentState->isDone())
		{
			STATES nextState = (STATES)currentState->getNextState();
			if (currentState != NULL)
			{
				delete currentState;
				currentState = NULL;
			}
			switch (nextState)
			{
			case SPLASH: {currentState = new Splash; break; }
			case MENU:	{currentState = new Menu; break; }
			case GAME: {currentState = new Game; break; }
			}
		}
		
		
		//parameter: (screen, rectangle dimensions null=whole surface, color)
		SDL_FillRect(SDL_GetVideoSurface(), NULL, 0xff000000);//clears screen
		currentState->render();//putting the image on
		currentState->Update();
		SDL_Flip(screen);//must flip in order to show in screen
		if (fpsTimer.get_ticks() < 1000 / 60)
		{
			SDL_Delay((1000 / 60) - fpsTimer.get_ticks());
		}
	}
}