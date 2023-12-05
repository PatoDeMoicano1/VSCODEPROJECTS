#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void media(int x, int y, float m){
    m = sqrt( x * y );
}

int main(){

    float m;
    int x;
    int y;

    cin >> x >> y;

    media(x, y, m);

    cout << "Media: " << fixed << setprecision(2) << m << endl;

    return 0;
}