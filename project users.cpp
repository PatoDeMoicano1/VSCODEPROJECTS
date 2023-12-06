#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_USUARIOS = 100;
const int MAX_HABILIDADES = 5;

struct Usuario {
    string nomeUsuario;
    string senha;
    int periodo;
    int matricula;
    string curso;
    string habilidades[MAX_HABILIDADES];
    int respostas[MAX_HABILIDADES];
};

int numUsuarios = 0;

bool usuarioExiste(const Usuario usuarios[], const string& nomeUsuario) {
    for (int i = 0; i < numUsuarios; ++i) {
        if (usuarios[i].nomeUsuario == nomeUsuario) {
            return true;  
        }
    }
    return false;  
}

void registrarUsuario(Usuario usuarios[]) {
    if (numUsuarios >= MAX_USUARIOS) {
        cout << "Limite de usuarios atingido." << endl;
        return;
    }

    Usuario novoUsuario;
    cout << "Digite um nome de usuario: ";
    cin >> novoUsuario.nomeUsuario;

    while (usuarioExiste(usuarios, novoUsuario.nomeUsuario)) {
        cout << "Nome de usuario ja em uso. Tente outro: ";
        cin >> novoUsuario.nomeUsuario;
    }

    cout << "Digite uma senha: ";
    cin >> novoUsuario.senha;

    cout << "Digite o periodo (de 1 a 10): ";
    cin >> novoUsuario.periodo;

    cout << "Digite a matricula (até 6 digitos): ";
    cin >> novoUsuario.matricula;

    cout << "Escolha o curso (GES, GEC, GEA, GEB, GEE, GEP): ";
    cin >> novoUsuario.curso;

    usuarios[numUsuarios] = novoUsuario;
    ++numUsuarios;

    cout << "Usuario registrado com sucesso!" << endl;
}

bool fazerLogin(const Usuario usuarios[], const string& nomeUsuario, const string& senha) {
    for (int i = 0; i < numUsuarios; ++i) {
        if (usuarios[i].nomeUsuario == nomeUsuario && usuarios[i].senha == senha) {
            return true;  
        }
    }
    return false;  
}

void salvarUsuarios(const Usuario usuarios[]) {
    ofstream arquivo("usuarios.txt");

    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return;
    }

    for (int i = 0; i < numUsuarios; ++i) {
        arquivo << usuarios[i].nomeUsuario << " " << usuarios[i].senha << " "
                << usuarios[i].periodo << " " << usuarios[i].matricula << " " << usuarios[i].curso << " ";

        for (int j = 0; j < MAX_HABILIDADES; ++j) {
            arquivo << usuarios[i].habilidades[j] << " " << usuarios[i].respostas[j] << " ";
        }

        arquivo << endl;
    }

    arquivo.close();
}

void carregarUsuarios(Usuario usuarios[]) {
    ifstream arquivo("usuarios.txt");

    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return;
    }

    while (arquivo >> usuarios[numUsuarios].nomeUsuario >> usuarios[numUsuarios].senha
           >> usuarios[numUsuarios].periodo >> usuarios[numUsuarios].matricula >> usuarios[numUsuarios].curso) {

        for (int j = 0; j < MAX_HABILIDADES; ++j) {
            arquivo >> usuarios[numUsuarios].habilidades[j] >> usuarios[numUsuarios].respostas[j];
        }

        ++numUsuarios;
    }

    arquivo.close();
}

// Funções relacionadas à seleção de habilidades

string escolherHabilidade() {
    cout << "Escolha uma atividade complementar:\n";
    cout << "1. Monitoria\n2. Voluntario\n3. Iniciacao Cientifica\n4. Fetin\n5. Estagio\n";

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            return "Monitoria";
        case 2:
            return "Voluntario";
        case 3:
            return "Iniciacao Cientifica";
        case 4:
            return "Fetin";
        case 5:
            return "Estagio";
        default:
            return "Habilidade inválida";
    }
}

int responderPergunta() {
    cout << "Como você avalia sua evolução com essa atividade?" << endl;
    cout << "1 - Muito Negativo\n2 - Razoavelmente Negativo\n3 - Pouco Negativo\n";
    cout << "4 - Neutro\n5 - Pouco Positivo\n6 - Razoavelmente Positivo\n7 - Muito Positivo\n";

    int escolha;
    cin >> escolha;

    if (escolha >= 1 && escolha <= 7) {
        return escolha;
    } else {
        cout << "Opção inválida. Escolha um número de 1 a 7.\n";
        return -1;
    }
}

