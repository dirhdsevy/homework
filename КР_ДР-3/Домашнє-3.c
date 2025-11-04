#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// 12
void task12() {
    double a, b, c;
    cout << "Введіть сторони трикутника a, b, c: ";
    cin >> a >> b >> c;
    
    // Перевірка існування трикутника
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
        cout << "Трикутник існує." << endl;
        
        // Знаходимо квадрати сторін для зручності
        double a2 = a * a, b2 = b * b, c2 = c * c;
        
        // Визначаємо тип трикутника за кутами
        if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
            cout << "Трикутник гострокутний" << endl;
        } else if (abs(a2 + b2 - c2) < 1e-9 || abs(a2 + c2 - b2) < 1e-9 || abs(b2 + c2 - a2) < 1e-9) {
            cout << "Трикутник прямокутний" << endl;
        } else {
            cout << "Трикутник тупокутний" << endl;
        }
    } else {
        cout << "Трикутник не існує" << endl;
    }
}

// 23б
double ReLu(double x) {
    return max(0.0, x);
}

double ReLu_derivative(double x) {
    if (x > 0) return 1.0;
    else if (x < 0) return 0.0;
    else return 0.5; // похідна в точці 0 не існує, але для практичних цілей часто визначають як 0 або 0.5
}

void task23b() {
    double x;
    cout << "Введіть x для функції ReLu: ";
    cin >> x;
    
    cout << "ReLu(" << x << ") = " << ReLu(x) << endl;
    cout << "Похідна ReLu в точці " << x << " = " << ReLu_derivative(x) << endl;
}

int main() {
    cout << "=== Завдання 12 ===" << endl;
    task12();
    
    cout << "\n=== Завдання 23б ===" << endl;
    task23b();
    
    return 0;
}
