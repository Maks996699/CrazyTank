#include "main.h"

int main() {

	Battlefield bf(7, 10);
	bf.show();
	std::cout << bf.get_symbol(3, 4);
	//bf.show();
	return 0;
}