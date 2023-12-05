#include <iostream>
using namespace std;

int main(){

    int i;
    int n;
    int like = 0;
    int deslike = 0;
    int votos[10];

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> votos[i];

        if (votos[i] == 1) {
            like++;
        } else if (votos[i] == -1) {
            deslike++;
        }
    }

    if (like > deslike) {
        cout << "A maioria gostou" << endl;
    }  else if (like < deslike){
        cout << "A maioria nao gostou" << endl;
    }  else if (like == deslike){
        cout << "Deu empate" << endl;
    }

    return 0;
}