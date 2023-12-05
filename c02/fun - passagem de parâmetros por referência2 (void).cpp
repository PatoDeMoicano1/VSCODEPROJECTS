#include <iostream>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K)
{
    C = 5.00/9.00 * (F - 32);
    K = C + 273.00;
}

int main (){
    float F;
    float C;
    float K;
    cin >> F;

    converte(F, C, K);

    cout << "Celsius: " << fixed << setprecision (2) << C << endl;
    cout << "Kelvin: " << fixed << setprecision (2) << K << endl;
    return 0;
}