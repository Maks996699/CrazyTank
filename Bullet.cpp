#include "Bullet.h"

Bullet::Bullet(int x, int y, char skin) : ObjectOnBattlefield(x, y, skin)
{
}

Bullet::Bullet() : ObjectOnBattlefield()
{
}

Bullet::~Bullet()
{
}

void Bullet::set(int x, int y)
{
	pos.x = x;
	pos.y = y;
}

void Bullet::move_up()
{
	pos.y++;
}

void Bullet::move_down()
{
	pos.y--;
}

void Bullet::move_left()
{
	pos.x--;
}

void Bullet::move_right()
{
	pos.x++;
}
