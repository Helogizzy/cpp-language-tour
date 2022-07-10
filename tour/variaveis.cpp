// variaveis
#include <iostream>

/** Namespacing
    Dividir declaracao de simbolos em "pacotes",
    para evitar conflitos de nomes.
*/
using namespace std;

int main() {
  // declaracao de variaveis com valores padroes
  int a(8), b = 12, c{21};
  // declaracao de variaveis nao inicializadas
  float result, d;

  // atribuicao de valores
  d = -48.0f;
  // operacoes aritmeticas (com type casting)
  result = float(((a - b) * c)) / d;

  cout << result;
  return 0;
}
