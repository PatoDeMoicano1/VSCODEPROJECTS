#include <iostream>
using namespace std;

struct aluno
{
    int matricula;
    string nome;
    int idade;
};

aluno cria_aluno()
{
    aluno a;
    cin >> a.matricula;
    cin >> a.nome;
    cin >> a.idade;

    return a;
}

int busca_binaria(aluno alunos[], int n, int matricula)
{
    int inicio = 0;
    int fim = n - 1;

    for (; inicio <= fim;)
    {
        int meio = inicio + (fim - inicio) / 2;

        if (alunos[meio].matricula == matricula)
        {
            return meio;
        }
        else if (alunos[meio].matricula < matricula)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

    return -1;
}

int main()
{
    const int tamanhoDoVetor = 4;
    aluno alunos[tamanhoDoVetor];

    for (int i = 0; i < tamanhoDoVetor; ++i)
    {
        cout << "digite os dados do aluno " << i + 1 << ":" << endl;
        alunos[i] = cria_aluno();
    }

    int matriculaBuscada;
    cout << "digite a matricula a ser buscada: ";
    cin >> matriculaBuscada;

    int posicaoEncontrada = busca_binaria(alunos, tamanhoDoVetor, matriculaBuscada);

    if (posicaoEncontrada != -1)
    {
        cout << "aluno encontrado na posicao " << posicaoEncontrada << endl;
        cout << "matricula: " << alunos[posicaoEncontrada].matricula << ", nome: " << alunos[posicaoEncontrada].nome << ", idade: " << alunos[posicaoEncontrada].idade << endl;
    }
    else
    {
        cout << "aluno nao encontrado." << endl;
    }

    return 0;
}

/* 
   A questão numero 2) não é possivel, e nem a questão numero 3), suas justificativas são as mesmas,
   Ambas não são possiveis porque o unico vetor ordenado que é apresentado no enunciado é a matricula, portanto não
   é possivel fazer a busca binaria pelas variaveis de idade e nome. "Sabe-se que um aluno pode ser definido por seu nome,
   matrícula e idade. Considere que os alunos foram cadastrados em um vetor com N alunos, ordenados em ordem crescente pelas
   suas matrículas.Sabe-se que um aluno pode ser definido por seu nome, matrícula e idade.
   Considere que os alunos foram cadastrados em um vetor com N alunos, ordenados em ordem crescente pelas suas matrículas." 
*/