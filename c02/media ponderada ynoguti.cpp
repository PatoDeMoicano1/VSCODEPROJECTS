#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float P1, Ex1, Pj1;
    float np1;

    cin >> P1 >> Ex1 >> Pj1;

    np1 = 0.8*P1 + 0.2*pow((Ex1*Pj1),0.5);
    cout << np1 << " media da np1 do aluno" << endl;

    float P2, Ex2, Pj2;
    float np2;

    cin >> P2 >> Ex2 >> Pj2;
    
    np2 = 0.8*P2 + 0.2*pow((Ex2*Pj2),0.5);
    cout << np2 << " media da np2 do aluno" << endl;

    float mediafinal;

    mediafinal = (np1 + np2) /2;
    cout << mediafinal << " media np1 e np2 do aluno" << endl;

    float medianp3;
    float notanp3;
    cin >> notanp3;

    medianp3 = (mediafinal + notanp3) /2;
    cout << medianp3 << " media final (da np3) do aluno" << endl;

    if (mediafinal >= 60.00)
    cout << "parabens vc foi aprovado direto em c02" << endl;
    else if (medianp3 >= 50.00)
    cout << "parabens vc foi aprovado pela np3 em c02" << endl;
    else
    cout << "voce reprovou em c02" << endl;
    return 0;
}