// exemplo de excessoes
#include <exception>
#include <iostream>
using namespace std;

class myexception : public exception {
  virtual const char *what() const throw() { return "My exception happened"; }
} myex;

int main() {
  // exemplo de excessoes: alocacao de memoria
  try {
    int *myarray = new int[1000];
  } catch (exception &e) {
    cout << "Standard exception: " << e.what() << endl;
  }
  // exemplo de excessoes: excessao personalizada
  try {
    throw myex;
  } catch (exception &e) {
    cout << e.what() << '\n';
  }
  return 0;
}
