/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 11/06/2026
  Ler 20 letras em um vetor.
  Contar as vogais (a, e, i, o, u)
  Armazenar em um vetor de 5 posições e exibir.
*/
#include <iostream>
using namespace std;

int main() {
    char letras[20];
    int cont[5] = {0, 0, 0, 0, 0};
    // cont[0]=A, cont[1]=E, cont[2]=I, cont[3]=O, cont[4]=U

    cout << "Digite 20 letras (uma por vez):" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Letra " << i+1 << ": ";
        cin >> letras[i];
    }

    // funil
    for (int i = 0; i < 20; i++) {
        char c = letras[i];
        if      (c == 'a' || c == 'A') cont[0]++;
        else if (c == 'e' || c == 'E') cont[1]++;
        else if (c == 'i' || c == 'I') cont[2]++;
        else if (c == 'o' || c == 'O') cont[3]++;
        else if (c == 'u' || c == 'U') cont[4]++;
        // se n for vogal ignora
    }

    cout << "\nQuantidade de cada vogal:" << endl;
    cout << "A: " << cont[0] << endl;
    cout << "E: " << cont[1] << endl;
    cout << "I: " << cont[2] << endl;
    cout << "O: " << cont[3] << endl;
    cout << "U: " << cont[4] << endl;

    return 0;
}
