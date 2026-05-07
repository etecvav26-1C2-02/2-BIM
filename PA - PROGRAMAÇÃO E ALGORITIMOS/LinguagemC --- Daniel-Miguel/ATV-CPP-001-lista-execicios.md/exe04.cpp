

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
