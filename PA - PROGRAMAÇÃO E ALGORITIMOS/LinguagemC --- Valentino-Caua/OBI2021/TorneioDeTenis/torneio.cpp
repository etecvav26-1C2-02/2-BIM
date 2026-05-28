#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int somaV = 0;
    int somaP = 0;

    for(int i = 0; i < 6; i++){
        char usuario;
        cin >> usuario;
        if(toupper(usuario) == 'V') somaV += 1;
        if(toupper(usuario) == 'P') somaP += 1;
    }

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    if(somaV == 5 || somaV == 6) cout << "1";
    if(somaV == 3 || somaV == 4) cout << "2";
    if(somaV == 1 || somaV == 2) cout << "3";
    if(somaV == 0)                cout << "-1";
    cout << endl;

    return 0;
}