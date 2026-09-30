#include <stdio.h>
int main(void) {
    double i, r, t;
    printf("Введіть струм I (A): ");
    if (scanf("%lf", &i) != 1) {
        printf("Помилка: введено некоректне значення I\n");
        return 1;
    }
    printf("Введіть опір R (Ом): ");
    if (scanf("%lf", &r) != 1) {
        printf("Помилка: введено некоректне значення R\n");
        return 1;
    }
    printf("Введіть час T (с): ");
    if (scanf("%lf", &t) != 1) {
        printf("Помилка: введено некоректне значення T\n");
        return 1;
    }
    // Перевірка на фізичну коректність часу (не може бути від'ємним)
    if (t < 0) {
        printf("Помилка: час не може бути від'ємним\n");
        return 1;
    }
    double q = (i * i) * r * t;
    printf("Кількість теплоти Q = %.2lf Дж\n", q);
    return 0;
}