#include <iostream>

using namespace std;

int main() {
    int producto = 1;
    
    
    for (int i = 1; i <= 15; i += 2) {
        producto *= i;
    }
    
    cout << "El producto de los enteros impares del 1 al 15 es: " << producto << "\n";
    
    return 0;
}
