#include "../Entity/Entity.h"
Entity::Entity(SDL_Rect rect)
{

}
Sint16 Entity::getX()
{
	return x;
}
Sint16 Entity::getY()
{
	return y;
}
void Entity::setX(Sint16 X)
{
	x = X;
}
void Entity::setY(Sint16 Y)
{
	y = Y;
}
Sint16 Entity::getWidth()
{
	return width;
}
Sint16 Entity::getHeight()
{
	return height;
}
void Entity::setWidth(Sint16 W)
{
	width = W;
}
void Entity::setHeight(Sint16 H)
{
	height = H;
}