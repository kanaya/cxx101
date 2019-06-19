// C++14

#include <iostream>
#include <iomanip>
#include <memory>

template <typename T> struct linklist {
	T value;
	linklist *next;
};

template <typename T> void print_all(linklist<T> *s) {
	if (s != nullptr) {
		std::cout << std::setw(3) << std::setfill('0') << s->value << '\n';
		print_all(s->next);
	}
}

template <typename T> auto insert(linklist<T> *s, T v) {
	linklist<T> *n = new linklist<T>();
	n->value = v;
	n->next = s;
	return n;
}

int main() {
	linklist<int> *list = nullptr;
	for (int i = 100; i >= 0; --i) {
		list = insert(list, i);
	}
	print_all(list);
	std::cout << std::flush;
	return 0;
}