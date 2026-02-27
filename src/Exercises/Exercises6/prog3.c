#include <stdio.h>
int main(void) {
    int number1, number2;

    printf("Введите 2 числа через пробел: ");
    scanf("%i %i", &number1, &number2);

    if (number2 == 0) {
        printf("Второе число = 0. На 0 делить нельзя.\n");
    } else {
        printf("%.3f\n", (float) number1 / number2);
    }
}