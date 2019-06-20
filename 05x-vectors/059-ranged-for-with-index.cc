// C++14

#include <algorithm>
#include <vector>
#include "../fxstream.h"

constexpr int N = 101;

template <typename Iterator> class with_index_iterator: public Iterator {
	private:
		std::size_t i = 0;

	public:
		with_index_iterator(Iterator iter): Iterator(iter) { }

		auto &operator ++() {
			++i;
			this->Iterator::operator ++();
			return *this;
		}

		auto operator *() const noexcept {
			return std::pair<std::size_t, 
				typename std::iterator_traits<Iterator>::reference>
				{ i, *static_cast<Iterator const &>(*this) };
		}
};

template <typename Range> class with_index {
	private:
		Range &range;

	public:
		with_index(Range &range): range(range) { }

		auto begin() const {
			return with_index_iterator{ std::begin(range) };
		}

		auto end() const {
			return with_index_iterator{ std::end(range) };
		}
};

int main() {
	std::vector<int> a(N);
	for (auto [i, n]: with_index(a)) {
		print_integer(std::cout, i);
	}
	std::cout << std::flush;
	return 0;
}

// This code is inspired by Ryo Ezoe.
// https://cpplover.blogspot.com/2017/10/range-based-for.html
