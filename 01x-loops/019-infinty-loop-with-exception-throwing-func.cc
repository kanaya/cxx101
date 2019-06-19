// C++11

#include <iostream>
#include <iomanip>

void print_n(int n, std::ostream &os) throw (std::exception) {
	if (n > 100) {
		throw std::exception {};
	}
	os << std::setw(3) << std::setfill('0') << n << '\n';
}

int main() {
	int i = 0;
	try {
		while (true) {
			print_n(i, std::cout);
			++i;
		}
	}
	catch (std::exception &) {
		std::cout << std::flush;
	}
	return 0;
}