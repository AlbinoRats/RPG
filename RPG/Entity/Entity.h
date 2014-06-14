#include "SDL.h"
#include <SDL_image.h>
class Entity
{
protected:
	Sint16 x, y,width,height;
public:
	Entity(SDL_Rect rect);
	Sint16 getX();
	Sint16 getY();
	void setX(Sint16 X);
	void setY(Sint16 Y);
	Sint16 getWidth();
	Sint16 getHeight();
	void setWidth(Sint16 W);
	void setHeight(Sint16 H);
};