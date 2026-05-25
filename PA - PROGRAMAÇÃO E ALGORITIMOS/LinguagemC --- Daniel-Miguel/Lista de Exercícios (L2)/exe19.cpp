#include <iostream>
#include <vector>
using namespace std;

// Ordenar
void ordenar(vector<int>& v, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main() {
    vector<int> principal(10);
    vector<int> impar(10);
    vector<int> par(10);
    vector<int> result(10);

    int paror = 0, imparor = 0;

    // ler os valor
    for (int i = 0; i < 10; i++) {
        cout << "Digite o numero " << i+1 << ": ";
        cin >> principal[i];

        if (principal[i] % 2 == 0) {
            par[paror] = principal[i];
            paror++;
        } else {
            impar[imparor] = principal[i];
            imparor++;
        }
    }

    // Ordenar os vetores
    ordenar(par, paror);
    ordenar(impar, imparor);

    // Exibir pares com coluna
    cout << "\n--- Vetor de Pares ---" << endl;
    for (int i = 0; i < paror; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    // Exibir ímpares com coluna
    cout << "\n--- Vetor de Impares ---" << endl;
    for (int i = 0; i < imparor; i++) {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    // Somar par[i] + impar[i]
    int menorTamanho = (paror < imparor) ? paror : imparor;

    cout << "\n--- Vetor Resultado (par + impar) ---" << endl;
    for (int i = 0; i < menorTamanho; i++) {
        result[i] = par[i] + impar[i];
        cout << "result[" << i << "] = " << par[i] << " + " << impar[i]
             << " = " << result[i] << endl;
    }

    return 0;
}
