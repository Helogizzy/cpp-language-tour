#include <iostream>

int a = 0;
float b = 0;

namespace ns1 {
int a = 1;
float b = 2.0f;
} // namespace ns1

namespace ns2 {
int a = 3;
float b = 4.0f;
std::string c = "4";
} // namespace ns2

void fn(void) {
  int a = 4;
  float b = 4.0f;

  std::cout << "fn a: " << a << std::endl;
  std::cout << "fn b: " << b << std::endl;
}

void fn2(void) {
  using namespace ns2;

  std::cout << "introduced ns1 c: " << c << std::endl;
}

int main() {
  fn();
  std::cout << "global a: " << a << std::endl;
  std::cout << "global b: " << b << std::endl;
  std::cout << "ns1 a: " << ns1::a << std::endl;
  std::cout << "ns1 b: " << ns1::b << std::endl;
  std::cout << "ns2 a: " << ns2::a << std::endl;
  std::cout << "ns2 b: " << ns2::b << std::endl;
}
