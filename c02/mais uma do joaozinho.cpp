#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
    int nAlunos;
    string nomeAluno;
    float n1, n2, n3, n4;
    int i;
    float media;


    cin >> nAlunos;
    cin.ignore();

    for (i = 0; i < nAlunos; i++) {

        getline(cin, nomeAluno);

        cin >> n1 >> n2 >> n3 >> n4;
        cin.ignore();
        
        media = (n1 + 2*n2 + 3*n3 + 4*n4) / 10;
        cout << fixed << setprecision(2) << nomeAluno << ": " << media << endl;
    }

    return 0;
}
}