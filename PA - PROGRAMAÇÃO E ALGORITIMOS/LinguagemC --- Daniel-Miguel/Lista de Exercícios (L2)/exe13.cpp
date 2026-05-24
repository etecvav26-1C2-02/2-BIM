#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> letra(20);
    char escolha;
    int quant = 0;

    for (int i = 0; i < letra.size(); i++) {
        cout << "Digite letra " << i << ": ";
        cin >> letra[i];
    }
    cout << "qual letra quer contar: ";
    cin >> escolha;
    for (int i = 0; i < letra.size(); i++) {
        if (letra[i] == escolha ) {
            quant = quant + 1;
        }
    }
    
cout << "\nletra escolhida: " << escolha << "\nrepetições: " << quant << endl;

    return 0;
}
