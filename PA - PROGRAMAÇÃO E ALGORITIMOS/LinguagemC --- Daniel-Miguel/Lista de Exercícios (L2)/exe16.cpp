/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 11/06/2026
  Ler 15 números em um vetor.
  Exibir o índice:
  Do menor valor
  Do maior valor
*/
#include <iostream>
using namespace std;

int main() {
    int numeros[15];

    for (int i = 0; i < 15; i++) {       //aumenta o num c os loop
        cout << "Digite o numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    
    int idxMenor = 0;
    int idxMaior = 0;

    for (int i = 1; i < 15; i++) {                    // comeca em 1
        if (numeros[i] < numeros[idxMenor]) {
            idxMenor = i;                             // menor
        }
        if (numeros[i] > numeros[idxMaior]) {
            idxMaior = i;                             // maior
        }
    }

    cout << "Indice do menor valor: " << idxMenor << " (valor " << numeros[idxMenor] << ")" << endl;
    cout << "Indice do maior valor: " << idxMaior << " (valor " << numeros[idxMaior] << ")" << endl;

    return 0;
}
