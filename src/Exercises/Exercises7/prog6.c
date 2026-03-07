// Программа генерирует первые 15 чисел Фибоначчи.
#include <stdio.h>
int main(void) {
    int num1 = 0, num2 = 1, temp, i;
    printf("%i %i ", num1, num2);

    for (i = 2; i <15; ++i) {
        temp = num1;
        num1 = num2;
        num2 = num1 + temp;
        printf("%i ", num2);
    }
    printf("\n");
    
    return 0;
}