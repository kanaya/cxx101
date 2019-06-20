#include <memory>
#include "print_int.h"

template <typename T> struct linklist {
	T value;
	std::shared_ptr<linklist> next;
};

template <typename T> std::ostream &print_all(std::ostream &s, std::shared_ptr<linklist<T>> p) {
	if (p == nullptr) {
		return s;
	}
	else {
		print_int(s, p->value);
		return print_all(s, p->next);
	}
}

template <typename T> auto insert(std::shared_ptr<linklist<T>> p, T v) {
	auto n = std::make_shared<linklist<T>>();
	n->value = v;
	n->next = p;
	return n;
}

int main() {
	std::shared_ptr<linklist<int>> list = nullptr;
	for (int i = 100; i >= 0; --i) {
		list = insert(list, i);
	}
	print_all(std::cout, list);
	std::cout << std::flush;
	return 0;
}
