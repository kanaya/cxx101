#include <algorithm>
#include <valarray>
#include "print_int.h"

int main() {
	constexpr std::size_t N = 101;
	std::valarray<int> a(N);

	for (std::size_t i = 0; i < N; ++i) {
		a[i] = static_cast<int>(i);
	}
	std::for_each(&a[0], &a[N], [](auto i){ print_integer(std::cout, i); });
	std::cout << std::flush;
	return 0;
}
