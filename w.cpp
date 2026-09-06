#include <iostream>
using namespace std;

int main()
{
    float peso, altura, imc;

    cout << "Digite seu peso: ";

    cin >> peso;

    cout << "Digite sua altura: ";
    cin >> altura;

    imc = peso / ( altura * altura );

    cout << "Seu IMC eh: " << imc << endl;

    return 0;
}