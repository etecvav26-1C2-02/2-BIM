/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 05/06/2026
   Finalidade:Ler dois números inteiros e calcular
  Adição
  Subtração
  Multiplicação
  Divisão
*/
#include <iostream>
using namespace std;

double somar(double a, double b) {
    return a + b;
}

double subtrair(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        return a; 
    }
    return a / b;
}

int main() {
    int a, b;  
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;

    cout << a << " + " << b << " = " << somar(a, b) << endl;
    cout << a << " - " << b << " = " << subtrair(a, b) << endl;
    cout << a << " * " << b << " = " << multiplicar(a, b) << endl;
    cout << a << " / " << b << " = " << dividir(a, b) << endl;

    return 0;
}
