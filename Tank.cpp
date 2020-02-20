#include "Tank.h"

Tank::Tank() : ObjectOnBattlefield()
{
	direction = Direct::up;

}

Tank::Tank(int x, int y, Direct direction, char skin) : ObjectOnBattlefield(x, y, skin)
{
	this->direction = direction;
}

Tank::~Tank()
{
}

void Tank::set(int x, int y, Direct direction)
{
	Tank::direction = direction;
	pos.x = x;
	pos.y = y;
}

void Tank::move_up()
{
	pos.y++;
}

void Tank::move_down()
{
	pos.y--;
}

void Tank::move_left()
{
	pos.x--;
}

void Tank::move_right()
{
	pos.x++;
}

void Tank::shot(Direct direction)
{
	switch (direction)
	{
	case Direct::up:break;
	case Direct::down:break;
	case Direct::left:break;
	case Direct::right:break;
	default:
		break;
	}
}

Coord Tank::get_pos()
{
	return pos;
}
