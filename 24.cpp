#include <iostream>
using namespace std;

int main ()
{
    float media, n1, n2;
    int contador;

    contador = 0;

    while (contador < 10)
    {
        cout << "Digite um par de numeros: " << endl;
        cin >> n1 >> n2;

        media = (n1 + n2) / 2;

        cout << "Media: " << media << endl;

        contador = contador + 1;
    }

    return 0;

}