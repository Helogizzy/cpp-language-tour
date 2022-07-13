// exemplo de utilizacao de structs em c++
#include <iostream>

/* structs sao definidas com a palavra reservada struct
   Note a utilizacao da palavra chave using para a definicao do tipo
*/

using Point = struct {
  int x;
  int y;
};

int main() {
  Point p;
  p.x = 10;
  p.y = 20;
  std::cout << p.x << " " << p.y << std::endl;
  return 0;
}
