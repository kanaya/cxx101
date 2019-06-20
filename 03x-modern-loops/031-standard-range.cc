#include <vector>
#include "print_int.h"

template <typename T> auto range(T begin, T end) {
	auto a = std::vector<std::size_t>(end - begin);
	for (auto i = begin; i < end; ++i) {
		a[i - begin] = i;
	}
	return a;
}

int main() {
	for (auto i: range(0, 101)) {
		print_integer(std::cout, i);
	}
	std::cout << std::flush;
	return 0;
}
