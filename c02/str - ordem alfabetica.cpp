#include <iostream>
#include <string>

using namespace std;

int main() {

    string palavra1, palavra2, palavra3;

    cin >> palavra1;
    cin >> palavra2;
    cin >> palavra3;

    string menor, meio, maior;

    if (palavra1 <= palavra2 && palavra1 <= palavra3)
    {
        menor = palavra1;
        if (palavra2 <= palavra3)
        {
            meio = palavra2;
            maior = palavra3;
        }
        else
        {
            meio = palavra3;
            maior = palavra2;
        }

    }
    else if (palavra2 <= palavra1 && palavra2 <= palavra3)
    {
        menor = palavra2;
        if (palavra1 <= palavra3)
        {
            meio = palavra1;
            maior = palavra3;
        }
        else
        {
            meio = palavra3;
            maior = palavra1;
        }
    }
    else
    {
        menor = palavra3;
        if (palavra1 <= palavra2)
        {
            meio = palavra1;
            maior = palavra2;
        }
        else
        {
            meio = palavra2;
            maior = palavra1;
        }
    }

    cout << menor << " " << meio << " " << maior << endl;

    return 0;
}