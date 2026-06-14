/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 11/06/2026
  Ler 10 nomes em um vetor.
  Ordenar em ordem decrescente e exibir em ordem crescente.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[10];

    // 10 nome
    for (int i = 0; i < 10; i++) {
        cout << "Digite o nome " << i+1 << ": ";
        getline(cin, nomes[i]);
    }

  
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (nomes[j] < nomes[j+1]) {  // < p decrescente 
                string temp = nomes[j];
                nomes[j] = nomes[j+1];
                nomes[j+1] = temp;
            }
        }
    }

   
    cout << "\nNomes em ordem crescente:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << nomes[i] << endl;
    }

    return 0;
}
