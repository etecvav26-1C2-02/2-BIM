/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 11/06/2026
  Ler 10 números em um vetor.
Exibir o terceiro menor valor.
*/
#include <iostream>
using namespace std;

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite o numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    //organiza na ordem
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numeros[j] > numeros[j+1]) {  // > para crescente
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    //  [0]=1o menor, [1]=2o menor, [2]=3o menor
    cout << "Terceiro menor valor: " << numeros[2] << endl;

    return 0;
}
