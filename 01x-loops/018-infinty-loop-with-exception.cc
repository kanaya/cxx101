#include <exception>
#include "print_int.h"

int main() {
	int i = 0;
	try {
		while (true) {
			print_integer(std::cout, i);
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
