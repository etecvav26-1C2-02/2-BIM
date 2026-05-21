// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int ordem() {
    int num[5];
    for (int i = 0; i < 5; i++) {
        cout << "digite o numero" << "[" << i << "]" << endl;
        
        cin >> num[i];
    }
    if (num[0] < num[1] and num[1] < num[2] and num[2] < num[3] and num[3] < num[4]) {
        cout << "ordem crescente";
    }  
    else if (num[0] > num[1] and num[1] > num[2] and num[2] > num[3] and num[3] > num[4]) {
        cout << "ordem descrecente";
    }
    else {
        cout << "não ordenada";
    }
    return 0;
}
int main() {
    ordem();
    return 0;
}
