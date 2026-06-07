/*
   Autores: Daniel de Sousa,Miguel Marcelo
   Data: 07/06/2026
  Ler um nome completo.
  Exibir:
  Quantidade de vogais
  Quantidade de consoantes
*/
#include <iostream>
#include <string>
using namespace std;

// definir oq é vogal
bool eVogal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

// Conta as vogais 
int contarVogais(string nome) {
    int total = 0;
    for (int i = 0; i < (int)nome.size(); i++) {
        if (eVogal(nome[i])) {
            total++;
        }
    }
    return total;
}

// Conta as consoantes
int contarConsoantes(string nome) {
    int total = 0;
    for (int i = 0; i < (int)nome.size(); i++) {
        char c = nome[i];
        bool eLetra = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
        if (eLetra && !eVogal(c)) {
            total++;
        }
    }
    return total;
}

int main() {
    string nome;
    cout << "Digite seu nome completo: ";
    getline(cin, nome);  // getline le linha inteira

    cout << "Vogais: "    << contarVogais(nome)    << endl;
    cout << "Consoantes: " << contarConsoantes(nome) << endl;

    return 0;
}
