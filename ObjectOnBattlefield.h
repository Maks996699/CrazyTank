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
	virtual int getX();
	virtual int getY();
	virtual void move_up()/* = 0*/;
	virtual void move_down()/* = 0*/;
	virtual void move_left()/* = 0*/;
	virtual void move_right()/* = 0*/;
protected:
	Coord pos;
	char skin;
};

