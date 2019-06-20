// C++11

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <valarray>
#include <numeric>

constexpr int N = 101;

int main() {
	std::valarray<int> a(N);
	std::iota(std::begin(a), std::end(a), 1);
	for (auto i: a) {
		std::cout << std::setw(3) << std::setfill('0') << i - 1 << '\n';
	};
	std::cout << std::flush;
	return 0;
}