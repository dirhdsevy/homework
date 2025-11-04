#include <stdio.h>
#include <math.h>

// 10
void table_task() {
    int x[5] = {1, 2, 3, 4, 5};
    double y[5] = {3.0, 1.0, 5.0, 4.0, 2.1};

    printf("x | %d | %d | %d | %d | %d |\n", x[0], x[1], x[2], x[3], x[4]);
    printf("- | -- | -- | -- | -- | -- |\n");
    printf("y | %.1f | %.1f | %.1f | %.1f | %.1f |\n",
           y[0], y[1], y[2], y[3], y[4]);
}

// 17д
double f(double x) {
    double g = sin(x * x);
    double h = exp(-x * x);
    return g * h;
}

int main() {
    printf("Завдання 10:\n");
    table_task();

    printf("\nЗавдання 17д:\n");
    double x;
    for (x = -3; x <= 3; x += 1.0) {
        printf("x = %.1f, f(x) = %.5f\n", x, f(x));
    }

    return 0;
}
