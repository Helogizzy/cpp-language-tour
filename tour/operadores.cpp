#include <iostream>

using namespace std;

int main() {
  // Operadores de atribuicao
  int a = 1, b = 2;

  // Operadores aritmeticos
  cout << a << " + " << b << " = " << a + b << endl;
  cout << a << " - " << b << " = " << a - b << endl;
  cout << a << " * " << b << " = " << a * b << endl;
  cout << a << " / " << b << " = " << a / b << endl;
  cout << a << " % " << b << " = " << a % b << endl;
  cout << a << " ^ " << b << " = " << (a ^ b) << endl;

  // Operadores de atribuicao composta
  cout << "a += b = " << (a += b) << endl;
  cout << "a -= b = " << (a -= b) << endl;
  cout << "a *= b = " << (a *= b) << endl;
  cout << "a /= b = " << (a /= b) << endl;
  cout << "a %= b = " << (a %= b) << endl;
  cout << "a ^= b = " << (a ^= b) << endl;
  cout << "a &= b = " << (a &= b) << endl;
  cout << "a |= b = " << (a |= b) << endl;
  cout << "a <<= b = " << (a <<= b) << endl;
  cout << "a >>= b = " << (a >>= b) << endl;

  // Operadores de incremento e decremento
  cout << "a++ = " << (a++) << endl;
  cout << "++a = " << (++a) << endl;

  // operadores de comparacao
  cout << "a == b = " << (a == b) << endl;
  cout << "a != b = " << (a != b) << endl;
  cout << "a < b = " << (a < b) << endl;
  cout << "a > b = " << (a > b) << endl;
  cout << "a <= b = " << (a <= b) << endl;
  cout << "a >= b = " << (a >= b) << endl;

  // Operadores logicos
  cout << "a && b = " << (a && b) << endl;
  cout << "a || b = " << (a || b) << endl;
  cout << "!a = " << (!a) << endl;

  // Operadores de bitwise
  cout << "a & b = " << (a & b) << endl;
  cout << "a | b = " << (a | b) << endl;
  cout << "a ^ b = " << (a ^ b) << endl;
  cout << "~a = " << (~a) << endl;
  cout << "a << b = " << (a << b) << endl;
  cout << "a >> b = " << (a >> b) << endl;

  // Operador ternario
  cout << "a ? b : c = " << (a ? b : 0) << endl;

  // operadores de cast
  cout << "(int)a = " << (int)a << endl;
  cout << "(double)a = " << (double)a << endl;
  cout << "(char)a = " << (char)a << endl;

  return 0;
}
