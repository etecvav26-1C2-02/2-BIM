## 📌 Exercício 1 — Verificador de Número Primo

### 💻 Código

```cpp
/*
   Autores: Daniel de Sousa,Miguwl Marcelo
   Data: 04/05/2026
   Finalidade:Leia um número inteiro. Verifique e exiba se o número é primo.
*/
#include <iostream>
using namespace std;

int main() {
	int primo,i;
	bool vprimo = true;
		
	cout << "digite um numero inteiro: ";
	cin >> primo;
	
	if (primo==0 or primo==1){
		cout << "o numero não é primo" ;
	return 0;
	}


for (i = 2; i*i <= primo; i++){
	if (primo % i == 0){		
		vprimo = false;
		break;
	}else{
		vprimo = true;
	}
}
	
	
if(vprimo == false ){
  cout << "seu numero não é primo";
}else{
	cout << "seu numero é primo";
}

return 0;
}
```
## 📌 Exercício 2 — Potências de um Número

### 💻 Código

```cpp
/*
   Autores: Daniel de Sousa,Miguel Marcelo 
   Data: 04/05/2026
   Finalidade: Ler um número inteiro, calcular e exibir separadamente as potências de 2^0 até 2^(esse número).
*/

#include <iostream>
using namespace std;

int main() {
    int n, result = 1;
    cout << "escreva o valor ";
    cin >> n;
    
    for (int i = 0; i <= n; i++){
      cout << "2^ " << i << " = " << result << endl;
      result *= 2;
    }

    
    return 0;
}
```
## 📌 Exercício 3 — Soma de Números Positivos com Classe

### 💻 Código
/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 04/05/2026
   Finalidade: Ler vários números até que seja digitado um número negativo. Calcular e exibir a soma desses números.
 */
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
```
## 📌 Exercício 4 — Ler 10 números. Verificar e exibir o menor e maior número dessa sequência.
### 💻 Código
/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 07/05/2026
   Finalidade:Ler 10 números. Verificar e exibir o menor e maior número dessa sequência.
 */

#include <iostream>
using namespace std;

int main() {
    int numero, menor , maior ;
    cout << "numero 1: ";
    cin >> numero;
    menor = numero ;
    maior = numero;
    
    for (int i = 2; i <= 10; i++) {
        cout << "Número " << i << ": ";
        cin >> numero;
        if (numero < menor) {
        menor = numero;
        }else if (numero > maior){
        maior = numero;
        }
 }
    

    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;
    
    return 0;
}
```

