#include "button.h"
button::button(const char* path) 
:Entity(makeRect(0,0,0,0)),
active(false),
hover(false),
buttonPic(NULL)
{

}
bool button::isActive()
{
	return active;
}
bool button::isHover()
{
	return hover;
}