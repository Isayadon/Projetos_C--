#include <iostream>
using namespace std;

int main () {

    double valor;

    cout << "Digite um valor: " << endl;
    cin >> valor;

    if (valor >= 0 && valor <= 25) {

        cout << "O valor esta no intervalo [0,25]" << endl;

    } else if (valor >= 25 && valor <= 50) {

        cout << "O valor esta no intervalo (25,50]" << endl;

    } else if (valor >= 50 && valor <= 75) {

        cout << "O valor esta no intervalo (50,75]" << endl;

    } else if (valor >= 75 && valor <= 100) {

        cout << "O valor esta no intervalo (75,100]" << endl;

    } else {

        cout << "Fora de intervalo" << endl;
    }

    return 0;
}