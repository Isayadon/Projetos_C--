#include <iostream>
using namespace std;

#define slowpokepuder cout << "Slowpoke eh MUIIIIIIIIIIIITO Puderosoooooooo" << endl;


int slowpoke3;

void slowpoke() {

    cout << "Slowpoke" << endl;
}

int somarslowpokes(int slowpoke1, int slowpoke2) {


    slowpoke3 = 1;

    int somarslowpokes;

    somarslowpokes = slowpoke1 + slowpoke2;

    return somarslowpokes;
}


int main() {

    slowpoke3 = 0;

    slowpoke();

    int a = 5, b = 5;

    int s;

    s = somarslowpokes(a, b);

    cout << s << endl;

    cout << "Valor de Slowpoke3: " << slowpoke3 << endl;


    slowpokepuder;

    return 0;
}