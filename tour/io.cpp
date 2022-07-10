#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string a, b, c, str_int("123");
  int int_a;

  // io simples
  std::cout << "Digite uma palavra: ";
  std::cin >> a;
  std::cout << "Digite outra palavra: ";
  std::cin >> b;
  std::cout << a << " + " << b << " = " << a + b << std::endl;

  // ler uma linha inteira
  std::cout << "Digite uma linha: ";
  std::getline(std::cin, c);
  std::getline(std::cin, c);
  std::cout << c << std::endl;

  // stringstream
  std::cout << "converte string para inteiro: ";
  std::stringstream(str_int) >> int_a;
  std::cout << int_a << std::endl;
  return 0;
}
