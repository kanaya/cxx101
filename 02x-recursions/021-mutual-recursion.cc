#include "../fxstream.h"

std::ostream &print_integer_until_odd(std::ostream &, int, int);

std::ostream &print_integer_until_even(std::ostream &s, int n, int m) {
	if (n > m) {
		return s;
	}
	else {
		print_integer(s, n);
		return print_integer_until_odd(s, n + 1, m);
	}
}

std::ostream &print_integer_until_odd(std::ostream &s, int n, int m) {
	if (n > m) {
		return s;
	}
	else {
		print_integer(s, n);
		return print_integer_until_even(s, n + 1, m);
	}
}

int main() {
	print_integer_until_even(std::cout, 0, 100);
	std::cout << std::flush;
	return 0;
}