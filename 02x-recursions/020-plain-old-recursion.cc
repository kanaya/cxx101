#include "../fxstream.h"

std::ostream &print_integer_until(std::ostream &s, int n, int m) {
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