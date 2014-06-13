#include "SDL.h"
#include "SDL_Image.h"
class Keyboard
{
private:
	Uint16*keysHeld;
public:
	Keyboard();
	~Keyboard();
	void setKeyState(SDL_Event* Event);
	bool isDown(Uint16 key);
	bool isUp(Uint16 key);
};