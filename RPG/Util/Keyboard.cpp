#include "Keyboard.h"
#include "SDL_keysym.h"
Keyboard::Keyboard()
{
	keysHeld = new Uint16[323]();
}
Keyboard::~Keyboard()
{
	delete[]keysHeld;
}
void Keyboard::setKeyState(SDL_Event Event)
{
	//sets the key that's pressed from Event to the correspondng keyspot index in the array
	keysHeld[Event.key.keysym.sym] = Event.key.state;

}
bool Keyboard::isDown(Uint16 key)
{
	return(keysHeld[key] == SDL_PRESSED);
}
bool Keyboard::isUp(Uint16 key)
{
	return(keysHeld[key] == SDL_RELEASED);
}