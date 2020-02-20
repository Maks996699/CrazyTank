#include "ObjectOnBattlefield.h"



ObjectOnBattlefield::ObjectOnBattlefield() //: pos(Coord())
{
	pos.x = 0;
	pos.y = 0;
	skin = ' ';
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
