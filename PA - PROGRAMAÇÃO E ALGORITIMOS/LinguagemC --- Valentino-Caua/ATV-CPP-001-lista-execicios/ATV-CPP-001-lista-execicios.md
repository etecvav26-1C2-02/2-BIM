# Exercício 1
### Ler um número inteiro. Verificar e exibir se o número é primo.

```C++

/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 23/04/2026
   Finalidade: Ler um número inteiro. Verificar e exibir se o número é primo.
*/

#include <iostream>

using namespace std;

int main() {
    int numero;
    int divisores = 0;

    cout << "Digite seu número: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "O número " << numero << " não é primo." << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            cout << "O número " << numero << " é primo!" << endl;
        } else {
            cout << "O número " << numero << " não é primo." << endl;
        }
    }

    return 0;
}

```
---

# Exercício 5
### Ler um número para a parada final e outro número que representa um múltiplo. Exibir os múltiplos do número lido de 1 até o número final lido.


```C++
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 23/04/2026
   Finalidade: Ler um número para a parada final e outro número que representa um múltiplo. Exibir os múltiplos do número lido de 1 até o número final lido.
*/

#include <iostream>
using namespace std;

int main() {
    int numeroFinal, multiplo;
    cout << "Digite o número para a parada final: ";
    cin >> numeroFinal;
    cout << "Digite o número que representa um múltiplo: ";
    cin >> multiplo;

    for(int i = 1; i <= numeroFinal; i++) {
        if(i % multiplo == 0) {
            cout << i << "\n";
        }
    }
    return 0;
}

```
---
# Exercício 6
### Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos.

```C++
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos.
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
```

# Exercício 7
### Ler a quantidade de pessoas e ler a altura dessas pessoas. Calcular e exibir a altura média de todas as pessoas.

```C++
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler a quantidade de pessoas e ler a altura dessas pessoas. Calcular e exibir a altura média de todas as pessoas.


*/

#include <iostream>
using namespace std;

int main() {
    int quantidadePessoas;
    float altura, somaAltura = 0.0, alturaMedia;
    cout << "Digite a quantidade de pessoas: ";
    cin >> quantidadePessoas;
    for (int i = 1; i <= quantidadePessoas; i++){
        cout << "Digite a altura da pessoa" << i << ": " << endl;
        cin >> altura;
        somaAltura += altura;
    }
    alturaMedia = somaAltura / quantidadePessoas;
    cout << "A altura média das pessoas é: " << alturaMedia << endl;
    return 0;
}

```





