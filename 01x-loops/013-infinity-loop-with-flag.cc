#include "../fxstream.h"

int main() {
	int i = 0;
	bool flag = true;
	while (flag) {
		print_integer(std::cout, i);
		if (++i > 100) {
			flag = false;
		}
	}
	return 0;
}
