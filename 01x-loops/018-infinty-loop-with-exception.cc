// C++11

#include <iostream>
#include <iomanip>

int main() {
	int i = 0;
	try {
		while (true) {
			std::cout << std::setw(3) << std::setfill('0') << i << '\n';
			if (++i > 100) {
				throw std::exception {};
			}
		}
	}
	catch (std::exception &) {
		std::cout << std::flush;
	}
	return 0;
}