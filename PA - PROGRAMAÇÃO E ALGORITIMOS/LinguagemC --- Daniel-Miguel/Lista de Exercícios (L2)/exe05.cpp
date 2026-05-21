#include <iostream>
#include <cstring> 

using namespace std;

int main() {
    char palavra[10];
    cout << "qual e a palavra? ";
    cin >> palavra;
    int tamanho = strlen(palavra);
    bool palindromo = true;

    // O loop 
    for (int i = 0; i < tamanho / 2; i++) {
        // Compara a posição atual com a posição equivalente no final
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = false;
            break; // Se uma letra for diferente, já não é palíndromo
        }
    }

    if (palindromo) {
        cout << "E um palindromo!" << endl;
    } else {
        cout << "Nao e um palindromo." << endl;
    }

    return 0;
}
