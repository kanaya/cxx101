#include <iostream>
#include <iomanip>

int main() {
	int i = 0;
	do {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
		++i;
	} 
	while (i <= 100);
	std::cout << std::flush;
	return 0;
}