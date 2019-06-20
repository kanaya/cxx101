#include "../fxstream.h"

int main() {
	for (int i = 0; i <= 100; ++i) {
		print_integer(std::cout, i);
	}
	std::cout << std::flush;
	return 0;
}
