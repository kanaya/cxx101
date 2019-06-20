#include "print_int.h"

int main() {
	int i = 0;
	while (true) {
		print_integer(std::cout, i);
		if (++i > 100) {
			goto way_out;
		}
	}
	way_out:
	std::cout << std::flush;
	return 0;
}
