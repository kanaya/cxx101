#include <initializer_list>
#include <vector>
#include "print_int.h"

template <typename T, T ...v> std::vector<T> make_vector() {
	return std::vector<T> { v... };
}

template <typename T, T ...v> std::vector<T> make_vector(std::index_sequence<v...>) {
	return make_vector<T, v...>();
}

int main() {
	for (auto i: make_vector(std::make_index_sequence<101>{})) {
		print_integer(std::cout, i);
	}
	std::cout << std::flush;
	return 0;
}

// The idea of using std::make_index_sequence is inspired by JLBorges.
// http://www.cplusplus.com/forum/general/203861/
