// Exemplo de classes em C++
#include <iostream>
using namespace std;

class Pessoa {
public:
  // Construtor
  Pessoa(const string &nome, const int idade);
  // Metodos
  string getNome();
  int getIdade();
  void setNome(const string &nome);
  void setIdade(const int idade);

private:
  // Atributos
  string nome;
  int idade;
};

// Construtor
Pessoa::Pessoa(const string &nome, const int idade) {
  this->nome = nome;
  this->idade = idade;
}

// Funcoes membros
string Pessoa::getNome() { return this->nome; }

int Pessoa::getIdade() { return this->idade; }

void Pessoa::setNome(const string &nome) { this->nome = nome; }

void Pessoa::setIdade(int idade) { this->idade = idade; }

int main () {
  Pessoa pessoa("Joao", 20);

  cout << "Nome: " << pessoa.getNome() << endl;
  cout << "Idade: " << pessoa.getIdade() << endl;

  pessoa.setNome("Maria");
  pessoa.setIdade(30);

  cout << "Nome: " << pessoa.getNome() << endl;
  cout << "Idade: " << pessoa.getIdade() << endl;

  return 0;
}
