#include <iostream>
using namespace std;
 
 double pesoM(double altura) { return 72.7 * altura - 58; }
double pesoF(double altura)  { return 62.1 * altura - 44.7; }
 
int main() {
    
    char sexo;
    float altura;
    
    cout << "qual o seu sexo (M/F): " ;
    cin >> sexo;
    
    cout << "qual sua altura: ";
    cin >> altura;
    
    if (sexo == 'M' ){
      cout << "peso ideal: " << pesoM (altura)<< "kg" << endl;
      
    }  
      
    else {
        cout << "peso ideal: " << pesoF (altura) << "kg" << endl;
        
    }

    return 0;
}
