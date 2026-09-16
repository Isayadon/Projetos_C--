#include <iostream>
using namespace std;

int main()
{ 
    int custodafabrica;

    float impostos, custoaoconsumidor, distribuidor;

    cout << "Digite o custo de fabrica: ";

    cin >> custodafabrica;

    distribuidor = (custodafabrica * 0.28);

    impostos = (custodafabrica * 0.45);

    custoaoconsumidor = (custodafabrica + distribuidor + impostos);

    cout << "O custo ao consumidor: " << custoaoconsumidor;

    return 0;

}