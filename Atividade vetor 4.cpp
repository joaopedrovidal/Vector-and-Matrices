#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;

    cout << "Quantos elementos deseja inserir (1 a 10)? ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Numero invalido de elementos!" << endl;
        return 1;
    }

    int arr[10];
    cout << "Insira os " << n << " elementos positivos: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maior1 = INT_MIN, maior2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maior1) {
            maior2 = maior1;
            maior1 = arr[i];
        } else if (arr[i] > maior2) {
            maior2 = arr[i];
        }
    }

    int somaParesPosImpares = 0;
    for (int i = 1; i < n; i += 2) {
        if (arr[i] % 2 == 0) {
            somaParesPosImpares += arr[i];
        }
    }

    cout << "Os 2 maiores elementos sao: " << maior1 << " e " << maior2 << endl;
    cout << "A soma dos elementos pares em posicoes impares e: " << somaParesPosImpares << endl;

    return 0;
}
