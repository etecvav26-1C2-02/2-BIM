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
