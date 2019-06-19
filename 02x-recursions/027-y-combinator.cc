// C++14

#include <iostream>
#include <iomanip>

int main() {
	auto Y = [](auto f) {
		return [=](auto ...args) {
			return f(f, args...);
		};
	};
	auto print = Y([](auto f, int i, int n) -> void {
		if (i <= n) {
			std::cout << std::setw(3) << std::setfill('0') << i << '\n';
			f(f, i + 1, n);
		}			
	});
	print(1, 100);
	std::cout << std::flush;
	return 0;
}