int main() {
    Usuario usuarios[MAX_USUARIOS];
    bool logado = false;

    while (!logado) {
        cout << "1. Registrar\n2. Login\n3. Sair\n4. Info AC\nEscolha uma opcao: ";

        int escolha;
        cin >> escolha;

        switch (escolha) {
            case 1:
                registrarUsuario(usuarios);
                break;
            case 2:
                {
                    string nomeUsuario, senha;
                    cout << "Digite seu nome de usuario: ";
                    cin >> nomeUsuario;
                    cout << "Digite sua senha: ";
                    cin >> senha;
                    
                    carregarUsuarios(usuarios);

                    if (fazerLogin(usuarios, nomeUsuario, senha)) {
                        cout << "Login bem-sucedido!" << endl;
                        logado = true;
                    } else {
                        cout << "Nome de usuario ou senha incorretos." << endl;
                    }
                }
                break;
            case 3:
                cout << "Saindo..." << endl;
                return 0;
            case 4:
                // Informações sobre atividades complementares
                cout << "=================== Informacoes sobre Atividades Complementares ===================" << endl;
                cout << " " << endl;
                cout << "1. Monitoria: COMUNICACAO (5/5) ADAPTABILIDADE (4/5) PENSAMENTO CRITICO (5/5) CRIATIVIDADE (4/5) AUTONOMIA (5/5) LIDERANCA (5/5) ETICA (5/5) EMPATIA (5/5) RESPONSABILIDADE (5/5) INTELIGENCIA EMOCIONAL (4/5) AUTOGERENCIAMENTO (5/5)" << endl;
                cout << " " << endl;
                cout << "2. Voluntariado: COMUNICACAO (4/5) ADAPTABILIDADE (4/5) PENSAMENTO CRITICO (5/5) CRIATIVIDADE (5/5) AUTONOMIA (4/5) LIDERANCA (4/5) ETICA (5/5) EMPATIA (5/5) RESPONSABILIDADE (5/5) INTELIGENCIA EMOCIONAL (4/5) AUTOGERENCIAMENTO (5/5)" << endl;
                cout << " " << endl;
                cout << "3. Iniciação Cientifica: COMUNICACAO (3/5) ADAPTABILIDADE (3/5) PENSAMENTO CRITICO (5/5) CRIATIVIDADE (4/5) AUTONOMIA (4/5) LIDERANCA (4/5) ETICA (5/5) EMPATIA (4/5) RESPONSABILIDADE (5/5) INTELIGENCIA EMOCIONAL (4/5) AUTOGERENCIAMENTO (5/5)" << endl;
                cout << " " << endl;
                cout << "4. Fetin: COMUNICACAO (5/5) ADAPTABILIDADE (5/5) PENSAMENTO CRITICO (5/5) CRIATIVIDADE (5/5) AUTONOMIA (5/5) LIDERANCA (4/5) ETICA (5/5) EMPATIA (4/5) RESPONSABILIDADE (5/5) INTELIGENCIA EMOCIONAL (5/5) AUTOGERENCIAMENTO (5/5)" << endl;
                cout << " " << endl;
                cout << "5. Estagio: COMUNICACAO (5/5) ADAPTABILIDADE (5/5) PENSAMENTO CRITICO (4/5) CRIATIVIDADE (3/5) AUTONOMIA (4/5) LIDERANCA (3/5) ETICA (4/5) EMPATIA (3/5) RESPONSABILIDADE (5/5) INTELIGENCIA EMOCIONAL (5/5) AUTOGERENCIAMENTO (4/5)" << endl;
                cout << " " << endl;
                cout << "============================================================================" << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    }

    string habilidadeEscolhida = escolherHabilidade();
    int resposta = responderPergunta();

    if (resposta != -1) {
        cout << "Você escolheu a habilidade: " << habilidadeEscolhida << endl;
        cout << "Sua resposta a pergunta: " << resposta << " - ";

        switch (resposta) {
            case 1:
                cout << "Muito Negativo" << endl;
                break;
            case 2:
                cout << "Razoavelmente Negativo" << endl;
                break;
            case 3:
                cout << "Pouco Negativo" << endl;
                break;
            case 4:
                cout << "Neutro" << endl;
                break;
            case 5:
                cout << "Pouco Positivo" << endl;
                break;
            case 6:
                cout << "Razoavelmente Positivo" << endl;
                break;
            case 7:
                cout << "Muito Positivo" << endl;
                break;
        }

        salvarUsuarios(usuarios);
    }

    return 0;
}
