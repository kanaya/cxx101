#include "print_int.h"

int main() {
	int i = 0;
	do {
		print_integer(std::cout, i);
		++i;
	} 
	while (i <= 100);
	std::cout << std::flush;
	return 0;
}