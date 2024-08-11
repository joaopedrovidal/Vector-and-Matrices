#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int vetCodigoProduto[5];
    float vetValorProduto [5];
    int numero = 0;
    float soma = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o numero do produto: ";
        cin >> vetCodigoProduto [i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout <<"Digite o valor do produto" << endl;
        cin >> vetValorProduto[i];
    }
    soma += vetValorProduto[i];
    cout << soma << endl;
    return 0;
}
