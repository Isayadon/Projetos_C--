#include <iostream>
using namespace std;
#include <cmath>

int main () {

    double a, b, c, d, e, f;
    double x, y;

    cout << "Digite a, b, c, d, e, f, respectivamente: " << endl;
    cin >> a >> b >> c >> d >> e >> f;

    if (a * e - b * d != 0) {

        x = (c * e - b * f) / (a * e - b * d);
        
        y = (a * f - c * d) / (a * e - b * d);

        cout << "Valor de x eh: " << x << endl;

        cout << "Valor de y eh: " << y << endl;

    }
    else {

        cout << "O calculo nao eh possivel";
    }

    return 0;
}