#include <stdio.h>
#include <math.h>

int main() {
    // 1
    printf("1. Обчислення виразів:\n");
    printf("23+1: %.2f\n", 23.0 + 1);
    printf("45*54+11: %.2f\n", 45.0 * 54 + 11);
    printf("15/4: %.2f\n", 15.0 / 4);
    printf("15.0/4: %.2f\n", 15.0 / 4);
    printf("67%%5: %d\n", 67 % 5);
    printf("(2*45.1 + 3.2)/2: %.2f\n", (2 * 45.1 + 3.2) / 2);

    // 2
    float x = 10.4f, y = 23.458f, z = 5.6f;
    double ln100 = log(100);
    printf("\n2. Числа з 2 знаками після коми:\n");
    printf("x = %.2f, y = %.2f, z = %.2f, ln(100) = %.2f\n", x, y, z, ln100);

    // 3
    char a;
    printf("\n3. Введіть символ a: ");
    scanf(" %c", &a);
    printf("a) -%c-%c-%c\n", a, a, a);
    printf("b) %c | %c | %c\n", a, a, a);
    printf("c) -%c-%c-%c-\n", a, a, a);

    // 4
    double m, r, F;
    const double G = 6.673e-11;
    printf("\n4. Введіть масу тіла (кг): ");
    scanf("%lf", &m);
    printf("   Введіть відстань (м): ");
    scanf("%lf", &r);
    F = G * m / (r * r);
    printf("Сила притягання F = %.3e Н\n", F);

    // 5
    double a2;
    printf("\n5. Введіть число a: ");
    scanf("%lf", &a2);
    printf("a^4 = %.2f\n", pow(a2, 4));
    printf("a^15 = %.2f\n", pow(a2, 15));
    printf("a^28 = %.2f\n", pow(a2, 28));
    printf("a^64 = %.2f\n", pow(a2, 64));

    // 6
    double celsius;
    printf("\n6. Введіть температуру у градусах Цельсія: ");
    scanf("%lf", &celsius);
    printf("Фаренгейт = %.2f\n", 32 + 9.0/5.0 * celsius);

    // 7
    double angle_deg;
    printf("\n7. Введіть кут у градусах: ");
    scanf("%lf", &angle_deg);
    double radians = angle_deg * M_PI / 180.0;
    printf("sin(%.2f) = %.4f\n", angle_deg, sin(radians));

    // 8
    double num;
    printf("\n8. Введіть дійсне число: ");
    scanf("%lf", &num);
    printf("Квадрат = %.3f, Куб = %.3f\n", pow(num, 2), pow(num, 3));

    // 9
    double n1, n2;
    printf("\n9. Введіть два дійсних числа: ");
    scanf("%lf %lf", &n1, &n2);
    double avg_arith = (n1 + n2) / 2;
    double avg_harm = 2 / (1/n1 + 1/n2);
    printf("Середнє арифметичне = %.3f\n", avg_arith);
    printf("Середнє гармонічне = %.3f\n", avg_harm);

    return 0;
}
