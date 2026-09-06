#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    float potencia, area;

    float comprimento, largura;

    cout << "Digite o comprimento: ";
    cin >> comprimento;

    cout << "Digite a largura: ";
    cin >> largura;

    area = (comprimento * largura);

    cout << "A area eh: " << area << endl;
    
    potencia = (area * 18);

    cout << "Portanto, a potencia de iluminacao em Watts eh: " << potencia << endl;

    return 0;
}