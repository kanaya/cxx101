#include <iostream>
#include <iomanip>

void print_n(const int *n) {
	if (*n >= 0) {
		std::cout << std::setw(3) << std::setfill('0') << *n << '\n';
		print_n(++n);
	}
}

int main() {
	int n[102];

	for (int i = 0; i <= 100; ++i) {
		n[i] = i;
	}
	n[101] = -1;
	print_n(n);
	std::cout << std::flush;
	return 0;
}