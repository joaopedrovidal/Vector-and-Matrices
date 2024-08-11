#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, menorNome;
    bool primeiroNome = true;

    while (true) {
        cout << "Digite um nome (ou aperte Enter para finalizar): ";
        getline(cin, nome);

        if (nome.empty()) {
            break;
        }

        if (primeiroNome || nome < menorNome) {
            menorNome = nome;
            primeiroNome = false;
        }
    }

    if (!menorNome.empty()) {
        cout << "O nome lexicograficamente menor é: " << menorNome << endl;
    } else {
        cout << "Nenhum nome foi inserido." << endl;
    }

    return 0;
}

