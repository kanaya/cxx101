#include <iostream>
#include <iomanip>

int main() {
	int i = 0;
	bool flag = true;
	while (flag) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
		if (++i > 100) {
			flag = false;
		}
	}
	return 0;
}