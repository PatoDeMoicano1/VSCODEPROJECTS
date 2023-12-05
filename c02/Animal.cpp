#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string caracteristica1, caracteristica2, caracteristica3;

    cin >> caracteristica1;

    cin >> caracteristica2;

    cin >> caracteristica3;

    if (caracteristica1 == "vertebrado")
    {
        if (caracteristica2 == "ave")
        {
            if (caracteristica3 == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else if (caracteristica3 == "onivoro")
            {
                cout << "pomba" << endl;
            }

        }
        else if (caracteristica2 == "mamifero")
        {
            if (caracteristica3 == "onivoro")
            {
                cout << "homem" << endl;
            }
            else if (caracteristica3 == "herbivoro")
            {
                cout << "vaca" << endl;
            }
        }

    }
    if (caracteristica1 == "invertebrado")
    {
        if (caracteristica2 == "inseto")
        {
            if (caracteristica3 == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else if (caracteristica3 == "herbivoro")
            {
                cout << "lagarta" << endl;
            }
            
        }
        else if (caracteristica2 == "anelidio   ")
        {
            if (caracteristica3 == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else if (caracteristica3 == "onivoro")
            {
                cout << "minhoca" << endl;
            }
        }
    }   

        

    return 0;
}