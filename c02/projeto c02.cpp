#include <iostream>
#include <cstring>

using namespace std;

struct dadosF
{
    
    char name[100];
    char gender[50];
    char director[100];
    float notes[1000];
    int indicationGroup;

};

struct dadosU
{

    char username[100];
    char password[100];
    int indicationGroup;

};

void designScreen()
{
  cout << "LLLLLLLLLLL                                                      iiii   iiii                       " << endl;
  cout << "L:::::::::L                                                     i::::i i::::i                      " << endl;
  cout << "L:::::::::L                                                      iiii   iiii                       " << endl;
  cout << "LL:::::::LL                                                                          +++++++       " << endl;
  cout << "  L:::::L              uuuuuu    uuuuuu    mmmmmmm    mmmmmmm  iiiiiiiiiiiiii        +:::::+       " << endl;
  cout << "  L:::::L              u::::u    u::::u  mm:::::::m  m:::::::mmi:::::ii:::::i        +:::::+       " << endl;
  cout << "  L:::::L              u::::u    u::::u m::::::::::mm::::::::::mi::::i i::::i  +++++++:::::+++++++ " << endl;
  cout << "  L:::::L              u::::u    u::::u m::::::::::::::::::::::mi::::i i::::i  +:::::::::::::::::+ " << endl;
  cout << "  L:::::L              u::::u    u::::u m:::::mmm::::::mmm:::::mi::::i i::::i  +:::::::::::::::::+ " << endl;
  cout << "  L:::::L              u::::u    u::::u m::::m   m::::m   m::::mi::::i i::::i  +++++++:::::+++++++ " << endl;
  cout << "  L:::::L              u::::u    u::::u m::::m   m::::m   m::::mi::::i i::::i        +:::::+       " << endl;
  cout << "  L:::::L         LLLLLu:::::uuuu:::::u m::::m   m::::m   m::::mi::::i i::::i        +:::::+       " << endl;
  cout << "LL:::::::LLLLLLLLL:::::u:::::::::::::::um::::m   m::::m   m::::i::::::i::::::i       +++++++       " << endl;
  cout << "L::::::::::::::::::::::Lu:::::::::::::::m::::m   m::::m   m::::i::::::i::::::i                     " << endl;
  cout << "L::::::::::::::::::::::L uu::::::::uu:::m::::m   m::::m   m::::i::::::i::::::i                     " << endl;
  cout << "LLLLLLLLLLLLLLLLLLLLLLLL   uuuuuuuu  uuummmmmm   mmmmmm   mmmmmiiiiiiiiiiiiiii                     " << endl;

  cout << "+=============+" << endl;
  cout << "+             +" << endl;
  cout << "+             +" << endl;
  cout << "+    Log In   +" << endl;
  cout << "+      or     +" << endl;
  cout << "+   Register  +" << endl;
  cout << "+             +" << endl;
  cout << "+             +" << endl;
  cout << "+=============+" << endl;
}

int userDecision()
{
 
    char userInput[10];
    char Login[10] = {"Login"};
    char Register[10] = {"Register"};
    int i = 0;
    int decision;

 while(i == 0) {

        cin.getline(userInput,10);

        if(strcmp(userInput, Register) == 0)
        {
            decision = 0;
            i++;
        }
        else if(strcmp(userInput, Login) == 0)
        {
            decision = 1;
            i++;
        }
        else {
            cout << "Digite Login ou Register" << endl;
        }
    }

    return decision;
}


int main(){

    int decision;

    designScreen();

    cout << "Bem vindo ao Lumii+!" << endl;
    cout << "Digite Login ou Register." << endl;

    decision = userDecision();
    
    if (decision == 0)
    {
        cout << "cadastre-se!" << endl;
    }
    else if (decision == 1)
    {
        cout << "entre!" << endl;
    }


}
