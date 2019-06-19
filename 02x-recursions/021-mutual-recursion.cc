#include <iostream>
#include <iomanip>

void print_n_until_m_odd(int, int);

void print_n_until_m_even(int n, int m) {
	if (n <= m) {
		std::cout << std::setw(3) << std::setfill('0') << n << '\n';
		print_n_until_m_odd(n + 1, m);		
	}
}

void print_n_until_m_odd(int n, int m) {
	if (n <= m) {
		std::cout << std::setw(3) << std::setfill('0') << n << '\n';
		print_n_until_m_even(n + 1, m);
	}
}

int main() {
	print_n_until_m_even(0, 100);
	std::cout << std::flush;
	return 0;
}