#include <iostream>

/* Dependendo do tipo dos parametros
  uma das funcoes sera chamada
*/
const int add(const int a = 0, const int b = 0) {
  std::cout << "int overloading add" << std::endl;
  return a + b;
}
const float add(const float a = 0, const float b = 0) {
  std::cout << "float overloading add" << std::endl;
  return a + b;
}

template <typename T> const T add(const T a, const T b) {
  std::cout << "template overloading add" << std::endl;
  return a + b;
}

int main() {
  std::cout << "int subtraction: " << add(1, 2) << std::endl;
  std::cout << "float subtraction: " << add(1.0f, 2.0f) << std::endl;
  std::cout << "template subtraction: " << add<std::string>("a", "b")
            << std::endl;
}
