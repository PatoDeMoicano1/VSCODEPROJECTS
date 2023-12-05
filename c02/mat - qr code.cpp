#include <iostream>
using namespace std;

int main()
{

	float mat[3][3];
	float nLinhas = 3; // # linhas
	float nColunas = 3; // # colunas
	int n, m; // contador para as linhas e colunas
    int i;
    
	for (n = 0; n < nLinhas; n++)
	{
		for (m = 0; m < nColunas; m++)
			cin >> mat[n][m];
	}

	for (n = 0; n < nLinhas; n++)
    {
        for (m = 0; m < nColunas; m++)
            cin >> mat[n][m];
    }

    if (mat[0][0] == 1 && mat[0][1] == 1 && mat[0][2] == 1 && mat[1][0] == 0 && mat[1][1] == 1 && mat[1][2] == 0 && mat[2][0] == 0 && mat[2][1] == 0 && mat[2][2] == 1)
    {
        cout << "MASCULINO" << endl;
    }
    else if (mat[0][0] == 1 && mat[0][1] == 0 && mat[0][2] == 0 && mat[1][0] == 1 && mat[1][1] == 1 && mat[1][2] == 0 && mat[2][0] == 1 && mat[2][1] == 0 && mat[2][2] == 0)
    {
        cout << "FEMININO" << endl;
    }
    else
    {
        cout << "QR code inválido" << endl;
    }

    return 0;
}