#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// 1
void task1() {
    int num;
    cout << "Введіть тризначне число: ";
    cin >> num;
    
    // a) Кількість одиниць, десятків і сотень
    int units = num % 10;
    int tens = (num / 10) % 10;
    int hundreds = num / 100;
    
    cout << "а) Одиниць: " << units << ", десятків: " << tens << ", сотень: " << hundreds << endl;
    
    // б) Сума цифр
    int sum = units + tens + hundreds;
    cout << "б) Сума цифр: " << sum << endl;
    
    // в) Число справа наліво
    int reversed = units * 100 + tens * 10 + hundreds;
    cout << "в) Число справа наліво: " << reversed << endl;
}

// 2
void task2() {
    int num;
    cout << "Введіть тризначне число: ";
    cin >> num;
    
    int a = num / 100;        // сотні
    int b = (num / 10) % 10;  // десятки
    int c = num % 10;         // одиниці
    
    // Перевірка чи всі цифри різні
    if (a != b && a != c && b != c) {
        cout << "Числа, утворені перестановкою цифр:" << endl;
        
        // Всі можливі перестановки
        int permutations[6] = {
            a * 100 + b * 10 + c,
            a * 100 + c * 10 + b,
            b * 100 + a * 10 + c,
            b * 100 + c * 10 + a,
            c * 100 + a * 10 + b,
            c * 100 + b * 10 + a
        };
        
        // Видалення дублікатів (хоча їх не буде через умову)
        for (int i = 0; i < 6; i++) {
            cout << permutations[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Не всі цифри різні" << endl;
    }
}

int main() {
    cout << "=== Завдання 1 ===" << endl;
    task1();
    
    cout << "\n=== Завдання 2 ===" << endl;
    task2();
    
    return 0;
}