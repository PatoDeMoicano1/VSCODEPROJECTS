#include <iostream>
using namespace std;

int main() {
    int vetor[100];
    int j;
    int elemento, posicao = -1;
    int num;
    int i = 0;

    for (i = 0; i < 100; i++) {
        cin >> num;
        if (num == 0) {
            break;
        }
        vetor[i] = num;
    }

    int tamanho = i;

    cin >> elemento;

    for (j = 0; j < tamanho; j++) {
        if (vetor[j] == elemento) {
            posicao = j;
            break;
        }
    }

    if (posicao == -1) {
        cout << "Elemento " << elemento << " nao foi encontrado" << endl;
    } else {
        cout << "Elemento " << elemento << " encontrado na posicao " << posicao << endl;
    }

    return 0;
}

