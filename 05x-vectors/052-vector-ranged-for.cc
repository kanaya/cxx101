#include <vector>
#include "print_int.h"

int main() {
	constexpr std::size_t N = 101;
	std::vector<int> a(N);

	for (int i = 0; i < N; ++i) {
		a.push_back(i);
	}
	for (auto i: a) {
		print_integer(std::cout, i);
	}
	std::cout << std::flush;
	return 0;
}