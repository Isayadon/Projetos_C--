/*Media Final do Aluno Calculo*/
#include <iostream>
using namespace std;

int main ()
{
    /*variáveis para armazenar as notas*/
    float n1, n2, n3;
    int nota1 = 2, nota2 = 3, nota3= 5;
    float media;

    /*calculo da media*/

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;

    media = (n1 * nota1 + n2 * nota2 + n3 * nota3) / (nota1 + nota2 + nota3);

    cout << "A media final do aluno eh: " << media << endl;

    return 0;

}