#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int P;

    cout << "Digite 3 valores positivos: " << endl;
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b) {

        P = (a + b + c);

        cout << "Perimetro eh: " << P << endl;

        if (a == b && a == c) {
            cout << "Eh um triangulo equilatero" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Eh um triangulo isosceles" << endl;
        }
        else {
            cout << "Eh um triangulo escaleno" << endl;
        }

    }
    else {
        cout << "Os valores nao formam um triangulo" << endl;
    }

    return 0;
}