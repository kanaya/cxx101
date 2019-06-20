#include <exception>
#include "print_int.h"

template <typename T>
std::ostream &print_integer(std::ostream &s, int n) noexcept(false) {
	if (n > 100) {
		throw std::exception {};
	}
	return print_integer(s, n);
}

int main() {
	int i = 0;
	try {
		while (true) {
			print_integer(std::cout, i);
			++i;
		}
	}
	catch (std::exception &) {
		std::cout << std::flush;
	}
	return 0;
}