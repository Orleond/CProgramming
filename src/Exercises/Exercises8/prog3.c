// Функция для расчета абсолютного значения числа
#include <stdio.h>
float absoluteValue(float x) {
    if (x < 0)
        x = -x;

    return (x);
}

// Функция для расчета квадратного корня числа.
float squareRoot(float x, float epsilon) {
    float guess = 1.0;
    while (absoluteValue(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;

    return guess;
}

int main(void) {
    const float epsilon = .00001;

    printf("squareRoot(2.0, %f) = %f\n", epsilon, squareRoot(2.0, epsilon));
    printf("squareRoot(144.0, %f) = %f\n", epsilon, squareRoot(144.0, epsilon));
    printf("squareRoot(17.5, %f) = %f\n", epsilon, squareRoot(17.5, epsilon));

    return 0;
}