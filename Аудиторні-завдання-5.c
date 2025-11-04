#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

// 1
void task1() {
    int n;
    cout << "Завдання 1: Введіть n (< 64): ";
    cin >> n;
    
    if (n >= 0 && n < 64) {
        unsigned long long result = 1ULL << n;
        cout << "2^" << n << " = " << result << endl;
    } else {
        cout << "n має бути в діапазоні [0, 63]" << endl;
    }
}

// 2
void task2() {
    int n, k;
    cout << "Завдання 2: Введіть n та k: ";
    cin >> n >> k;
    
    int result = n | (1 << k);
    cout << "Результат: " << result << endl;
}

// 3
void task3() {
    unsigned long long m;
    int j;
    cout << "Завдання 3: Введіть m та j: ";
    cin >> m >> j;
    
    unsigned long long result = m & ~(1ULL << j);
    cout << "Десяткове: " << result << endl;
    cout << hex << "Шістнадцяткове: 0x" << result << dec << endl;
}

// 4
void task4() {
    unsigned int n;
    cout << "Завдання 4: Введіть 32-бітне число: ";
    cin >> n;
    
    unsigned int first8 = (n >> 24) & 0xFF;
    unsigned int last8 = n & 0xFF;
    unsigned int middle = (n >> 8) & 0xFFFF;
    
    unsigned int result = (last8 << 24) | (middle << 8) | first8;
    
    cout << "Десяткове: " << result << endl;
    cout << hex << "Шістнадцяткове: 0x" << result << dec << endl;
}

// 5
void task5() {
    unsigned int n;
    cout << "Завдання 5: Введіть число: ";
    cin >> n;
    
    int maxCount = 0;
    int currentCount = 0;
    
    while (n > 0) {
        if (n & 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
        n >>= 1;
    }
    
    cout << "Найбільша кількість одиничок підряд: " << maxCount << endl;
}

// 6
void task6() {
    int x;
    cout << "Завдання 6: Введіть x: ";
    cin >> x;
    
    bool y = ((x & (x - 1)) > 0);
    cout << "y = " << y << endl;
    cout << "Пояснення: Вираз перевіряє, чи містить число x більше ніж одну одиничку в двійковому представленні." << endl;
    cout << "Тобто, чи НЕ є число ступенем двійки (окрім 0)." << endl;
}

int main() {
    task1();
    cout << endl;
    task2();
    cout << endl;
    task3();
    cout << endl;
    task4();
    cout << endl;
    task5();
    cout << endl;
    task6();
    
    return 0;
}