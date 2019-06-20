// C++14

#include <numeric>
#include <valarray>
#include "../fxstream.h"

constexpr int N = 101;

int main() {
	std::valarray<int> a(N * 3);
	std::iota(std::begin(a), std::end(a), 1);
	auto b = a[std::slice(0, N, 3)];
	auto c = std::valarray<int>(b);
	for (auto i: c) {
		print_integer(std::cout, i);
	}
	std::cout << std::flush;
	return 0;
}