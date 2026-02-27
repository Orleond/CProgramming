#include <stdio.h>
int main(void) {
    float number1, accum = 0;
    char c;


    while (1) {    
        printf("Введите число и оператор: ");
        scanf("%f %c", &number1, &c);
        switch (c) {
            case '+':
                printf("%f + %f = %f\n", accum, number1, number1 + accum);
                accum = accum + number1;
                break;
            case '-':
                printf("%f - %f = %f\n", accum, number1, accum - number1);
                accum = accum - number1;
                break;
            case '*':
                printf("%f * %f = %f\n", accum, number1, number1 * accum);
                accum = accum * number1;
                break;
            case '/':
                if (number1 == 0) {
                    printf("Деление на 0 запрещено.\n");
                } else {
                    printf("%f / %f = %f\n", accum, number1, accum / number1 );
                    accum = accum / number1;
                }
                break;
            case 'S':
                accum = number1; 
                printf("accum = %f\n", accum);
                break;
            case 'E':
                printf("accum = %f\n", accum);
                return 0;
            default:
                printf("Введенный оператор не опознан. Введите \"+\", \"-\", \"*\", \"/\", \"S\" или \"E\"\n");
                break;                
        }
    }

}