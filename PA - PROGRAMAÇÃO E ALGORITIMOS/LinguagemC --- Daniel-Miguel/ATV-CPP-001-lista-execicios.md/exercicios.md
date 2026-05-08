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
# Potências de 2 em C++

## exercicio 2

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

