#include <memory>
#include "print_int.h"

template <typename T> struct linklist {
	T value;
	std::shared_ptr<linklist> next;
};

template <typename T>
std::ostream &print_all(std::ostream &s, std::shared_ptr<linklist<T>> p) {
	if (p == nullptr) {
		return s;
	}
	else {
		print_int(s, p->value);
		return print_all(s, p->next);
	}
}

template <typename T> auto back(std::shared_ptr<linklist<T>> p) {
	if (p == nullptr || p->next == nullptr) {
		return p;
	}
	else {
		return back(p->next);
	}
}

template <typename T> auto append(std::shared_ptr<linklist<T>> p, T v) {
	if (p == nullptr) {
		p = std::make_shared<linklist<T>>();
		p->value = v;
		p->next = nullptr;
	}
	else {
		auto a = std::make_shared<linklist<T>>();
		auto b = back(s);
		if (b != nullptr) {
			a->next = nullptr;
			a->value = v;
			b->next = a;
		}
	}
	return p;
}

int main() {
	std::shared_ptr<linklist<int>> list = nullptr;
	for (int i = 0; i <= 100; ++i) {
		list = append(list, i);
	}
	print_all(std::cout, list);
	std::cout << std::flush;
	return 0;
}
