#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nuns(20);
   
    for (int i = 0; i < nuns.size(); i++) {
        cout << "Digite o numero: " << i << ": ";
        cin >> nuns[i];
    }
    

    for (int i = 0; i < nuns.size(); i++) {
        if (nuns[i] <0 ) {
            cout << "o número negativo está no índice: " << i;
            break;
        }
    }

    return 0;
}
