#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	ofstream arq;
	char nomearq[100];;
	int num;
	

	cin.getline(nomearq,100);
	
	arq.open(nomearq, ofstream::out);
    
    while(num != 0)
	{
        cin >> num
    }
	arq << nomefilm << endl;
	arq << ano << endl;
	
	arq.close();
	
  return 0;
}