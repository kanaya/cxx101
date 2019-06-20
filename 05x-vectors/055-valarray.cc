// C++14

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <valarray>

constexpr int N = 101;

int main() {
	std::valarray<int> a(N);
	for (int i = 0; i < N; ++i) {
		a[i] = i;
	}
	std::for_each(&a[0], &a[N], [](auto i) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
	});
	std::cout << std::flush;
	return 0;
}