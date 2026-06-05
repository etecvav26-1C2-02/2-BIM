/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 05/06/2026
   Finalidade: Ler a base e o expoente. Calcular a potência usando repetição
*/
#include <iostream>
using namespace std;

//oq vai fazer
double potencia(double base, int expoente) {
    double resultado = 1.0;  // valor neutro da multiplicacao
    for (int i = 0; i < expoente; i++) {
        resultado = resultado * base;  // a cada volta, multiplica pela base
    }
    return resultado;
}

int main() {
    double base;
    int expoente;

    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;

    cout << base << " elevado a " << expoente << " = " << potencia(base, expoente) << endl;
    return 0;
}
