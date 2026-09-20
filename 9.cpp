#include <iostream>
using namespace std;

int main ()
{
    int x, y, z;
    int soma;

    cout << "Digite 3 valores numericos: " << endl;
    cin >> x >> y >> z;

    if (x <= y && x <= z) {

        soma = (y + z);

        cout << "A soma dos dois maiores eh: " << soma << endl;

    } else if (y <= x && y <= z) {

        soma = (x + z);
        
        cout << "A soma dos maiores eh: " << soma << endl;

    } else {

        soma = (x + y);
        
        cout << "A soma dos maiores eh: " << soma << endl;
    }

    return 0;
}