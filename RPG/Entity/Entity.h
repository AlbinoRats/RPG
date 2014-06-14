#include "SDL.h"
#include <SDL_image.h>
class Entity
{
private:
	Sint16 x, y;
public:
	Entity();
	Sint16 getX();
	Sint16 getY();
	void setX(Sint16 X);
	void setY(Sint16 Y);
};