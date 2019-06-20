// C++20

#include <iostream>
#include <iomanip>
#include <algorithm>

int main() {
	for (auto i: std::iota(0, 100, 1)) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
	}
	std::cout << std::flush;
	return 0;
}
