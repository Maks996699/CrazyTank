#pragma once

#include "Coord.h"

class ObjectOnBattlefield
{
public:
	ObjectOnBattlefield();
	ObjectOnBattlefield(int x, int y, char skin = ' ');
	virtual ~ObjectOnBattlefield();
	char showSkin();
protected:
	Coord pos;
	char skin;
};

