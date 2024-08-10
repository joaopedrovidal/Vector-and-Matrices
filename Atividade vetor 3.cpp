#include <iostream>
#include <cmath>

#define MAXSIZE 5

using namespace std;

double media(double s[], int n) {
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        sum += s[i];
    }

    return sum / n;
}

double variancia(double s[], int n) {
    double sum = 0.0;
    double dev = 0.0;
    double med = media(s, n);

    for (int i = 0; i < n; i++) {
        dev = s[i] - med;
        sum += (dev * dev);
    }

    return sum / n;
}

double desvio_padrao(double s[], int n) {
    double v = variancia(s, n);
    return sqrt(v);
}

int main() {
    double vetor[MAXSIZE];

    for (int i = 0; i < MAXSIZE; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    cout << "Media = " << media(vetor, MAXSIZE) << endl;
    cout << "Variancia = " << variancia(vetor, MAXSIZE) << endl;
    cout << "Desvio Padrao = " << desvio_padrao(vetor, MAXSIZE) << endl;

    return 0;
}
