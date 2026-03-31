#include <stdio.h>
int main(void) {
    long int x_to_the_n(int, int);

    printf("%li\n", x_to_the_n(2, 0));
    printf("%li\n", x_to_the_n(2, 1));
    printf("%li\n", x_to_the_n(2, 2));
    printf("%li\n", x_to_the_n(2, 3));

    return 0;
}

long int x_to_the_n(int x, int n) {
    if (n < 0) { 
        printf("n должно быть больше нуля");
        return x;
    } else if (n == 0) {
        return 1;
    } 
    long int var = 1;
    for (int i = 0; i < n; i++) {
        var *= x;
    }

    return var;
}