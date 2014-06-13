#include "Keyboard.h"
#include<iostream>
#include "SDL_keysym.h"
using namespace std;
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
	cout << "Key: "<< Event.key.keysym.sym << " is ->" << keysHeld[Event.key.keysym.sym];

}
bool Keyboard::isDown(Uint16 key)
{
	return(keysHeld[key] == SDL_PRESSED);
}
bool Keyboard::isUp(Uint16 key)
{
	return(keysHeld[key] == SDL_RELEASED);
}