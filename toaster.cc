#include <iostream>

int main( void) {

	register int len;

	std::cout << "length: "; if ((std::cin >> len) && (len > 500 || len < 0)) return 0;

	for (register int i = 0; i++ < len; std::cout << "*");


	return 0;
}

