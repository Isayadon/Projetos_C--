#include <iostream>
using namespace std;

int main()
{
    float N1, N2, N3, N4;
    float media, exame, mediaf;

    cout << "Digite as 4 notas respectivamente: " << endl;
    cin >> N1 >> N2 >> N3 >> N4;

    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    cout << "Media: " << media << endl;

    if (media >= 7.0) {

        cout << "Aluno aprovado." << endl;

    }
    else if (media < 5.0) {

        cout << "Aluno reprovado." << endl;

    }
    else {

        cout << "Aluno em exame." << endl;

        cout << "Nota do exame: ";
        cin >> exame;

        mediaf = (media + exame) / 2;

        if (mediaf >= 5.0) {

            cout << "Aluno aprovado." << endl;

        }
        else {

            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << mediaf << endl;
    }

    return 0;
}