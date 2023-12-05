#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

	int nota[10];
	float media = 0;
	int i;
	float n;
	int acima = 0;
	int abaixo = 0;
	int soma = 0;

	cin >> n;

	for(i = 0; i < n; i++){
		cin >> nota[i];
		soma += nota[i];
	}
	
	for(i = 0; i < n; i++)
		media = (float)soma / n;
	
	for(i = 0; i < n; i++){
		
		if (nota[i] > 60.00)
			acima++;
		else
			abaixo++;
	}

	cout << fixed << setprecision(2) << "Media da turma: " << media << endl;
	cout << "Alunos com nota acima da media: " << acima << endl;
	cout << "Alunos com nota abaixo da media: " << abaixo << endl;
	return 0;
}