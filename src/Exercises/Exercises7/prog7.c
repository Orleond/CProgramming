#include <stdio.h>
int main(void) {
    int n, i;
    printf("Введите число, до которого нужно вывести простые числа: ");
    scanf("%i", &n);
    int P[n + 1];
    for(i = 2; i < n; i++)
        P[i] = 0;

    i = 2;
    while (1) {
        if (i > n)
            return 0;
        if (P[i] == 0) {
            printf("%i ", i);
            
            int j = 1;
            while (i * j <= n) {
                P[i * j] = 1;
                j++;
            }
        }

        i++;
    }
    printf("\n");
        
    return 0;
}