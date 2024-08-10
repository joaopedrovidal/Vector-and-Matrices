#include <iostream>
using namespace std;

int main() {
    int M, N;

    cout << "Digite o numero de linhas (M) da matriz (<= 20): ";
    cin >> M;
    cout << "Digite o numero de colunas (N) da matriz (<= 25): ";
    cin >> N;

    if (M > 20 || N > 25 || M <= 0 || N <= 0) {
        cout << "Tamanho invalido!" << endl;
        return 1;
    }

    int matriz[M][N], transposta[N][M], matriz2[M][N], somaMatriz[M][N];
    int K;


    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    cout << "Digite o valor do fator K para multiplicar a matriz: ";
    cin >> K;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] *= K;
        }
    }

    cout << "Digite os elementos da segunda matriz de mesmo tamanho:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            somaMatriz[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }

    cout << "Matriz Transposta:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz multiplicada por " << K << ":" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Soma das duas matrizes:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << somaMatriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
