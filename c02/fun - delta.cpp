#include <iostream>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c){
    return pow(b, 2) - 4*a*c;
}

int main (){

    float a, b , c, delta;
    cin >> a >> b >> c;

    delta = calc_delta(a, b, c);
    cout << "delta = " << delta << endl;
}
