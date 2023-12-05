#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int T;
    int i;
    string escolhaA, escolhaB;
    cin >> T;

    for (i = 0; i < T; i++) {
        cin >> escolhaA;
        cin >> escolhaB;

        if (escolhaA == "pedra" && escolhaB == "tesoura")
        {
            cout << "Jogador A" << endl;
        }
        
        else if (escolhaA == "pedra" && escolhaB == "pedra")
        {
            cout << "Empate" << endl;
        }
        
        else if (escolhaA == "pedra" && escolhaB == "papel")
        {
            cout << "Jogador B" << endl;
        }

        else if (escolhaA == "tesoura" && escolhaB == "pedra")
        {
            cout << "Jogador B" << endl;
        }

        else if (escolhaA == "tesoura" && escolhaB == "tesoura")
        {
            cout << "Empate" << endl;
        }

        else if (escolhaA == "tesoura" && escolhaB == "papel")
        {
            cout << "Jogador A" << endl;
        }

        else if (escolhaA == "papel" && escolhaB == "pedra")
        {
            cout << "Jogador A" << endl;
        }
        
        else if (escolhaA == "papel" && escolhaB == "papel")
        {
            cout << "Empate" << endl;
        }

        else if (escolhaA == "papel" && escolhaB == "tesoura")
        {
            cout << "Jogador B" << endl;
        }
    }
    return 0;
}