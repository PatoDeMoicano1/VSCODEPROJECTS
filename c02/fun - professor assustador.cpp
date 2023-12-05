#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[100], int nAlunos) {
    int soma = 0;
    int i;
    for ( i = 0; i < nAlunos; i++) {
        soma += notas[i];
    }
    float media = (float)soma / nAlunos;
    return media;
}

int main (){

    int nAlunos;
    int i;
    float resultado;
    cin >> nAlunos;

    int notas[100];
    for (i = 0; i < nAlunos; i++)
    {
        cin >> notas[i];
    }
    resultado = media(notas, nAlunos);

    cout << "Media da turma = " << fixed << setprecision(2) << resultado << endl;

    return 0;
}