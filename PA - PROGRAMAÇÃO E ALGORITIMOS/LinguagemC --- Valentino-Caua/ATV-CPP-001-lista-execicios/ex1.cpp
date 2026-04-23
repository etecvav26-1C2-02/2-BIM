/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 26/02/2026
   Finalidade: Ler um número inteiro. Verificar e exibir se o número é primo.
*/



/*
   Autores: Caua Balzaneli, Valentino Hoehne
   Data: 26/02/2026
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
