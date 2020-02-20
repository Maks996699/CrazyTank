#pragma once

#include "Coord.h"

class ObjectOnBattlefield
{
public:
	ObjectOnBattlefield();
	ObjectOnBattlefield(int x, int y, char skin = ' ');
	ObjectOnBattlefield(char skin);
	virtual ~ObjectOnBattlefield();
	virtual char showSkin();
protected:
	Coord pos;
	char skin;
};

