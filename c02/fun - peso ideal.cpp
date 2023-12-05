#include<iostream>
#include<iomanip>
using namespace std;

float ideal(float h, char sexo)
{
	float ideal;
	if(sexo == 'M')
		ideal = (72.7 * h - 58);
	else
		ideal = (62.1 * h - 44.7);
		
		return ideal;
}

	int main()
	{
		float altura;
		char sexo;
		float PesoIdeal;
		
		cin>> altura;
		cin>> sexo;
		
		PesoIdeal = ideal(altura, sexo);
		
		cout << fixed << setprecision(2)<< "Peso ideal = " << PesoIdeal << " kg" << endl;
		
		return 0;	
	}