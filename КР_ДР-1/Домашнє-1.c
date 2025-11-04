#include <stdio.h>
#include <math.h>

int main() {
    // 11
    printf("11. Виведення рядка з !!! перед і після:\n");
    char s[100];
    printf("Введіть рядок: ");
    fgets(s, sizeof(s), stdin);
    printf("!!! %s !!!\n", s);

    // 13
    printf("\n13. Округлення десяткового дробу до 3 знаків:\n");
    double num;
    printf("Введіть число: ");
    scanf("%lf", &num);
    printf("Результат = %.3f\n", num);

    return 0;
}