#include <iostream>

// exemplo de funcao que recebem um array
int sum(int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum;
}

int main() {
  // Array de inteiros, nao inicializados
  int a[10];

  // Array de inteiros, inicializados
  int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Array de inteiros, multidimensionais
  int c[2][3] = {{1, 2, 3}, {4, 5, 6}};

  for (int i = 0; i < 10; i++) {
    // escrita em uma posicao do array
    a[i] = i;
  }

  for (int i = 0; i < 10; i++) {
    std::cout << a[i] << std::endl;
  }

  std::cout << sum(a, 10) << std::endl;

  for (int i = 0; i < 10; i++) {
    std::cout << b[i] << std::endl;
  }
  return 0;
}
