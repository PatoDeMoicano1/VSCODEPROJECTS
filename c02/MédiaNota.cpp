#include <iostream>
using namespace std;

int main (){
	
	int notas[3];
	float media;
	int soma = 0;
	int i;
	
	// lendo notas
	for(i=0;i<3;i++){
		cin >> notas[i];
    
	// calculando e mostrando a media
			soma += notas[i];
	}
				media = (float) soma / i;
			cout << "media = " << media << endl;
				
			
				
	return 0;
}