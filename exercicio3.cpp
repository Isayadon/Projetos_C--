#include <iostream>
using namespace std;

int main ()
{
    int segundos;
    int horas, minutos, segundosrestantes;

    cout << "digite o tempo em segundos: ";
    cin >> segundos;

    horas = segundos / 3600;
    segundosrestantes = segundos % 3600;

    minutos = segundosrestantes / 60;
    segundosrestantes = segundosrestantes % 60;

    cout << horas << "horas " << minutos << " minutos e "<< segundosrestantes << " segundos " << endl;

    return 0;
}