#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vetor(10);

    for (int i = 0; i < 10 ; i++) {
        cout << "Digite numero " << i << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < 10 ; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    cout << "Vetor resultante:" << endl;
    for (int i = 0; i < 10 ; i++) {
        cout << "vetor[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}
