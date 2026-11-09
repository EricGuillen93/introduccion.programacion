#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0.0;
    double divisor = 1.0;
    bool suma = true;
    
    cout << "term\tpi\n";
    cout << fixed << setprecision(8);
    
    for (int i = 1; i <= 200000; i++) {
        if (suma) pi += 4.0 / divisor;
        else pi -= 4.0 / divisor;
        
        suma = !suma;
        divisor += 2.0;
        
        // Imprimir algunos terminos 
        if (i <= 5 || i == 200000) {
            cout << i << "\t" << pi << "\n";
        }
    }
    return 0;
}
