#include "print_int.h"

template <typename T>
std::ostream &print_integer_ref(std::ostream &s, const T *n) {
	if (*n < 0) {
		return s;
	}
	else {
		print_integer(s, *n);
		return print_integer_ref(s, ++n);
	}
}

int main() {
	constexpr std::size_t N = 101;
	int a[N + 1];

	for (std::size_t i = 0; i < N; ++i) {
		a[i] = static_cast<int>(i);
	}
	a[N] = -1;
	print_integer_ref(std::cout, &a[0]);
	std::cout << std::flush;
	return 0;
}
