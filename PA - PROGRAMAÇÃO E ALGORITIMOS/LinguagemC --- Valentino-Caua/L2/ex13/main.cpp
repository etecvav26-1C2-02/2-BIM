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
    char arr[20];
    int qntsVezes;
    char letra;
    
    for(int i = 0; i < 20; i++){
        cout << "Digite a letra " << i+1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Digite a letra para contar: ";
    cin >> letra;
    
    
    for (int i = 0; i < 20; i++) {
        if (arr[i] == letra) {
            qntsVezes++;
        }
    }
    cout << ""
    return 0;
}
