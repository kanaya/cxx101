#include "print_int.h"

template <typename T>
std::ostream &print_integer_until(std::ostream &s, const T *n, const T *m) {
	if (n == m) {
		return s;		
	}
	else {
		print_integer(s, *n);
		return print_n_until_m(s, ++n, m);
	}
}

int main() {
	constexpr std::size_t N = 101;
	int a[N];

	for (std::size_t i = 0; i < N; ++i) {
		a[i] = static_cast<int>(i);
	}
	print_integer_until(std::cout, &a[0], &a[N]);
	std::cout << std::flush;
	return 0;
}
