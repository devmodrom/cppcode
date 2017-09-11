#include <c++/7.2.0/iostream>

int main( void) {

     int n;
     std::cout << "number: "; if ((std::cin >> n) && (n < -500 || n > 500)) return 0;

     register short i, div;
     for (i = 1, div = i; i++ < n-1; (n % i == 0 ? div += i : 0));

     std::cout << (div > n ? "Abundant!" : (div == n ? "Perfect!" : (div < n ? "Deficient!" : NULL))) << std::endl;


	return 0;
}

