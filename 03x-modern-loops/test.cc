#include <iostream>
#include <numeric>
#include <functional>

int main() {
  for (auto i: std::iota(1, 10) | std::reverse | std::filter([] (auto x) { 
	return x % 2 == 1;
      })) {
    std::cout << i << ' ';
  }
  return 0;
}
