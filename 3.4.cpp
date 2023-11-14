// Lab_03_4.cpp
// < Довголуцький Семен Васильович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 19
#include <iostream>

using namespace std;

int main() {
    // Визначте параметри лінії
    double R, y, x;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;
    if (x * x + y * y >= R * R && x < 2 * R && y < 2 * R || y <= 0 && x <= 0 && y >= x+2*R) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    
    return 0;
}
