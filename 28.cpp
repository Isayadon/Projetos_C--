#include <iostream>
using namespace std;

int main ()
{
    int contador;
    float media, valor1, valor2;

    contador = 1;

    while (contador <=10)
    {
        cin >> valor1 >> valor2;

        media = (valor1 + valor2) / 2;

        cout << "Media = " << media << endl;

        contador = contador + 1;
    }

    return 0;
}