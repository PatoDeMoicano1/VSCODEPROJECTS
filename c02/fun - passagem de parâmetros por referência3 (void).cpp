#include <iostream>

using namespace std;

void troca(int &X, int &Y){
    int Z = X;
    X = Y;
    Y = Z;
}

int main(){
    int X;
    int Y;

    cin >> X >> Y;

    troca (X, Y);
    cout << X << endl;
    cout << Y << endl;

    return 0;
}