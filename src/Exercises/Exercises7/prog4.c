#include <stdio.h>
int main(void) {
    float average = 0, numbers[] = {0.1, 1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8,9, 9.1};
    int i;
    for(i = 0; i < 10; i++) {
        average += numbers[i];
    }
    average /= 10;
    printf("Среднее значение элементов массива является %f\n", average);

    return 0;
}