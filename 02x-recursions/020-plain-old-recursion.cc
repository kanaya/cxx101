#include "print_int.h"

template <typename T>
std::ostream &print_integer_until(std::ostream &s, T n, T m) {
	if (n > m) {
		return s;
	}
	else {
		print_integer(s, n);
		return print_integer_until(s, n + 1, m);
	}
}

int main() {
	print_integer_until(std::cout, 0, 100);
	std::cout << std::flush;
	return 0;
}