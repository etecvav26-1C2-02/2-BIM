/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 12/05/2026
   Finalidade: Ler um número. Exiba a soma de todos os números pares e ímpares de zero até o número lido.
*/

#include <iostream>
using namespace std;


int main() {
    int num;
    int somaImpares = 0;
    
    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        if (i % 2 != 0) {
            cout << "Os num impar é: " << i << endl;
            somaImpares += i;
        }
    }

    
    cout << "Soma dos impares: " << somaImpares << endl;
    return 0;
}
