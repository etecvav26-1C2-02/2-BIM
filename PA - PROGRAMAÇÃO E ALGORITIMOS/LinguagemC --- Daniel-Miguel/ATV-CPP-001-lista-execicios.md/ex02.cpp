/*
   Autores: Daniel de Sousa,Miguwl Marcelo
   Data: 04/05/2026
   Finalidade: Verificar se um número inteiro é primo contando a quantidade de divisores.
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
