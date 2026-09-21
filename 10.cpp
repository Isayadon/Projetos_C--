#include <iostream>
using namespace std;

int main ()
{
    double X, Y;

    cout << "Escreva a coordenada X e Y, respectivamente: " << endl;
    
    cin >> X >> Y;

    if (X == 0 && Y == 0) {

        cout << "O ponto esta na origem " << endl;
    } else if (Y == 0) {

        cout << "O ponto esta sobre o eixo X " << endl;
    } else if (X == 0) {

        cout << "O ponto esta sobre o eixo Y " << endl;
    } else if (X > 0 && Y > 0) {

        cout << "Os pontos X e Y pertencem ao Quadrante I " << endl;

    } else if (X < 0 && Y > 0) {

        cout << "Os pontos X e Y pertencem ao Quadrante II " << endl;

    } else if (X < 0 && Y < 0) {

        cout << "Os pontos X e Y pertencem ao Quadrante III " << endl;

    } else {

        cout << "Os pontos X e Y pertencem ao Quadrante IV " << endl;
    }

    return 0;
}
