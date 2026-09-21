#include <iostream>
using namespace std;

int main ()
{
    int codigo, quantidade;
    double preco, total;

    cout << "Digite o codigo do item e a quantidade: " << endl;
    cin >> codigo >> quantidade;

    if (codigo == 1) {

        preco = (12.00);

    } else if (codigo == 2) {

        preco = (15.50);

    } else if (codigo == 3) {

        preco = (18.00);

    } else if (codigo == 4) {

        preco = (8.00);

    } else {

        preco = (4.50);

    } 

    total = (preco * quantidade);

    cout << "O total a pagar eh: " << total << endl;

    return 0;
}