#include <c++/7.2.0/iostream>

int main( void) {

     int n1, n2;

     std::cout << "number: "; if ((std::cin >> n1 >> n2) && (n2 > 500 || n1 > 500) && (n2 < -500 || n1 < -500)) return 0;

     // calculate the common divisors.
     for (register int i = 0; i++ < (n1 > n2 ? n1 : n2); 
          ((n1 > n2 ? n1 : n2) % i == 0 ? ((n1 < n2 ? n1 : n2) % i == 0 ? std::cout << i << " " : std::cout) : std::cout));

	return 0;
}

