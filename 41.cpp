#include <iostream>
using namespace std;
#include <cmath>

void atribquad(double lado, double &area, double &perimetro, double &diagonal) {

    area = (lado * lado);

    perimetro = (4 * lado);

    diagonal = (lado * sqrt(2));

}


int main() {

    double lado;

    double area, perimetro, diagonal;

    cout << "Digite um numero positivo e diferente de 0: " << endl;

    cin >> lado;

    if (lado <= 0) {

        cout << "Numero Invalido" << endl;

        return 1;
    }

    atribquad(lado, area, perimetro, diagonal);

    cout << "Resultado da Area: " << area << endl;

    cout << "Resultado do perimetro: " << perimetro << endl;

    cout << "Resultado da diagonal: " << diagonal << endl;

    return 0;

}