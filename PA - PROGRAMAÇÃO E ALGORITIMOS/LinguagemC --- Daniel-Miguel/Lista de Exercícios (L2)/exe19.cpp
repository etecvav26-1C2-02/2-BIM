#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> result(10);
    vector<int> main(10);
    vector<int> impar(10);
    vector<int> par(10);
    int paror = 0, imparor = 0, total = 0;
   
  for (int i = 0; i < main.size(); i++) {
        cout << "Digite o numero: " << i+1 << ": ";
        cin >> main[i];
        
    if (main[i] % 2 == 0) {
       par[paror] = main[i];
       paror++;
       
    }
    else {
      impar[imparor] = main[i];
      imparor++;
    }
    
}
   for (int i = 0; i < paror; i++) {
       cout << "seu numero par é: ";
        cout << " " << par[i] << endl;
   }
   for (int i = 0; i < imparor; i++) {
       cout << "seu numero impar é: ";
        cout << " " << impar[i] << endl;
   }
   for (int i = 0; i < 5; i++) {
        result[i] = par[i] + impar[i];
        total+= result[i];
        cout << "ordenado ";
        cout << " " << result[i] ;
        if (i == 4) {
            cout << "valor total: " << total ;
        }
   }

  
    return 0;

}
