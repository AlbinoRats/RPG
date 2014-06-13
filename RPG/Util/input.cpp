#include "input.h"
input*input::m_instance = NULL;
input::input()
{
	m_instance = this;
}
bool input::poll()
{
	if(SDL_PollEvent(&event))
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
						  keyboard.setKeyState(event);
						  break;
		}
		}
		
	}
	return true;
}
input*input::Instance()
{
	if (m_instance == NULL)
	{
		new input();
	}
	return m_instance;
}
void input::Delete()
{
	delete m_instance;
}
