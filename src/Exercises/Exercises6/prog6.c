#include <stdio.h>
int main(void) {
    int number, digit, temp, counter;

    printf("Введите число: ");
    scanf("%i", &number);

    if (number == 0) {
        printf("zero\n");
        return 0;
    }
    temp = number;
    while (number > 0) {
        counter++;
        number /= 10;
    }
    number = temp;

    while (counter != 0) {
        int del = 1;
        for (int i = 1; i < counter; i++) {
            del *= 10;
        }
        digit = number / del;
        number -= digit * del;

        switch (digit) {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
        }
        counter--;
    }
    printf("\n");

    return 0;
}