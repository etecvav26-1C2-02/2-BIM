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
	
	string nomes[10];
	
	
	for(int i = 0; i < 10; i++){
		cout << "Digite o numero " << i + 1 << ": ";
		cin >> nomes[i];
		
	}
	
	sort(nomes, nomes + 10, greater<string>());
	
	for(int i = 9; i >= 0; i--){
	    cout <<  nomes[i] << endl;
	}
	
	
    return 0;
}
