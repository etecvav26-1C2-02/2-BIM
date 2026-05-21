
#include <iostream>
#include <cstring>
using namespace std;

int sub(){
    char p[10];
    cout << "qual a palavra: ";
    cin >> p;
    int tamanho = strlen(p);
    
    for (int i = 0; i < tamanho; i++) {
        if (p[i] ==  'a' or p[i] == 'e' or p[i] == 'i' or p[i] == 'o' or p[i] == 'u' or p[i] ==  'A' or p[i] == 'E' or p[i] == 'I' or p[i] == 'O' or p[i] == 'U') {
            p[i] = '*';
        }
    }
    cout << p;
    return 0;
}
int main() {
    sub();
    return 0;
}
