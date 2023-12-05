#include <iostream>
using namespace std;

int main(){
    
    float tempos[100];
    float n;
    int posicao;
    float menor;
    int i = 0;
    int j = 0;
    int k = 0;
    
    cin >> n;
    
    while(n != -1){
        tempos[i] = n;
        i++;
        cin >> n;
    }
    
    cout << "Classificacao:" << endl;
    
    for(j=0; j<i; j++){
        
        posicao = -1;
        menor = 1000;
        
        for(k=0; k<i; k++){
            
            if(tempos[k] < menor){
                menor = tempos[k];
                posicao = k;
            }
        }
        cout << posicao << endl;
        tempos[posicao] = 1001;
    }
    
    return 0;
}