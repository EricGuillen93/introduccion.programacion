#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip() {
    return rand() % 2; // Devuelve 0 o 1
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int caras = 0, cruces = 0;
    
    for (int i = 1; i <= 100; i++) {
        if (flip() == 1) {
            cout << "Heads\n";
            caras++;
        } else {
            cout << "Tails\n";
            cruces++;
        }
    }
    
    cout << "\nTotal de Caras (Heads): " << caras << "\n";
    cout << "Total de Cruces (Tails): " << cruces << "\n";
    return 0;
}
