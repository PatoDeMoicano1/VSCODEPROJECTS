#include <iostream>
using namespace std;

int main(){
    int vetor[11];
    int x;
    int resultado;
    int i;

    cin >> x;
    for(i = 0; i < 11; i++){
        resultado = x * i;
        cout << x << " x " << i << " = " << resultado << endl;
    }
    
    return 0;
}