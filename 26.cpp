#include <iostream>
using namespace std;

int main ()
{
    float salariobruto, salarioliquido, emprestimo, valordaprestacao, limitedaprestacao;

    cout << "Digite o valor do salario bruto: " << endl;
    cin >> salariobruto;

    cout << "Digite o valor do emprestimo: " << endl;
    cin >> emprestimo;

    salarioliquido = (salariobruto - salariobruto * 9/100);
    
    valordaprestacao = (emprestimo/12);

    limitedaprestacao = (salarioliquido * 30/100);

    if (salariobruto <= 0)
    {
        cout << "Entrada Invalida!" << endl;

        return 0;
    }

    if (emprestimo <= 0)
    {
        cout << "Entrada Invalida!" << endl;

        return 0;
    }

    if (valordaprestacao <= limitedaprestacao)
    {
        cout << "O emprestimo pode ser concedido! " << endl;
        cout << "Valor do emprestimo: " << emprestimo << endl;
        cout << "Valor da prestacao: " << valordaprestacao << endl;
    }
     else
    {
        cout << "O emprestimo nao pode ser concedido!" << endl;
        cout << "30/100 do salario liquido: " << limitedaprestacao << endl;
        cout << "Prestacao necessaria: " << valordaprestacao << endl;
    }

    return 0;


}