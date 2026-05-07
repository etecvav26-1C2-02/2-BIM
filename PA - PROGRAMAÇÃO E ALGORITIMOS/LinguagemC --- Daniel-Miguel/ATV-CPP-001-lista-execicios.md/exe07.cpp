/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 07/05/2026
   Finalidade: Ler um número para a parada final e outro número que representa um múltiplo. Exibir os múltiplos do número lido de 1 até o número final lido.
*/
#include <iostream>
using namespace std;

int main() {
int pessoas;

float media , altura , soma=0.0;

cout<<"Quantas pessoas são? ";
cin>> pessoas;

for(int i = 1; i <= pessoas; i++){
    cout<< "Qual a altura da pessoa " << i << ": ";
    cin >> altura;
    soma += altura;
}

media = soma / pessoas;
cout<< "A média de altura é " << media << ": ";

    return 0;
}
