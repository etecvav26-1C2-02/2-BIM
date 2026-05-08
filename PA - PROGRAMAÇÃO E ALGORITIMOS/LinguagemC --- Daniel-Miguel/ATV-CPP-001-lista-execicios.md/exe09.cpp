#include <iostream>
using namespace std;

int main() {
int limite;
int a = 0, b = 1, proximo;
do{
     cout << "Digite um numero entre 50 e 100: ";
        cin >> limite;

}while(limite < 50 || limite > 100);

 cout << "Sequencia de Fibonacci ate " << limite << ":" << endl;

for(int i = 0 ; a <= limite;i++){
   cout << a << " ";
        proximo = a + b;
        a = b;
        b = proximo;
}

    return 0;
}
