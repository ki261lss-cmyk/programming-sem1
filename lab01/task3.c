#include <stdio.h>
int main(void) {
    double i, r, t;
    printf("Write I (A): ");
    if (scanf("%lf", &i) != 1) {
        printf("Error: invalid value for I\n");
        return 1;
    }
    printf("Write R (Ом): ");
    if (scanf("%lf", &r) != 1) {
        printf("Error: invalid value for R\n");
        return 1;
    }
    printf("Write T (c): ");
    if (scanf("%lf", &t) != 1) {
        printf("Error: invalid value for t\n");
        return 1;
    }
    // Перевірка на фізичну коректність часу (не може бути від'ємним)
    if (t < 0) {
        printf("Error: time cannot be negative\n");
        return 1;
    }
    double q = (i * i) * r * t;
    printf("\nResults of the calculation:\n");
    printf("Heat quantity Q = %.2lf J\n", q);
    return 0;
}