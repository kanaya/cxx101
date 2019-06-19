// C++14

#include <iostream>
#include <iomanip>
#include <functional>
#include <memory>

template <typename T> struct linklist {
	T value;
	std::shared_ptr<linklist> next;
};

template <typename T> auto back(std::shared_ptr<linklist<T>> s) {
	if (s == nullptr || s->next == nullptr) {
		return s;
	}
	else {
		return back(s->next);
	}
}

template <typename T> auto append(std::shared_ptr<linklist<T>> s, T v) {
	if (s == nullptr) {
		s = std::make_shared<linklist<T>>();
		s->value = v;
		s->next = nullptr;
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
	return s;
}

int main() {
	std::shared_ptr<linklist<int>> list = nullptr;
	for (int i = 0; i <= 100; ++i) {
		list = append(list, i);
	}
	auto Y = [](auto f) {
		return [=](auto ...args) {
			return f(f, args...);
		};
	};
	std::function<void(std::shared_ptr<linklist<int>>)> print_all
		= Y([](auto print_all, std::shared_ptr<linklist<int>> s) -> void {
			if (s != nullptr) {
				std::cout << std::setw(3) << std::setfill('0') << s->value << '\n';
				print_all(print_all, s->next);
			}			
		});
	print_all(list);
	std::cout << std::flush;
	return 0;
}