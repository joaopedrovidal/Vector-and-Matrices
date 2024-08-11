#include <iostream>
#include <string>
using namespace std;

int main () {
    string stri1, stri2;

    cout << "Digite a priemira string: ";
    getline(cin, stri1);

    cout << "Digite a segunda string: ";
    getline(cin, stri2);

    cout << "A priemira string eh: " << stri1 << endl;
    cout << "A segunda string eh: " << stri2 << endl;

    if(stri1.length() >=2 ) {
        cout << "A segunda letra da primeira string eh: " << stri1[1] << endl;
    }else {
        cout << "A primeira string e muito curta para ter uma segunda letra.";
    }
    if (stri2.length() >= 2) {
        cout << "A penultima letra da segunda string eh: " << stri2[stri2.length() - 2] << endl;
    }else {
        cout << "A segunda string é muito curta para ter uma penultima letra" << endl;
    }
return 0;
}