#include <iostream>
#include <limits.h> // Para usar INT_MIN
using namespace std;

int main() {
    int n;

    // Passo 1: Ler o número de elementos (entre 1 e 10)
    cout << "Quantos elementos deseja inserir (1 a 10)? ";
    cin >> n;

    // Verifica se o valor de n é válido
    if (n < 1 || n > 10) {
        cout << "Numero invalido de elementos!" << endl;
        return 1;
    }

    int arr[10];
    cout << "Insira os " << n << " elementos positivos: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Passo 2: Encontrar os 2 maiores elementos
    int maior1 = INT_MIN, maior2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maior1) {
            maior2 = maior1;
            maior1 = arr[i];
        } else if (arr[i] > maior2) {
            maior2 = arr[i];
        }
    }

    // Passo 3: Calcular a soma dos elementos pares em posições ímpares
    int somaParesPosImpares = 0;
    for (int i = 1; i < n; i += 2) { // i começa em 1 para pegar posições ímpares
        if (arr[i] % 2 == 0) {
            somaParesPosImpares += arr[i];
        }
    }

    // Saída dos resultados
    cout << "Os 2 maiores elementos sao: " << maior1 << " e " << maior2 << endl;
    cout << "A soma dos elementos pares em posicoes impares e: " << somaParesPosImpares << endl;

    return 0;
}
