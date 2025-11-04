#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// 1
double nestedSin(double x, int n) {
    double result = x;
    for (int i = 0; i < n; i++) {
        result = sin(result);
    }
    return result;
}

void task1() {
    double x;
    int n;
    cout << "Завдання 1: Введіть x та n: ";
    cin >> x >> n;
    cout << "y = " << nestedSin(x, n) << endl;
}

// 2
void task2() {
    int n;
    cout << "Завдання 2: Введіть n: ";
    cin >> n;
    
    cout << "Цикл зі зростанням:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << "! = 1^" << i << "3 + 3^" << i << " + 5^" << i << " - 4^" << n << endl;
    }
    
    cout << "Цикл зі спаданням:" << endl;
    for (int i = n; i >= 1; i--) {
        cout << i << "! = 1^" << i << "3 + 3^" << i << " + 5^" << i << " - 4^" << n << endl;
    }
}

// 3a
double polynomial3a(double x, int n) {
    double result = 0;
    for (int i = 0; i <= n; i++) {
        result += pow(x, i);
    }
    return result;
}

// 3б
double polynomial3b(double x, double y, int n) {
    double result = 0;
    for (int i = 0; i <= n; i++) {
        result += pow(x, i) * pow(y, i);
    }
    return result;
}

void task3() {
    cout << "Завдання 3a: y = " << polynomial3a(2, 3) << endl;
    cout << "Завдання 3б: y = " << polynomial3b(1, 2, 4) << endl;
}

// 4
double series4(double x, int n) {
    double result = 0;
    for (int i = 1; i <= n; i++) {
        result += i * pow(x, i);
    }
    return result;
}

void task4() {
    double x;
    int n;
    cout << "Завдання 4: Введіть x та n: ";
    cin >> x >> n;
    cout << "Результат: " << series4(x, n) << endl;
}

// 5
long long doubleFactorial(int n) {
    long long result = 1;
    if (n % 2 == 0) { // парне
        for (int i = 2; i <= n; i += 2) {
            result *= i;
        }
    } else { // непарне
        for (int i = 1; i <= n; i += 2) {
            result *= i;
        }
    }
    return result;
}

void task5() {
    int n;
    cout << "Завдання 5: Введіть n: ";
    cin >> n;
    cout << n << "!! = " << doubleFactorial(n) << endl;
}

// 6a
double nestedSqrt2(int n) {
    double result = sqrt(2);
    for (int i = 1; i < n; i++) {
        result = sqrt(2 + result);
    }
    return result;
}

// 6б
double nestedSqrt3(int n) {
    double result = sqrt(3 * n);
    for (int i = n - 1; i >= 1; i--) {
        result = sqrt(3 * i + result);
    }
    return result;
}

void task6() {
    int n;
    cout << "Завдання 6: Введіть n: ";
    cin >> n;
    cout << "6a: " << nestedSqrt2(n) << endl;
    cout << "6б: " << nestedSqrt3(n) << endl;
}

// 7
double polynomial7(double x, int n) {
    double result = 1;
    double term = 1;
    for (int i = 1; i <= n; i++) {
        term *= x / i;
        result += term;
    }
    return result;
}

void task7() {
    double x;
    int n;
    cout << "Завдання 7: Введіть x (|x| < 1) та n: ";
    cin >> x >> n;
    cout << "y = " << polynomial7(x, n) << endl;
}

// 8
int findMaxK(int m) {
    int k = 0;
    while (pow(4, k + 1) <= m) {
        k++;
    }
    return k;
}

void task8() {
    int m;
    cout << "Завдання 8: Введіть m: ";
    cin >> m;
    cout << "Найбільше k: " << findMaxK(m) << endl;
}

// 9
int findMinPower2(int n) {
    int power = 1;
    while (power <= n) {
        power *= 2;
    }
    return power;
}

void task9() {
    int n;
    cout << "Завдання 9: Введіть n: ";
    cin >> n;
    cout << "Найменше 2^k > n: " << findMinPower2(n) << endl;
}

// 10
float findMachineZero() {
    float a = 1.0f;
    while (1.0f + a / 2.0f != 1.0f) {
        a /= 2.0f;
    }
    return a;
}

void task10() {
    cout << "Завдання 10: Машинний нуль float: " << findMachineZero() << endl;
    cout << "Перевірка з numeric_limits: " << numeric_limits<float>::epsilon() << endl;
}

// 11
void task11() {
    double sum = 0;
    double product = 1;
    int count = 0;
    double num;
    
    cout << "Завдання 11: Введіть послідовність чисел (0 для завершення):" << endl;
    
    while (true) {
        cout << "a[" << (count + 1) << "] = ";
        cin >> num;
        
        if (abs(num) < 1e-10) { // перевірка на 0
            break;
        }
        
        sum += num;
        product *= num;
        count++;
    }
    
    if (count > 0) {
        cout << "Середнє арифметичне: " << sum / count << endl;
        cout << "Середнє геометричне: " << pow(product, 1.0 / count) << endl;
    }
}

// 12
double subfactorial(int n) {
    double result = 0;
    double term = 1;
    
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            result += term;
        } else {
            result -= term;
        }
        term /= (i + 1);
    }
    
    // Множимо на n! без безпосереднього обчислення факторіалу
    double factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    return result * factorial;
}

void task12() {
    int n;
    cout << "Завдання 12: Введіть n (< 25): ";
    cin >> n;
    if (n < 25) {
        cout << "!n = " << subfactorial(n) << endl;
    }
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
    cout << endl;
    task7();
    cout << endl;
    task8();
    cout << endl;
    task9();
    cout << endl;
    task10();
    cout << endl;
    task11();
    cout << endl;
    task12();
    
    return 0;
}