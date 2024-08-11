#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX_SIZE = 1000;
    char stri1[MAX_SIZE];

    cout << "Digite uma frase: ";
    cin.getline(stri1, MAX_SIZE);
    cout << "A frase digitada eh: " << stri1 << endl;

    int contaA = 0;
    int contaB = 0;

    for (int i = 0; stri1[i] != '\0'; ++i) {
        if (stri1[i] == 'a' || stri1[i] == 'A') {
            contaA++;
            stri1[i] = 'b';
        }
        if (stri1[i] == 'b' || stri1[i] == 'B') {
            contaB++;
        }
    }

    cout << "A frase possui: " << contaA << " caracteres 'a' (ou 'A') substituidos por 'b'." << endl;
    cout << "A frase modificada eh: " << stri1 << endl;

    return 0;
}
