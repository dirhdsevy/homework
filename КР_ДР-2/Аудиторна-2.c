#include <stdio.h>
#include <math.h>

int main() {
    double x, a, b, c, y, S, m1, m2, r, F;
    const double G = 6.673e-11;

    // 1
    printf("1. Результати обчислень:\n");
    printf("2+31 = %d\n", 2 + 31);
    printf("45*54-11 = %d\n", 45 * 54 - 11);
    printf("15/4 = %d\n", 15 / 4);
    printf("15.0/4 = %.2f\n", 15.0 / 4);
    printf("67%%5 = %d\n", 67 % 5);
    printf("(2*45.1 + 3.2)/2 = %.2f\n", (2 * 45.1 + 3.2) / 2);

    // 2
    float f1 = 10e-4, f2 = 24.33E5;
    double pi = M_PI, e = M_E, sqrt5 = sqrt(5), ln100 = log(100);
    printf("\n2. Числа:\n%.2f %.2f %.2f %.2f %.2f %.2f\n",
           f1, f2, pi, e, sqrt5, ln100);

    // 3
    int d;
    printf("\n3. Введіть цифру: ");
    scanf("%d", &d);
    printf("- %d - %d - %d\n", d, d, d);
    printf("%d | %d | %d\n", d, d, d);
    printf("- %d - %d - %d\n", d, d, d);

    // 4
    m1 = 5.97e24; m2 = 7.35e22; r = 3.84e8;
    F = G * m1 * m2 / (r * r);
    printf("\n4. Сила притягання:\nF = %.3e Н\n", F);

    // 5
    printf("\n5. Степені x через множення:\n");
    x = 2;
    double x2 = x * x;
    double x4 = x2 * x2;
    double x6 = x4 * x2;
    double x9 = x3 * x3 * x3;
    double x15 = x9 * x6;
    double x28 = x15 * x6 * x4 * x2 * x;
    double x64 = x4 * x4 * x4 * x4;
    printf("x=%.0f: x^4=%.0f, x^6=%.0f, x^9=%.0f, x^15=%.0f, x^28=%.0f, x^64=%.0f\n",
           x, x4, x6, x9, x15, x28, x64);

    // 6
    double C, Fh;
    printf("\n6. Введіть температуру (°C): ");
    scanf("%lf", &C);
    Fh = (9 * C) / 5 + 32;
    printf("F = %.3g °F\n", Fh);

    return 0;
}