#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nuns(10);
    vector<int> invnum(10);
    int soma = 0 ;
    cout << "lista 1\n ";
   
    for (int i = 0; i < nuns.size(); i++) {
        cout << "Digite o numero: " << i << ": ";
        cin >> nuns[i];
    }
    
 cout << "lista 2 ";
    for (int i = 0; i < invnum.size(); i++) {
       invnum[i] = nuns[i] * -1;
       cout << "\nvalores invertidos: "<< invnum[i];
       
    }
     for (int i = 0; i < nuns.size(); i++) {
        if(nuns[i] >= 0){
            soma = soma + nuns[i];
        
        }
     }

     
     for (int i = 0; i < invnum.size(); i++) {
        if(invnum[i] >= 0){
            soma = soma + invnum[i];
      
        }
     }
     cout << "\nsomatoria: "<< soma;
  
    return 0;

}
