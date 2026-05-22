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

# Exercício 3
### Ler o sexo e a altura. Calcular o peso ideal: Masculino: 72,7 × altura - 58 / Feminino: 62,1 × altura - 44,7. Criar uma função para cada caso.

```cpp

/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 12/05/2026
   Finalidade: Ler o sexo e a altura.
               Calcular o peso ideal:
                 Masculino: 72,7 × altura - 58
    '            Feminino: 62,1 × altura - 44,7
               ➡️ Criar uma função para cada caso.
*/

#include <iostream>
#include <string>
using namespace std;

int pesoIdealHomem(float altura);
int pesoIdealMulher(float altura);


int main() {
    
    string sexo;
    int peso;
    float altura;        

    do {
        cout << "Digite seu sexo (homem ou mulher): ";
        cin >> sexo;
    } while (sexo != "homem" && sexo != "mulher");
    
    cout << "altura (em cm): ";
    cin >> altura;
    
    cout << "seu peso: ";
    cin >> peso;
    
    if(sexo == "homem"){
        cout << "peso ideal: " << pesoIdealHomem(altura);
    } else if (sexo == "mulher"){
        cout << "peso ideal: " << pesoIdealMulher(altura);
    }
    


    return 0;
}

int pesoIdealHomem(float altura) {
    float pesoIdeal = (72.7 * (altura / 100.0) - 58);
    return pesoIdeal;
}

int pesoIdealMulher(float altura) {
    float pesoIdealMulher = (62.1 * (altura / 100) - 44.7);
    return pesoIdealMulher;
}


```

---

# Exercício 4
### Ler dois números inteiros e calcular: Adição, Subtração, Multiplicação, Divisão. Criar uma função para cada operação.

```cpp

/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: //2026
   Finalidade: Ler dois números inteiros e calcular:
                Adição
                Subtração
                Multiplicação
                Divisão
                Criar uma função para cada operação.

 
*/

#include <iostream>
using namespace std; 

//assinaturas

void soma(float numero, float numeroOperador);
void divisao(float numero, float numeroOperador);
void subtracao(float numero, float numeroOperador);
void multiplicacao(float numero, float numeroOperador);

int main() {
    
    float numero;
    float numeroOperador;
    
    cout << "digite um numero: ";
    cin >> numero;
    
    cout << "digite o outro da operação: ";
    cin >> numeroOperador;
    
    
    soma(numero, numeroOperador);
    divisao(numero, numeroOperador);
    subtracao(numero, numeroOperador);
    multiplicacao(numero, numeroOperador);   
    
    return 0;
}



void soma(float numero, float numeroOperador ){

    
    int soma = numero + numeroOperador;
    
    cout << "soma: " << soma << endl;

}


void subtracao(float numero, float numeroOperador ){

    
    int soma = numero - numeroOperador;
    
    cout << "subtracao: " << soma << endl;

}


void divisao(float numero, float numeroOperador ){

    
    int soma = numero / numeroOperador;
    
    cout << "divisao: " << soma << endl;
}

void multiplicacao(float numero, float numeroOperador ){

    
    int soma = numero * numeroOperador;
    
    cout << "multiplicacao: " << soma << endl;

}

```

---

# Exercício 5
### Ler uma palavra. Verificar se é palíndromo. Criar uma função que retorne verdadeiro ou falso.

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data:21/05/2026
   Finalidade:  Ler uma palavra.
				Verificar se é palíndromo.
				Criar uma função que retorne verdadeiro ou falso.
*/


//assinaturas
bool verif(string palavra, string palavraInvertida);
//



int main() {	
	string palavra;
	string palavraInvertida;
	cout << "digite uma palavra (NAO PODE FRASE): ";
	cin >> palavra;
			
	palavraInvertida = palavra;	
	reverse(palavraInvertida.begin(), palavraInvertida.end());
	
	
	if (verif(palavra, palavraInvertida) == true){
		cout << "eh um palindromo";
	} else if (	verif(palavra, palavraInvertida) == false){
		cout << "n eh um palindromo";
	}

 return 0;	
}

bool verif(string palavra, string palavraInvertida){
	if (palavra == palavraInvertida){
    	return true;
    } else {
    	return false;
    }
}

```

---

# Exercício 6
### Ler um número. Exibir o dia da semana correspondente. Criar uma função para essa verificação.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade: Ler um número.
               Exibir o dia da semana correspondente.
               Criar uma função para essa verificação.


*/


#include <iostream>
using namespace std;

//assinaturas
void verifDias();


int main() {

    
    verifDias();
    
    return 0;
}

void verifDias(){
    int dia;
    int verif;
    int diaDHj;
    bool divido = false;
    
    cout << "q dia é hj: ";
    cin >> diaDHj;
    cout << "dia q vc quer: ";
    cin >> dia;
    

      
        if ((diaDHj + dia) % 7 == 0){
            cout << "segunda" << endl;
            divido = true;
            
        }else if ((diaDHj + dia) % 7 == 1){
            cout << "terca" << endl;
            divido = true;
        }else if ((diaDHj + dia) % 7 == 2){
            cout << "quarta" << endl;
            divido = true;
        }else if ((diaDHj + dia) % 7 == 3){
            cout << "quinta" << endl;
            divido = true;
        
        }else if ((diaDHj + dia) % 7 == 4){
            cout << "sexta" << endl;
            divido = true;
        }else if ((diaDHj + dia) % 7 == 5){
            cout << "sabado" << endl;
            divido = true;
        
        }else if ((diaDHj + dia) % 7 == 6){
            cout << "domingo" << endl;
        } 
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

# Exercício 12
### Ler 15 números em um vetor. Contar e exibir: quantidade de pares, quantidade de ímpares


```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 07/05/2026
   Finalidade:  Ler 15 números em um vetor.
                Contar e exibir:

                Quantidade de pares
                Quantidade de ímpares
