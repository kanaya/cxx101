#inculde "print_int.h"

int main() {
	auto Y = [](auto f) {
		return [=](auto ...args) {
			return f(f, args...);
		};
	};
	auto print = Y([](auto f, std::ostream &s, int i, int n) -> void {
		if (i > n) {
			return;
		} 
		else {
			print_integer(s, i);
			f(f, s, i + 1, n);
		}			
	});
	print(std::cout, 1, 100);
	std::cout << std::flush;
	return 0;
}
