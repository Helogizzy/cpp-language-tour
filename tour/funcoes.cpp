#include <functional>
#include <iostream>

/* Funcao simples com dois parametros
   passados por valor(possui valores padroes) */
int subtraction(int a = 0, int b = 0) { return a - b; }

// Funcao sem parametros e sem retorno, tambem chamada de procedimento
void printmessage() { std::cout << "I'm a function!"; }

/* Passando valores por referencia (em C usariamos ponteiros para essas
   variaveis) */
void duplicate(int &a, int &b) {
  a *= 2;
  b *= 2;
}

/* Modificadores podem ser usados para alterar o comportamento
 * de parametros ou do retorno da funcao
 * inline = o compilador nao fara o stacking da funcao, so chamara ela
 * const = o compilador tera certeza que valor nao sera modificado
 */
inline const std::string concatenate(const std::string &a,
                                     const std::string &b) {
  return a + b;
}

auto main() -> int {
  int a = 5, b = 10;
  std::string s1 = "Hello", s2 = "World";

  /* Exemplo de recursividade, escopo e funcao anonima */
  const std::function<const int(const int)> factorial =
      [&factorial](const int n) { return n == 0 ? 1 : n * factorial(n - 1); };

  std::cout << "Subtraction of " << a << " and " << b << " is "
            << subtraction(a, b) << std::endl;

  printmessage();
  duplicate(a, b);

  std::cout << "Concatenation of " << s1 << " and " << s2 << " is "
            << concatenate(s1, s2) << std::endl;

  std::cout << "Factorial of " << a << " is " << factorial(a) << std::endl;

  return 0;
}
