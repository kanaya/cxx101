#ifndef __FXSTREAM_H
#define __FXSTREAM_H
#include <iomanip>
#include <iostream>
template <typename T> std::ostream &print_integer(std::ostream &s, T n) {
	return s << std::setw(3) << std::setfill('0') << n << std::endl;
}
#endif
