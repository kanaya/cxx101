// C++14

#include <iostream>

int main() {
	auto Y = [](auto f) {
		return [=](auto ...args) {
			return f(f, args...);
		};
	};
	auto print = Y([](auto f, int i, int n) -> void {
		if (i <= n) {
			std::cout << i << '\n';
			f(f, i + 1, n);
		}			
	});
	print(1, 100);
	std::cout << std::flush;
	return 0;
}