#include <iostream>
using namespace std;

int main (){
	
	float alturas[3]; // altura em metros
	int maisAlto; // pessoa mais alta
	float maiorAltura = -1; // maior altura
	int i; // contador
	
	// lendo as alturas e armazenando no vetor
	for(i=0;i<3;i++)
		cin >> alturas[i];
	
	// identificando pessoa mais alta
	for(i=0;i<3;i++)
		if (alturas[i] > maiorAltura){
				maiorAltura = alturas[i];
				maisAlto = i;
		}
			cout << "Maior Altura: " << maiorAltura << endl;
			cout << "Mais alto: " << maisAlto << endl;
			
	return 0;
}