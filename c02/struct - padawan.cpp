#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main ()
{

	int n;
	int i;
	string padawan;
	int pontos;
	int maior = 0;
	float media;
	float soma;

	cin >> n;
	cin.ignore();
	for (i = 0; i < n; i++)
	{
		getline(cin, padawan);

		cin >> pontos;

		cin.ignore();

		if (pontos > maior)
		{
			maior = pontos;
			padawan = padawan;
		}

		soma += pontos;

	}
	cout << "Padawan com mais pontos: " << padawan << endl;
	cout << "Pontos: " << pontos << endl;

	media = soma / n;

	cout << fixed << setprecision(2) << "Media da turma: " << media << " pontos" << endl;
	return 0;
}
