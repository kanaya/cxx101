// C++14

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <valarray>

constexpr int N = 101;

int main() {
	std::valarray<int> a(N * 3);
	for (int i = 0; i < N * 3; ++i) {
		a[i] = i;
	}
	auto b = a[std::slice(0, N, 3)];
	std::for_each(&b[0], &b[N], [](auto i) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
	});
	std::cout << std::flush;
	return 0;
}