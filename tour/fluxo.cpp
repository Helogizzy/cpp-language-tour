#include <iostream>
#include <string>

int main() {
  std::string nome("Joao");
  int idade = 30;
  float altura = 1.75;
  char sexo = 'M';

  // if, else if, else
  if (idade < 18) {
    std::cout << "Voce e menor de idade" << std::endl;
  } else if (idade >= 18 && idade <= 65) {
    std::cout << "Voce e adulto" << std::endl;
  } else {
    std::cout << "Voce e idoso" << std::endl;
  }

  // switch
  switch (sexo) {
  case 'M':
    std::cout << "Voce e do sexo masculino" << std::endl;
    break;
  case 'F':
    std::cout << "Voce e do sexo feminino" << std::endl;
    break;
  default:
    std::cout << "Voce e do sexo desconhecido" << std::endl;
    break;
  }

  // while
  int i = 0;
  while (i < 10) {
    std::cout << i << std::endl;
    i++;
  }

  // do while
  i = 0;
  do {
    std::cout << i << std::endl;
    i++;
  } while (i < 10);

  // for
  for (int j = 0; j < 10; j++) {
    std::cout << j << std::endl;
  }

  // for (auto)
  for (auto c : nome) {
    std::cout << "[" << c << "]" << std::endl;
  }

  // jumps
  for (int k = 0; k < 10; k += 2) {
    if (k == 5) {
      continue;
    } else if (k == 7) {
      break;
    } else {
      std::cout << k << std::endl;
    }
  }
}
