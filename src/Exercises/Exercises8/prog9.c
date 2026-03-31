#include <stdio.h>
int gcd(int u, int v) {
    int temp;
    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

float absoluteValue(float x) {
    if (x < 0)
        x = -x;

    return (x);
}

int lcm(int u, int v) {
    if (u < 0 || v < 0) {
        printf("Числа u и v должны быть положительными.\n");
        return 0;
    }
    return u * v / gcd(u, v);
}

int main(void) {
    int u, v;
    printf("Программа нахождения наименьшего общего кратного.\n");
    printf("Введите первое число: ");
    scanf("%i", &u);
    printf("Введите второе число: ");
    scanf("%i", &v);
    printf("НОК чисел %i и %i число %i\n", u, v, lcm(u, v));

    return 0;
}