#include <iostream>
#include <iomanip>

void print_n_until_m(int n, int m) {
	if (n <= m) {
		std::cout << std::setw(3) << std::setfill('0') << n << '\n';
		print_n_until_m(n + 1, m);
	}
}

int main() {
	print_n_until_m(0, 100);
	std::cout << std::flush;
	return 0;
}