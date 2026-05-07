/*
   Autores: Daniel de Sousa,Miguwl Marcelo
   Data: 04/05/2026
   Finalidade: Verificar se um número inteiro é primo contando a quantidade de divisores.
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
