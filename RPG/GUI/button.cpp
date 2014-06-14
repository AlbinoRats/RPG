#include "button.h"
button::button(const char* path) 
:Entity(makeRect(0,0,0,0)),
active(false),
hover(false),
buttonPic(NULL)
{

}
button::~button()
{
	if (buttonPic != NULL)
	{
		SDL_FreeSurface(buttonPic);
	}
}
bool button::isActive()
{
	return active;
}
bool button::isHover()
{
	return hover;
}
void button::render()
{
	SDL_BlitSurface(buttonPic, NULL, SDL_GetVideoSurface(), NULL);
}
void button::update()
{
	if (hover&&input::Instance()->keyboard.isDown(SDLK_RETURN))
	{
		active = true;
	}
}