/*
   Autores: Daniel de Sousa,Miguwl Marcelo
   Data: 04/05/2026
   Finalidade: Ler um número inteiro, calcular e exibir separadamente as potências de 2^0 até 2^(esse número).
*/

#include <iostream>
using namespace std;

int main() {
    int n, result = 1;
    cout << "escreva o valor ";
    cin >> n;
    
    for (int i = 0; i <= n; i++){
      cout << "2^ " << i << " = " << result << endl;
      result *= 2;
    }

    
    return 0;
}
