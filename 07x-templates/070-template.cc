#include <iostream>
#include <iomanip>
 
template <int n> struct print_n {
  print_n() {
    print_n<n - 1>();
    std::cout << std::setw(3) << std::setfill('0') << n << '\n';
  }
};

template <> struct print_n<0> {
  print_n() {}
};

int main() {
  print_n<100>();
  std::cout << std::flush;
  return 0;
}

// The idea of this code is given by Yasuhiro Matsumoto
// https://qr.ae/TWhczg
