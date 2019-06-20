// C++14

#include <iostream>
#include <iomanip>
#include <vector>

template <typename T> auto range(T begin, T end) {
	auto a = std::vector<size_t>(end - begin);
	for (int i = begin; i < end; ++i) {
		a[i - begin] = i;
	}
	return a;
}

int main() {
	for (auto i: range(0, 101)) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
	}
	std::cout << std::flush;
	return 0;
}