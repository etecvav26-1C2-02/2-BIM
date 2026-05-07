/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 04/05/2026
   Finalidade: Ler vários números até que seja digitado um número negativo. Calcular e exibir a soma desses números.
 /*
using namespace std;
#include <iostream>

int main() {
    int numero, soma = 0 ;
    
    do {
        cout << "escreva o numero: ";
        cin >> numero;

        if (numero >= 0) {
          
            soma = soma + numero;
        }
        
 } while (numero >= 0);
      
 cout << "A soma é:  " << soma << endl;
 
    return 0;
}
