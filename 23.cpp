#include <iostream>
using namespace std;

int main ()
{
    int n, contador;

    contador = 1;

    cin >> n;

    while (contador <= 10) {

        cout << n << "x" << contador << "=" << (n * contador) << endl;

        contador = contador + 1;
    }

    return 0;
}