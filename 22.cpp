#include <iostream>
using namespace std;
#include <cmath>

int main () 
{
    double n, k;

    k = 1;

    cin >> n;

    while (k <= n) {

        cout << (sqrt(k)) << endl;

        k = k + 1;
    }

    return 0;
}