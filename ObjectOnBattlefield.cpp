#include "ObjectOnBattlefield.h"



ObjectOnBattlefield::ObjectOnBattlefield() //: pos(Coord())
{
	pos.x = 0;
	pos.y = 0;
	skin = '.';
}

ObjectOnBattlefield::ObjectOnBattlefield(int x, int y, char skin) : skin(skin)
{
	pos.x = x;
	pos.y = y;
}

ObjectOnBattlefield::ObjectOnBattlefield(char skin)
{
	pos.x = 0;
	pos.y = 0;
	this->skin = skin;
}


ObjectOnBattlefield::~ObjectOnBattlefield()
{
}

char ObjectOnBattlefield::showSkin()
{
	return skin;
}

int ObjectOnBattlefield::getX()
{
	return pos.x;
}

int ObjectOnBattlefield::getY()
{
	return pos.y;
}

void ObjectOnBattlefield::move_up()
{
}

void ObjectOnBattlefield::move_down()
{
}

void ObjectOnBattlefield::move_left()
{
}

void ObjectOnBattlefield::move_right()
{
}
