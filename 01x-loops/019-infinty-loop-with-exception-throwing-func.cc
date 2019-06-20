#include <exception>
#include <iomanip>
#include <iostream>

template <typename T>
std::ostream &print_integer(std::ostream &s, int n) throw (std::exception) {
	if (n > 100) {
		throw std::exception {};
	}
	return s << std::setw(3) << std::setfill('0') << n << std::endl;
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