#include <iostream>

int main() {
  // criacao de um arr  ay de inteiros utilizando o new
  int *p = new int[10];

  for (int i = 0; i < 10; i++) {
    p[i] = i;
  }

  for (int i = 0; i < 10; i++) {
    std::cout << p[i] << std::endl;
  }

  // destruicao do array criado utilizando o delete
  delete[] p;
}
