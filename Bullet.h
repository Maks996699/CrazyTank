#pragma once

#include "ObjectOnBattlefield.h"


class Bullet : public ObjectOnBattlefield
{
public:
	Bullet(int x, int y, char skin = '*');
	Bullet();
	~Bullet();
	void set(int x, int y);
	void move_up();
	void move_down();
	void move_left();
	void move_right();
};