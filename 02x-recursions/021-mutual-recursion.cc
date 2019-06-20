#include "print_int.h"

template <typename T>
std::ostream &print_integer_until_odd(std::ostream &, T, T);

template <typename T>
std::ostream &print_integer_until_even(std::ostream &s, T n, T m) {
	if (n > m) {
		return s;
	}
	else {
		print_integer(s, n);
		return print_integer_until_odd(s, n + 1, m);
	}
}

template <typename T>
std::ostream &print_integer_until_odd(std::ostream &s, T n, T m) {
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