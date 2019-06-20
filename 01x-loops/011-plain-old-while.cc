#include "../fxstream.h"

int main() {
	int i = 0;
	while (i <= 100) {
		print_integer(std::cout, i);
		++i;
	}
	std::cout << std::flush;
	return 0;
}
