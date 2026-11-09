#include <iostream>
using namespace std;

int main() {
    int numero, d1, d2, d3, d4;
    
    // Cifrado
    cout << "Introduce numero de 4 cifras a cifrar: ";
    cin >> numero;
    
    d1 = (numero / 1000 + 7) % 10;
    d2 = ((numero / 100) % 10 + 7) % 10;
    d3 = ((numero / 10) % 10 + 7) % 10;
    d4 = (numero % 10 + 7) % 10;
    
    // Intercambiar 1 con 3, y 2 con 4
    int cifrado = d3 * 1000 + d4 * 100 + d1 * 10 + d2;
    cout << "Numero cifrado: " << cifrado << "\n\n";
    
    // Descifrado
    cout << "Introduce numero cifrado de 4 cifras a descifrar: ";
    cin >> numero;
    
    d1 = numero / 1000;
    d2 = (numero / 100) % 10;
    d3 = (numero / 10) % 10;
    d4 = numero % 10;
    
    // Revertir intercambio
    int orig1 = (d3 + 3) % 10; 
    int orig2 = (d4 + 3) % 10;
    int orig3 = (d1 + 3) % 10;
    int orig4 = (d2 + 3) % 10;
    
    int original = orig1 * 1000 + orig2 * 100 + orig3 * 10 + orig4;
    cout << "Numero original: " << original << "\n";
    
    return 0;
}
