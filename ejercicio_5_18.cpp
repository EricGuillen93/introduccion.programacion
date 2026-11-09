#include <iostream>
using namespace std;

int invertircifras(int num) {
    int invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }
    return invertido;
}

int main() {
    int numero;
    cout << "Introduce un entero a invertir: ";
    cin >> numero;
    cout << "Numero invertido: " << invertircifras(numero) << "\n";
    return 0;
}
