#include <iostream>
#include <iomanip>

int main() {
	int i = 0;
	while (true) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
		if (++i > 100) {
			std::cout << std::flush;
			return 0;
		}
	}
	// This code never reaches here.
	return 0;
}