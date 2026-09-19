#include <iostream>
using namespace std;

int main ()
{
    int x, y, z;

    cout << "Digite 3 numeros inteiros: " << endl; 
    cin >> x >> y >> z;

    if (x >= y && x >= z) {

        cout << "O maior deles eh: " << x << endl;

    } else if (y >= x && y >= z) {

        cout << "O maior deles eh: " << y << endl;

    } else {

        cout << "O maior deles eh: " << z << endl;

    }

    return 0;



}