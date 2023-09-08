#include <iostream>

int main() {
  int numero = 0;
  int soma = 0;
  int teste_input = 1;
  
  while(teste_input != 0){
    std::cin >> teste_input;
    numero = numero + teste_input;
  }
  std::cout << numero;

  return 0;
}