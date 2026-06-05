/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 05/06/2026
  Exibir o dia da semana correspondente.
*/
#include <iostream>
using namespace std;

void diaSemana(int n) {
    switch (n){
        case 1: cout << "Domingo"; break;
        case 2: cout << "Segunda"; break;
        case 3: cout << "Terça"; break;
        case 4: cout << "Quarta"; break;
        case 5: cout << "Quinta"; break;
        case 6: cout << "Sexta"; break;
        case 7: cout << "Sabado"; break;
        default: cout << "Numero invalido bobão é de um a sete ";
    }
    cout << endl;
}
int main (){
    int n;
    cout <<"Digte um numero de um a sete: ";
    cin >> n;
    diaSemana(n);
     return 0;
}
