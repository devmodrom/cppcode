#include <iostream>

int main( void) {

	int start, end;

	std::cout << "starting from: "; if ((std::cin >> start) && (start > 500 || start < -500)) return 0;
	std::cout << "ending in: "; if ((std::cin >> end) && (end < start) && (end > 500)) return 0;

	for (register int pos = (start % 2 == 0 ? start : start+1); pos < end; pos += 2)
		std::cout << pos << " ";

	std::cout << std::endl << std::endl;

	for (register int pos = (start % 2 != 0 ? start : start+1); pos < end; pos += 2)
		std::cout << pos << " ";

	return 0;
}

