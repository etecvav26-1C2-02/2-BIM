
#include <iostream>
using namespace std;

int main() {
    int limite, base;
    
    cout << "Numero final: ";
    cin >> limite;
    
    cout << "multiplo: ";
    cin >> base;
    
    cout << "Múltiplos de " << base << " até " << limite << ":" << endl;
    
    for(int i = 1;i <= limite; i++){
    if (i % base == 0){
      cout << i << endl;
        }
    }
    
   
    return 0;
    
}
