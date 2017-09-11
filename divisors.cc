#include <iostream>

int main( void) {

	unsigned n;
	std::cout << "number: "; if ((std::cin >> n) && (n > 1000)) return 0;

	for (register int j = 0; j++ < n; (n % j == 0 ? std::cout << j << " " : std::cout));


	return 0;
}

