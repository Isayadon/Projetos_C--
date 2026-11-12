#include <iostream>
using namespace std;
#include <cmath>

double quadrado(double R) {

    return R * R;
}

double raizCubica(double R2) {

    return cbrt(R2);
}

double raizQuadrada(double R3) {

    return sqrt(R3);
}

double cubo(double R4) {

    return R4 * R4 * R4;
}

int main () {


    double numero;

    double resquadrado, resraizc, resraizq, rescubo;

    cout << "Digite um numero positivo e diferente de zero: ";
    cin >> numero;

    if (numero <= 0) {

        cout << "Numero invalido!" << endl;

        return 1;
    }

    resquadrado = quadrado(numero);
    resraizc = raizCubica(numero);
    resraizq = raizQuadrada(numero);
    rescubo = cubo(numero);

    cout << "Resultado do quadrado: " << resquadrado << endl;
    cout << "Resultado da raiz cubica: " << resraizc << endl;
    cout << "Resultado da raiz quadrada: " << resraizq << endl;
    cout << "Resultado do cubo: " << rescubo << endl;

    return 0;
}