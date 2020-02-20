#pragma once

#include <iostream>
#include <Windows.h>
#include "ObjectOnBattlefield.h"

class Battlefield
{
public:
	Battlefield(int, int);
	~Battlefield();
	void show() const;
	void setInArrTank(int x, int y);
	char get_symbol(int x, int y);

private:
	ObjectOnBattlefield** battlefield_arr;
	int width;
	int height;
};