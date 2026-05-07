/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 07/05/2026
   Finalidade:Ler a quantidade de pessoas e ler a altura dessas pessoas. Calcular e exibir a altura média de todas as pessoas.
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
