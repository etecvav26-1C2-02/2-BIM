# Exercício 1
### Ler um número inteiro, exibir a soma dos números ímpares até o número lido e criar uma função que retorne verdadeiro para números ímpares.

```
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 07/05/2026
   Finalidade: Ler um número. Exiba a soma de ímpares de zero até o número lido. Criar uma função que retorne verdadeiro para números ímpares.
*/





#include <iostream>

using namespace std;

bool isImpar(int num2);

int main(){
    int num, somaImpar = 0;
    cout << "Digite um numero: ";
    cin >> num;
    
    
    
    for(int i = 0; i <= num; i++){
        if(i % 2 != 0)
        somaImpar += i;
        cout << "o numero: " << i << " é: "<< boolalpha;
        cout << isImpar(i) << endl;

        
        
    }

    cout << "A soma dos impar é: " << somaImpar;

    
    
    return 0;
}

bool isImpar(int num2){
    if(num2 % 2 != 0){
        return true;
    } else {
        return false;
    }
}





---
