#include <iostream>
#include  <iomanip>
#include <string.h>
using namespace std;

int main () {
    double salario;
    const int MAX_CARGO = 50;
    char cargo [MAX_CARGO];

    cout << "Digite o seu salario: " << endl;
    cin >> salario;
    cin.ignore();
    cout << "Digite o seu cargo: " << endl;
    cin.getline(cargo, MAX_CARGO);

    double aumentoPercentual;

    if(strcmp(cargo, "Gerente") == 0) {
        aumentoPercentual = 0.10;
    }else if (strcmp(cargo, "Engenheiro") == 0) {
        aumentoPercentual = 0.20;
    }else if (strcmp(cargo, "Tecnico") == 0) {
        aumentoPercentual = 0.30;
    }else {
        aumentoPercentual = 0.05;
    }
    double novoSalario =  salario * (1 + aumentoPercentual);
    double diferenca = novoSalario - salario;
    cout << fixed << setprecision(2);
    cout <<"Salario antigo R$: " << salario << endl;
    cout << "Novo salario R$: " << novoSalario << endl;
    cout << "Diferenca R$: " << diferenca << endl;

    return 0;
}