/*Converter uma temperatura F para C*/
#include <iostream>
using namespace std;

int main()
{
    /*variaveis*/
    float C, F;

    /*calculo*/

    cout << "Digite a temperatura expressa em Farenheit(F): ";
    cin >> F;

    C = (5.0 / 9.0) * ((F-32));

    cout << "Em C eh: " << C << endl;

    return 0;
}