#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int mat[100][100];
    int l, c;
    int N, M;
    int dimensao;
    int quant_um = 0;
    int area_total;
    
    cin >> N >> M >> dimensao;
    
    for(l=0; l<N; l++){
        for(c=0; c<M; c++){
            cin >> mat[l][c];
        }
    }
    
    for(l=0; l<N; l++){
        for(c=0; c<M; c++){
            if(mat[l][c] == 1){
                quant_um++;
            }
        }
    }
    
    area_total = quant_um*pow(dimensao, 2);
    
    cout << "AREA = " << area_total << " mm^2" << endl;
    
    return 0;
}