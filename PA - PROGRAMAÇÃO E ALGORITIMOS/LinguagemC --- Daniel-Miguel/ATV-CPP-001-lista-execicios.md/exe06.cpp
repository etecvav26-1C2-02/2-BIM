/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 07/05/2026
   Finalidade:Ler 10 números. Verificar e exibir o menor e maior número dessa sequência.
 */

#include <iostream>
using namespace std;



int main() {
    int num, soma = 0, multiplicacao = 1;
    
    do {
        cout << "Digite um número: ";
        cin >> num;
        soma += num;
        multiplicacao *= num;
    } while (soma <= 100);
    
    cout << "A multiplicação dos números lidos é: " << multiplicacao << endl;
    
    return 0;
}
