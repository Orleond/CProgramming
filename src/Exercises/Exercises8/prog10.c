#include <stdio.h>
_Bool prime(int a) {
    if (a <= 0) {
        printf("Число должно быть положительным.");
        return 0;
    }
    if (a == 1 || a == 2) 
        return 1;
    
    for (int i = 2; i < a / 2; i++) {
        if (a % 2 == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    printf("%i\n", prime(1));
    printf("%i\n", prime(11));
    printf("%i\n", prime(16));
    printf("%i\n", prime(117));

    return 0;
}