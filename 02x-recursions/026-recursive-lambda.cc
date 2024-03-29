#include <functional>
#include "print_int.h"

int main() {
	std::function<std::ostream &(std::ostream &, int, int)> print_all
		= [&print_all](std::ostream &s, int i, int n) -> std::ostream & {
			if (i > n) {
				return s;
			}
			else {
				print_integer(s, i);
				return print_all(s, i + 1, n);
			}
		};
	print_all(std::cout, 0, 100);
	return 0;
}
