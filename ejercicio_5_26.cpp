#include <iostream>
using namespace std;

// Funcion recursiva para mover discos
void hanoi(int discos, int origen, int destino, int temporal) {
    if (discos == 1) {
        cout << origen << " -> " << destino << "\n";
        return;
    }
    
    // a) Mover n-1 discos a la varilla temporal
    hanoi(discos - 1, origen, temporal, destino);
    
    // b) Mover el disco mayor a la varilla de destino
    cout << origen << " -> " << destino << "\n";
    
    // c) Mover n-1 discos de la temporal al destino
    hanoi(discos - 1, temporal, destino, origen);
}

int main() {
    int numDiscos;
    cout << "Introduce el numero de discos para las Torres de Hanoi: ";
    cin >> numDiscos;
    
    cout << "\nMovimientos necesarios:\n";
    hanoi(numDiscos, 1, 3, 2); // origen=1, destino=3, temporal=2
    
    return 0;
}
