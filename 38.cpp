#include <iostream>
using namespace std;

int maior(int x, int y, int z) {

    if (x >= y && x >= z) {

        return x;
    }

    if (y >= x && y >= z) {

        return y;
    }

    else {

        return z;
    }

}

int main () {

    int a, b, c, d, f, g, h, i, j;


    cin >> a >> b >> c >> d >> f >> g >> h >> i >> j;


    int resultado1 = maior(a, b, c);
    int resultado2 = maior(d, f, g);
    int resultado3 = maior(h, i, j);

    int total = maior(resultado1, resultado2, resultado3);

    cout << "O maior numero eh: " << total << endl;

    return 0;
}