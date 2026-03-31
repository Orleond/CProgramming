#include <stdio.h>
int main(void) {
    void quadraticEquation(void);
    quadraticEquation();

    return 0;
}

void quadraticEquation() {
    float squareRoot(float);
    int a, b, c;
    printf("Введите a: ");
    scanf("%i", &a);
    printf("Введите b: ");
    scanf("%i", &b);
    printf("Введите c: ");
    scanf("%i", &c);

    int disc = b * b - 4 * a * c;
    if (disc < 0) {
        printf("Дискриминант ниже нуля. Уравненин не имеет корней");
        return;
    }
    float squareDisc = squareRoot(disc);
    float x1, x2;
    x1 = (-b + squareDisc) / (2 * a);
    x2 = (-b - squareDisc) / (2 * a);

    printf("Результатом вычисления квадратного уравнения %ix^2 + %ix + %i = 0 являются числа ", a, b, c);
    printf("x1 = %.2f и x2 = %.2f\n", x1, x2);
}

float absoluteValue(float x) {
    if (x < 0)
        x = -x;

    return (x);
}

float squareRoot(float x) {
    float absoluteValue(float);
    const float epsilon = .00001;
    float guess = 1.0;
    while (absoluteValue(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;

    return guess;
}