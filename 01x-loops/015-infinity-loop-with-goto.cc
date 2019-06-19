#include <iostream>
#include <iomanip>

int main() {
	int i = 0;
	while (true) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
		if (++i > 100) {
			goto way_out;
		}
	}
	way_out:
	std::cout << std::flush;
	return 0;
}