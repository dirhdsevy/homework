#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// 19а
double product19a(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; i++) {
        result *= (1.0 + 1.0 / pow(i, 3));
    }
    return result;
}

void task19a() {
    int n;
    cout << "Завдання 19а: Введіть n (> 2): ";
    cin >> n;
    if (n > 2) {
        cout << "Добуток: " << product19a(n) << endl;
    } else {
        cout << "n має бути більше 2" << endl;
    }
}

// 22
int countGreaterThanNeighbors(const vector<int>& numbers) {
    int count = 0;
    int n = numbers.size();
    
    for (int i = 1; i < n - 1; i++) {
        if (numbers[i] > numbers[i - 1] && numbers[i] > numbers[i + 1]) {
            count++;
        }
    }
    return count;
}

void task22() {
    int n;
    cout << "Завдання 22: Введіть кількість чисел: ";
    cin >> n;
    
    vector<int> numbers(n);
    cout << "Введіть " << n << " цілих чисел: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    int result = countGreaterThanNeighbors(numbers);
    cout << "Кількість чисел, більших за своїх сусідів: " << result << endl;
}

int main() {
    cout << "=== Завдання 19а ===" << endl;
    task19a();
    
    cout << "\n=== Завдання 22 ===" << endl;
    task22();
    
    return 0;
}