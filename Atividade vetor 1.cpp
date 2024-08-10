#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int vet[5];
    int numero = 0;
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet [i];
        if( vet [i] %2 != 0)
        {
            soma += vet [i];
        }
    }
    cout << soma << endl;
    return 0;
}
