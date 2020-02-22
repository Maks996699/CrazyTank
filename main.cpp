#include "main.h"

int main() {

	Battlefield bf(7, 10);
	bf.setInArrTank(3, 5);
	bf.start(ArrowUpKey, ArrowDownKey, ArrowRightKey, ArrowLeftKey, SpaceKey, EscapeKey);
	std::cout << bf.get_symbol(3, 4);
	//bf.show();
	return 0;
}