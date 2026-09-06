#include <iostream>
using namespace std;

int main()
{
    int dias, anos, meses;
    int idade;
    cout << "Digite sua idade em dias: ";
    cin >> idade;

    anos = idade / 365;
    meses = idade % 365 / 30;
    dias = idade % 365 % 30;

    cout << "Sua idade eh: " << anos << " anos, " << meses << " meses e " << dias << " dias." << endl;

    return 0;
}