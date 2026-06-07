/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 07/06/2026
  Exibir o dia da semana correspondente.
*/
#include <iostream>
using namespace std;

const double PI = 3.14159265;  // constante 

// Calcula a area 
double area(double raio) {
    return PI * raio * raio; // formula 
}

int main() {
    double soma;  
    double raio;

    for (int i = 1; i <= 5; i++) { //oq vai rolA NO LOOP
        cout << "Digite o raio do circulo " << i << ": ";
        cin >> raio;
        soma = soma + area(raio);  // acumula a area de cada circulo
    }

    cout << "Soma das areas dos 5 circulos: " << soma << endl;
    return 0;
}
