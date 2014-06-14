#include "../Entity/Entity.h"
Entity::Entity()
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