#include <iostream>

/* Funcao anonima (aka lambda) sendo atribuida a uma variavel
   O seu tipo de retorno e inferido pelo compilador(utilizacao do auto)
*/
auto fn = []() {
  return 42;
};

auto main() -> int {
  // inferencia de tipos em c++
  auto result = fn();
  decltype(result) result2 = result + 10;

  std::cout << result << std::endl;
  std::cout << result2 << std::endl;
  return 0;
}
