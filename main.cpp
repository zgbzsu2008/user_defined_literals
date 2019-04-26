#include <iostream>

constexpr long double operator"" _deg(long double deg) {
  return deg * 3.1415926 / 180;
}

struct A {
  A(unsigned long long m) : m_(m) {}
  unsigned long long m_;
};

A operator"" _A(unsigned long long m) { return A(m); }

void operator"" _print(const char* str) { std::cout << str << '\n'; }

int main() {
  double x = 90.0_deg;
  std::cout << std::fixed << x << '\n';

  A a = 123_A;
  std::cout << a.m_ << "\n";

  0x123ABC_print;

  return 0;
}