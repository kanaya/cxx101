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
	auto i = a.begin();
	while (true) {
		if (i == a.end()) {
			break;
		}
		std::cout << std::setw(3) << std::setfill('0') << *i << '\n';
		++i;
	}
	std::cout << std::flush;
	return 0;
}