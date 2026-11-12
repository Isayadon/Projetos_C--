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

int main() {

    int a, b, c;

    int resultado;

    cin >> a >> b >> c;

    resultado = maior(a, b, c);

    cout << "O maior numero eh: " << resultado;

    return 0;
}