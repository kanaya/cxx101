// Boost

#include <boost/range/irange.hpp>
#include "print_int.h"

int main() {
	for (auto i: boost::irange(0, 101)) {
		print_integer(std::cout, i);
	}
	std::cout << std::flush;
	return 0;
}