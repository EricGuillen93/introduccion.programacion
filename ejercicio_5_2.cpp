#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double hours) {
    if (hours <= 3.0) return 20.0;
    double charge = 20.0 + ceil(hours - 3.0) * 5.0;
    return (charge > 50.0) ? 50.0 : charge;
}

int main() {
    double h1, h2, h3;
    cout << "Horas cliente 1: "; cin >> h1;
    cout << "Horas cliente 2: "; cin >> h2;
    cout << "Horas cliente 3: "; cin >> h3;
    
    double c1 = calculateCharges(h1);
    double c2 = calculateCharges(h2);
    double c3 = calculateCharges(h3);
    
    cout << "\nCar\tHours\tCharge\n";
    cout << fixed << setprecision(2);
    cout << "1\t" << h1 << "\t" << c1 << "\n";
    cout << "2\t" << h2 << "\t" << c2 << "\n";
    cout << "3\t" << h3 << "\t" << c3 << "\n";
    cout << "TOTAL\t" << (h1+h2+h3) << "\t" << (c1+c2+c3) << "\n";
    
    return 0;
}
