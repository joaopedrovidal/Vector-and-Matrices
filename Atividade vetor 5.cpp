#include <iostream>
using namespace std;

int main() {
    int vet1[10];
    int soma = 0;
    int multiplica = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Digite um numero inteiro: " << endl;
        cin >> vet1[i];
    }

    int vet2[10];
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            vet2[i] = vet1[i] * 5;
        } else {
            vet2[i] = vet1[i] + 5;
        }
        cout << "O conteudo do vetor 1 eh: ";
        for (int i = 0; i < 10; i++) {
        }
        cout << vet1[i] << " ";
        cout << endl;
    }
    cout << "O conteudo do vetor 2 eh: ";
    for (int i = 0; i < 10; i++) {
        cout << vet2[i] << " ";
    }
    cout << endl;

    return 0;
}
