// C++14

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <valarray>
#include <numeric>

constexpr int N = 101;

int main() {
	std::valarray<int> a(N * 3);
	std::iota(std::begin(a), std::end(a), 1);
	auto b = a[std::slice(0, N, 3)];
	auto c = std::valarray<int>(b);
	for (auto i: c) {
		std::cout << std::setw(3) << std::setfill('0') << i / 3 << '\n';
	}
	std::cout << std::flush;
	return 0;
}