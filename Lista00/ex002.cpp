#include <iostream>

int main() {
  int nota_maior;
  
  int nota1;
  std::cin >> nota1;
  nota_maior = nota1;
  
  int nota2;
  std::cin >> nota2;
  
  if (nota2 > nota_maior){
    nota_maior = nota2;
  }

  int nota3;
  std::cin >> nota3;
  
  if (nota3 > nota_maior){
    nota_maior = nota3;
  }

  
  std::cout << nota_maior;
  
}