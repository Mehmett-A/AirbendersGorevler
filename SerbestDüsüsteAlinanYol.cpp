#include <iostream>

int main() {
	#define G 9.80665
	float t,x;
	std::cin >> t;
	x = G/2*t*t;
	std::cout << x;
}
