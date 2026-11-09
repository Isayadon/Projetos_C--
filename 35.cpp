#include <iostream>
using namespace std;

int main () {

    int n;
    int contador = 0;

    cout << "Digite um numero (0 para parar): " << endl;

    cin >> n;

    while (n != 0) {

        if (n >= 100 && n <= 200) {         //n >= 100: o número é maior ou igual a 100? n <= 200: o número é menor ou igual a 200? contador++: se as duas respostas forem verdadeiras, acrescente 1 ao contador. 
             
            contador++;
        }

        cout << "Digite outro numero (0 para parar): ";

        cin >> n;

        cout << "Quantidade de numeros entre 100 a 200: " << contador << endl;

    }

    return 0;
}