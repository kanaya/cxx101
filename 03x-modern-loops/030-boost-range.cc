// C++11 + Boost

#include <iostream>
#include <iomanip>
#include <boost/range/irange.hpp>

int main() {
	for (auto i: boost::irange(0, 101)) {
		std::cout << std::setw(3) << std::setfill('0') << i << '\n';
	}
	std::cout << std::flush;
	return 0;
}