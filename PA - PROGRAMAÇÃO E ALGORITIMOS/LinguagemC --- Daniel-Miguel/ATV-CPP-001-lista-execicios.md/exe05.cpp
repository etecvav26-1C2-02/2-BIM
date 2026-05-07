/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 07/05/2026
   Finalidade: Ler um número para a parada final e outro número que representa um múltiplo. Exibir os múltiplos do número lido de 1 até o número final lido.
*/
#include <iostream>
using namespace std;

int main() {
    int limite, base;
    
    cout << "Numero final: ";
    cin >> limite;
    
    cout << "multiplo: ";
    cin >> base;
    
    cout << "Múltiplos de " << base << " até " << limite << ":" << endl;
    
    for(int i = 1;i <= limite; i++){
    if (i % base == 0){
      cout << i << endl;
        }
    }
    
   
    return 0;
    
}
