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

int nAbaixo(int notas[100], int nAlunos, float media){
    int nAbaixo = 0;
    for (int i = 0; i < nAlunos; i++) {
    if (notas[i] < 60)
    nAbaixo++;
    }
    return nAbaixo;
}
int nAcima(int notas[100], int nAlunos, float media){
    int nAcima = 0;
    for (int i = 0; i < nAlunos; i++) {
    if (notas[i] >= 60)
    nAcima++;
    }
    return nAcima;
}


int main (){

    int nAlunos;
    int abaixo;
    int acima;
    int i;
    float resultado;
    cin >> nAlunos;

    int notas[100];
    for (i = 0; i < nAlunos; i++)
    {
        cin >> notas[i];
    }
    resultado = media(notas, nAlunos);

    for (i = 0; i < nAlunos; i++){
    abaixo = nAbaixo(notas, nAlunos, resultado);
    acima = nAcima(notas, nAlunos, resultado);
    }

    cout << "Media da turma = " << fixed << setprecision(2) << resultado << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;

    return 0;
}