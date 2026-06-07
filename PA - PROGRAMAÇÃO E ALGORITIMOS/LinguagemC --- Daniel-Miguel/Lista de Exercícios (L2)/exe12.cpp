/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 07/06/2026
  Ler 15 números em um vetor.
  Contar e exibir:
  Quantidade de pares
  Quantidade de ímpares
*/
#include <iostream>
using namespace std;

int main() {
    int numeros[15];
    int pares = 0;
    int impares = 0;

    // vetor (for)
    for (int i = 0; i < 15; i++) { //qq vai rola
        cout << "Digite o numero " << i+1 << ": ";//num = i
        cin >> numeros[i];
    }

    // oq é par e oq é impar
    for (int i = 0; i < 15; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Par: "   << pares   << endl;
    cout << "Impar: " << impares << endl;

    return 0;
}
