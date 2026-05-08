# Exercício 1
### Ler um número inteiro, exibir a soma dos números ímpares até o número lido e criar uma função que retorne verdadeiro para números ímpares.

```cpp
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
```

---

# Exercício 2
### Calcular a potência usando repetição e criar uma função para o cálculo.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 24/04/2026
   Finalidade: Calcular a potência usando repetição.
               Criar uma função para o cálculo.
*/
#include <iostream>
#include <cmath>
using namespace std;
int pot();
int main(){
    pot();
}
int pot(){
    int base;
    int expoente;
    int atequal;
    int resultado;
    
    cout << "base: ";
    cin >> base;
    
    cout << "expoente: ";
    cin >> expoente;
    
    for(int i = 1; i <= expoente; i++){
        resultado = pow(base, i);
        cout << base << " ** "<< i << " = "<< resultado << endl;
    }
    
    return 0;
}
```
---
# Exercício 11
### Ler 10 números em um vetor. Substituir números negativos por zero e exibir o vetor.


```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 07/05/2026
   Finalidade:  Ler 10 números em um vetor.
                Substituir números negativos por zero.
                Exibir o vetor.
*/


#include <iostream>
#include <vector>
using namespace std;



int main() {
    //Declaracao de variaveis/vetor
    int nums[10];
    int entrada;


    //Laço de repeticao para ler os 10 numeros e guardar em um vetor
    for(int i = 0; i < 10; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> entrada;

        nums[i] = entrada;
    }
    //Laço de repeticao para verificar se é negativo
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] < 0)
        {
            nums[i] = 0;
        }
        
    }
    
    //Laço de repeticao para printar o vetor
    cout << "\nVetor final: ";
    for (int i = 0; i < 10; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;





    return 0;
}


```
---