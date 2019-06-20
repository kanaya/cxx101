#include <algorithm>
#include <vector>
#include "print_int.h"

int main() {
	constexpr std::size_t N = 101;
	std::vector<int> a(N);

	for (int i = 0; i < N; ++i) {
		a.push_back(i);
	}
	std::for_each(std::begin(a), std::end(a), [](auto i){ print_integer(std::cout, i); });
	std::cout << std::flush;
	return 0;
}