#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int N;
    int i;
    string nome;
    int idade;
    cin >> N;

    for (i = 0; i < N; i++) 
    {
        cin.ignore();
        getline (cin, nome);
        cin >> idade;

        if (idade >= 18) {
            cout << nome << " " << idade << endl;
        }
    }
    return 0;   
}