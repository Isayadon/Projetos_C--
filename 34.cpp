
#include <iostream>
using namespace std;

int main() {

    int i;
    int n;
    bool primo = true;

    cout << "Digite um numero: " << endl;
    cin >> n;

    if (n <= 1) {
        primo = false;
    }
    else {
        for (i = 2; i < n; i++) {

            if (n % i == 0) {
                primo = false;
            }

        }
    }

    if (primo == true) {
        cout << "Eh primo!" << endl;
    }
    else {
        cout << "Nao eh primo!" << endl;
    }

    return 0;
}
