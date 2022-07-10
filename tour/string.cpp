#include <iostream>
#include <string>

int main() {
  std::string s = "Hello, World!";
  std::cout << s << std::endl;


  // sequencia de caracteres
  for (auto c : s) {
    std::cout << c;
  }
  std::cout << std::endl;

  /* string e uma classe de dados
     Portanto possui muitos metodos
  */
  s.push_back(' ');
  s.replace(0, 5, "Hola");
  s.append("I'm a string");

  std::cout << s << std::endl;

  return 0;
}
