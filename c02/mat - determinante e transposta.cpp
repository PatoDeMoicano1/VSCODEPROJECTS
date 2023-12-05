#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float mat[2][2];
    float det;
	float nLinhas = 2; // # linhas
	float nColunas = 2; // # colunas
	int n, m; // contador para as linhas e colunas
	int i;

	for (n = 0; n < nLinhas; n++)
	{
		for (m = 0; m < nColunas; m++)
			cin >> mat[n][m];
		cout << endl;
	}

	// mostrando a matriz por linhas
    cout << "M = [";
    for (n = 0; n < nLinhas; n++)
    {
        for (m = 0; m < nColunas; m++)
        {
            cout << fixed << setprecision(4) << mat[n][m];
            if (m < nColunas - 1)
                cout << " ";
        }
        if (n < nLinhas - 1)
            cout << " ; ";
    }
    cout << "]" << endl;

    det = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    cout << "Determinante de M = " << fixed << setprecision(4) << det << endl;


	// para fazer a transposta troque o for de linhas pelo de coluna;

    cout << "Transposta de M = [";
    for (m = 0; m < nColunas; m++)
    {
        for (n = 0; n < nLinhas; n++)
        {
            cout << fixed << setprecision(4) << mat[n][m];
            if (n < nLinhas - 1)
                cout << " ";
        }
        if (m < nColunas - 1)
            cout << " ; ";
    }
    cout << "]" << endl;

	return 0;
}