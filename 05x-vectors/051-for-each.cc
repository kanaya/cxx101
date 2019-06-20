// C++14

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
	std::for_each(a.cbegin(), a.cend(), [](auto i){
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
	});
	std::cout << std::flush;
	return 0;
}