*/


#include <iostream>
using namespace std;



int main() {
    //Declaracao de variaveis/vetor
    int nums[15];
    int entrada;
    int somaPar = 0, somaImpar = 0;

    //Laço de repeticao para ler os 15 numeros e guardar em um vetor
    for(int i = 0; i < 15; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> entrada;

        nums[i] = entrada;
    }

    for (int i = 0; i < 15; i++)
    {
        if(nums[i] % 2 == 0){
            somaPar += 1;
        }else{
            somaImpar += 1;
        }
    }
    
    cout << "São " << somaImpar << "numeros impares" << endl;
    cout << "São " << somaPar << "numeros pares" << endl;
    return 0;
}

```
---

# Exercício 13
### Ler 20 letras em um vetor. Ler uma letra e contar quantas vezes ela aparece.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 12/05/2026
   Finalidade:  Ler 20 letras em um vetor.
                Ler uma letra e contar quantas vezes ela aparece.
*/


#include <iostream>
#include <string>
using namespace std;



int main() {
    //Definindo variaveis e arrays
    char arr[20];
    int qntsVezes;
    char letra;
    // Laço de repetição para ler as letras no array
    for(int i = 0; i < 20; i++){
        cout << "Digite a letra " << i+1 << ": ";
        cin >> arr[i];
    }
    //Ler a letra para contar
    cout << "Digite a letra para contar: ";
    cin >> letra;
    
    //Laço de repetição para contar quantas vezes a letra aparece
    for (int i = 0; i < 20; i++) {
        if (arr[i] == letra) {
            qntsVezes++;
        }
    }
    cout << "";
    return 0;
}

```

---

# Exercício 14
### Ler 10 nomes em um vetor. Ordenar em ordem decrescente e exibir em ordem crescente.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:	Ler 10 nomes em um vetor.
				Ordenar em ordem decrescente e exibir em ordem crescente.
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	//Definindo o array
	string nomes[10];
	
	// Laço de repetição para ler os nomes
	for(int i = 0; i < 10; i++){
		cout << "Digite o nome " << i + 1 << ": ";
		cin >> nomes[i];
		
	}
	//Sort para ordenar a array
	sort(nomes, nomes + 10, greater<string>());

	//Laço de repetição para mostrar cada elemento do array na ordem
	for(int i = 9; i >= 0; i--){
	    cout <<  nomes[i] << endl;
	}
	
	
    return 0;
}

```

---

# Exercício 15
### Ler 20 números em um vetor. Exibir o índice do primeiro número negativo.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:  Ler 20 números em um vetor.
                Exibir o índice do primeiro número negativo.
*/


#include <iostream>
using namespace std;



int main() {
    //Criacao do vetor(array)
    int arr[20];


    //Laço de repetição para ler os 20 numeros
    for(int i = 0; i < 20; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    //Laço de repetição para achar o primeiro numero negativo
    for(int i = 0; i < 20; i++){
        int numero = arr[i];
        if(numero < 0){
            cout << "O indice do primeiro numero negativo eh: " << i;
        }
    }




    return 0;
}

```

---

# Exercício 16
### Ler 15 números em um vetor. Exibir o índice do menor valor e do maior valor.

```cpp
/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 21/05/2026
   Finalidade:  Ler 15 números em um vetor.
                Exibir o índice:
                    Do menor valor
                    Do maior valor 
*/


#include <iostream>
using namespace std;



int main() {
    //Criacao do vetor (array) e variaveis
    int indiceMenor = 0;
    int indiceMaior = 0;
    int arr[15];

    //Laço de repetição para ler os 15 numeros
    for(int i = 0; i < 15; i++){
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Laço de repetição para verificar o menor e maior numero
    for(int i = 1; i < 15; i++){
        if(arr[i] < arr[indiceMenor]){
            indiceMenor = i;
        }
        if(arr[i] > arr[indiceMaior]){
            indiceMaior = i;
        }
    }

    // Cout nos indices
    cout << "O indice do menor valor eh: " << indiceMenor << " (valor: " << arr[indiceMenor] << ")" << endl;
    cout << "O indice do maior valor eh: " << indiceMaior << " (valor: " << arr[indiceMaior] << ")" << endl;

    return 0;
}

```