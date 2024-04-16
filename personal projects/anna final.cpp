#include <iostream>
using namespace std;

int main() {
    float a;
    int n;
    bool senhaCorreta = false;
    int b;
    bool senhaMusicaCorreta = false;

    cout << "Insira a senha" << endl;
    cout << "Obs: e a data do seu aniversario (00.00)" << endl;

    while (!senhaCorreta) {
        cin >> a;

        if (a == 16.05f) {
            senhaCorreta = true;
            cout << "Feliz aniversario meu amor, eu sei que venho deixando a desejar alguns dias pra ca, mas me desculpa" << endl;
            cout << "sei que nao quer desistir da gente, e eu tambem nao, eu te amo muito, te prometo melhorar e" << endl;
            cout << "sempre te dar o melhor de mim, te proporcionar as melhores e unicas aventuras do amor" << endl;
            cout << "voce sabe que esse aniversario e tao especial pra mim quanto pra voce" << endl;
            cout << "nosso primeiro aniversario de um ano, que se tornara muitas decadas juntos amor" << endl;
            cout << "eu fiz esse programa pequeno, que nao demonstra nem 0,000000001% do meu amor por voce" << endl;
            cout << "tive que fazer ele simples porque ainda nao sei muito sobre isso" << endl;
            cout << "eu te amo infinitas vezes amor!!!" << endl;
        } else {
            cout << "Senha incorreta. Tente novamente." << endl;
        }
    }

    cout << "Pressione Enter para continuar...";
    cin.ignore();
    cin.get();

    cout << "Agora voce escolhe, em quantas vidas voce quer que eu te ame? (selecione qualquer numero)" << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Eu te amo" << endl;
    }
    cout << "========================" << endl;

    cout << "Agora preciso da sua ajuda." << endl;
    cout << "Abra o YouTube, canal do jao, videos e clique em 'Em Alta'." << endl;
    cout << "Agora veja em qual posicao esta a nossa musica e coloque apenas o numero em que ela se encontra: " << endl;

    while (!senhaMusicaCorreta) {
        cin >> b;

        if (b == 4) {
            senhaMusicaCorreta = true;
            cout << "eh como ele dizia..." << endl;
            cout << "Essa eu fiz pro nosso amor" << endl;
            cout << "Essa eu fiz pra nos dois bebados" << endl;
            cout << "Dancando numa festa de gente rica e sem graca" << endl;
            cout << "Voce lembra da festa do Danilo? Foi exatamente assim!" << endl;
            cout << "Essa eu fiz pra toda letra do Cazuza" << endl;
            cout << "Que eu decorei porque 'ce disse que gostava" << endl;
            cout << "Essa eu fiz pra sua mae so porque ela eh tao linda" << endl;
            cout << "E sempre sabe o que dizer" << endl;
            cout << "isso lembra exatamente a tia mary amor" << endl;
            cout << "Essa eu fiz pras tuas quedas na calcada" << endl;
            cout << "Sua risada alta, essa eu fiz pra voce!" << endl;
            cout << "essa eu fiz pra nos dois, nosso amor de cinema" << endl;
            cout << "tenho sorte de vc ter me escolhido para viver com voce" << endl;
            cout << "eu te amo muito, e sempre vou te amar" << endl;
            cout << "feliz aniversario amor, aproveite seu dia!" << endl;
        } else {
            cout << "Senha incorreta. Tente novamente." << endl;
        }
        cout << "========================" << endl;
    }
    
    cout << "Pressione Enter para sair...";
    cin.ignore();
    cin.get();

    return 0;
}