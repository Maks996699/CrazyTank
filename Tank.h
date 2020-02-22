#pragma once
#include "ObjectOnBattlefield.h"

enum class Direct : unsigned int
{
	up, down, left, right
};

class Tank : public ObjectOnBattlefield
{
public:
	Tank();
	Tank(int x, int y, Direct direction, char skin = '#');
	/*virtual*/ ~Tank();
	/*virtual*/ void set(int x, int y, Direct direction);
	/*virtual*/ void move_up()/* = 0*/;
	/*virtual*/ void move_down()/* = 0*/;
	/*virtual*/ void move_left()/* = 0*/;
	/*virtual*/ void move_right()/* = 0*/;
	/*virtual*/ void shot(Direct direction)/* = 0*/;
	/*virtual*/ char showSkin();
	Coord get_pos();
	int getX();
	int getY();
private:
	Direct direction;
}; 