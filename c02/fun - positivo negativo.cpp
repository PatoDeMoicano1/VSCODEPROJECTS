#include <iostream>

using namespace std;

int sinal(int n)
{
    int sinal;
    if (n > 0)
    {
      return 1;  
    }
    else if (n == 0)
    {
        return 0;
    }
    else if (n < 0)
    {
        return -1;
    }
    return sinal;
}

int main(){

    int n;
    cin >> n;
    int resultado = sinal(n);

    if (resultado == 1) {
        cout << "Positivo" << endl;
    } else if (resultado == -1) {
        cout << "Negativo" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}