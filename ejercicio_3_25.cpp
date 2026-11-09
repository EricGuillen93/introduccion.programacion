#include <iostream>
using namespace std;

int main() {
    // a) Factorial
    int n, temp_n;
    unsigned long long factorial = 1;
    cout << "a) Introduce un entero no negativo para factorial: ";
    cin >> n;
    temp_n = n;
    while (temp_n > 1) {
        factorial *= temp_n;
        temp_n--;
    }
    cout << n << "! = " << factorial << "\n\n";

    // b) Aproximacion de e
    int precision;
    cout << "b) Introduce precision para e (num de terminos): ";
    cin >> precision;
    double e = 1.0;
    int i = 1;
    while (i < precision) {
        double fact = 1.0;
        int j = i;
        while (j > 1) { fact *= j; j--; }
        e += 1.0 / fact;
        i++;
    }
    cout << "e aproximado: " << e << "\n\n";

    // c) Aproximacion de e^x
    double x, e_x = 1.0;
    cout << "c) Introduce valor de x para e^x: ";
    cin >> x;
    cout << "Introduce precision para e^x: ";
    cin >> precision;
    i = 1;
    while (i < precision) {
        double fact = 1.0, potencia = 1.0;
        int j = i;
        while (j > 1) { fact *= j; j--; }
        int k = 1;
        while (k <= i) { potencia *= x; k++; }
        e_x += potencia / fact;
        i++;
    }
    cout << "e^" << x << " aproximado: " << e_x << "\n";
    return 0;
}
