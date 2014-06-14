#include <SDL.h>
#include"../Entity/Entity.h"
#include"../Util/Util.h"
class button:public Entity
{
private:
	bool active, hover;
	SDL_Surface *buttonPic;
public:
	button(const char*path);
	~button();
	bool isActive();
	bool isHover();
	void render();
	void update();
};