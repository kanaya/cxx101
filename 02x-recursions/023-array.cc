#include <iostream>
#include <iomanip>

void print_n_until_m(const int *n, const int *m) {
	if (n != m) {
		std::cout << std::setw(3) << std::setfill('0') << *n << '\n';
		print_n_until_m(++n, m);
	}
}

int main() {
	int n[101];

	for (int i = 0; i <= 100; ++i) {
		n[i] = i;
	}
	print_n_until_m(&n[0], &n[101]);
	std::cout << std::flush;
	return 0;
}