#include <iostream>
using namespace std;

int main(){
    
    int mat[5][3];
    int N = 5;
    int M = 3;
    int l, c;
    int confirm_zero = 1;
    int confirm_um = 1;
    int confirm_dois = 1;
    int confirm_tres = 1;
    int confirm_quatro = 1;
    int confirm_cinco = 1;
    int confirm_seis = 1;
    int confirm_sete = 1;
    int confirm_oito = 1;
    int confirm_nove = 1;
    
    
    int mat_zero[5][3] = {
                          {0, 0, 0},
                          {0, 1, 0},
                          {0, 1, 0},
                          {0, 1, 0},
                          {0, 0, 0}};
                          
    int mat_um[5][3] = {
                          {1, 1, 0},
                          {1, 1, 0},
                          {1, 1, 0},
                          {1, 1, 0},
                          {1, 1, 0}};
                          
    int mat_dois[5][3] = {
                          {0, 0, 0},
                          {1, 1, 0},
                          {0, 0, 0},
                          {0, 1, 1},
                          {0, 0, 0}};
                          
    int mat_tres[5][3] = {
                          {0, 0, 0},
                          {1, 1, 0},
                          {0, 0, 0},
                          {1, 1, 0},
                          {0, 0, 0}};
                          
    int mat_quatro[5][3] = {
                          {0, 1, 0},
                          {0, 1, 0},
                          {0, 0, 0},
                          {1, 1, 0},
                          {1, 1, 0}};
                          
    int mat_cinco[5][3] = {
                          {0, 0, 0},
                          {0, 1, 1},
                          {0, 0, 0},
                          {1, 1, 0},
                          {0, 0, 0}};
                          
    int mat_seis[5][3] = {
                          {0, 0, 0},
                          {0, 1, 1},
                          {0, 0, 0},
                          {0, 1, 0},
                          {0, 0, 0}};
                          
    int mat_sete[5][3] = {
                          {0, 0, 0},
                          {1, 1, 0},
                          {1, 1, 0},
                          {1, 1, 0},
                          {1, 1, 0}};
                          
    int mat_oito[5][3] = {
                          {0, 0, 0},
                          {0, 1, 0},
                          {0, 0, 0},
                          {0, 1, 0},
                          {0, 0, 0}};
                          
    int mat_nove[5][3] = {
                          {0, 0, 0},
                          {0, 1, 0},
                          {0, 0, 0},
                          {1, 1, 0},
                          {1, 1, 0}};
    
    for(l=0; l<N; l++){
        for(c=0; c<M; c++){
            cin >> mat[l][c];
        }
    }
    
    for(l=0; l<N; l++){
        for(c=0; c<M; c++){
            if(mat[l][c] != mat_zero[l][c]){
                confirm_zero = 0;
            }
            if(mat[l][c] != mat_um[l][c]){
                confirm_um = 0;
            }
            if(mat[l][c] != mat_dois[l][c]){
                confirm_dois = 0;
            }
            if(mat[l][c] != mat_tres[l][c]){
                confirm_tres = 0;
            }
            if(mat[l][c] != mat_quatro[l][c]){
                confirm_quatro = 0;
            }
            if(mat[l][c] != mat_cinco[l][c]){
                confirm_cinco = 0;
            }
            if(mat[l][c] != mat_seis[l][c]){
                confirm_seis = 0;
            }
            if(mat[l][c] != mat_sete[l][c]){
                confirm_sete = 0;
            }
            if(mat[l][c] != mat_oito[l][c]){
                confirm_oito = 0;
            }
            if(mat[l][c] != mat_nove[l][c]){
                confirm_nove = 0;
            }
        }
    }
    if(confirm_zero == 1){
        cout << "ZERO" << endl;
    }
    
    if(confirm_um == 1){
        cout << "UM" << endl;
    }
    
    if(confirm_dois == 1){
        cout << "DOIS" << endl;
    }
    
    if(confirm_tres == 1){
        cout << "TRES" << endl;
    }
    
    if(confirm_quatro == 1){
        cout << "QUATRO" << endl;
    }
    
    if(confirm_cinco == 1){
        cout << "CINCO" << endl;
    }
    
    if(confirm_seis == 1){
        cout << "SEIS" << endl;
    }
    
    if(confirm_sete == 1){
        cout << "SETE" << endl;
    }
    
    if(confirm_oito == 1){
        cout << "OITO" << endl;
    }
    
    if(confirm_nove == 1){
        cout << "NOVE" << endl;
    }
    
    return 0;
}