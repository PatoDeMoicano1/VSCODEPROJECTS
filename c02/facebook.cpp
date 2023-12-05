#include <iostream>
using namespace std;

int main()
{
	int i;
	int amigos [10];
	int maior = -1;
	int menor = 100000;
	int n;
    
		cin >> n;
		for(i=0;i<n;i++){
		    
			cin >> amigos[i];}
		
		for(i=0;i<n;i++){
				if (amigos[i] > maior)
					maior = amigos[i];
		}
			
		for (i=0;i<n;i++){
			if (amigos[1] < menor)	
				menor = amigos [i];
		}
			cout << "Menor numero de contatos: " << menor << endl;
			cout << "Maior numero de contatos: " << maior << endl;
	return 0;
}