#include <iostream>
#include <iomanip>

int main() {
    int a, b, c, d, e, f;
    float resultado;
    std::string saida = "Eu sou FERA nas continhas e o resultado é ";

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;
    std::cin >> f;

    resultado = ((a+b)*(c-d)*(e+f)) / 2.0;

    std::cout << saida << std::fixed << std::setprecision(1) << resultado << std::endl;

    return 0;

}