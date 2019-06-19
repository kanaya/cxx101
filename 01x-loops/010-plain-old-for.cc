#include <iostream>
#include <iomanip>

int main() {
	for (int i = 0; i <= 100; ++i) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
	}
	std::cout << std::flush;
	return 0;
}