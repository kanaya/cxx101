#include <cstdlib>
#include "../fxstream.h"

int main() {
	int i = 0;
	while (true) {
		print_integer(std::cout, i);
		if (++i > 100) {
			std::cout << std::flush;
			std::exit(0);
		}
	}
	// This code never reaches here.
	return 0;
}
