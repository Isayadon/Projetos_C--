#include <iostream>
using namespace std;

int main()
{
    int n1, n2, k;

    cout << "Digite dois numeros inteiros: ";
    cin >> n1 >> n2;

    k = n1;

    while (k <= n2)
    {
        cout << k << endl;
        k = k + 1;
    }

    return 0;
}