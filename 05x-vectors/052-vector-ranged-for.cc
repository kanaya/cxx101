// C++11

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

constexpr int N = 101;

int main() {
	std::vector<int> a(N);
	for (int i = 0; i < N; ++i) {
		a.push_back(i);
	}
	for (auto i: a) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
	}
	std::cout << std::flush;
	return 0;
}