/*descobrir os valores de n1 e n2*/

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    float n1, n2;
    int b, c;

    cout << "digite o valor de b:";
    cin >> b;
    
    cout << "digite o valor de c: ";
    cin >> c;

    n1 = b - sqrt(pow(b,2) - 4*c) / 2;
    n2 = b + sqrt(pow(b,2) - 4*c) / 2;

    cout << "o valor de n1 eh:" << n1 << endl;
    cout << "o valor de n2 eh: " << n2 << endl;

    return 0;
}