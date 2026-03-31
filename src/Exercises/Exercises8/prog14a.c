#include <stdio.h>
int a;
_Bool prime() {
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
    a = 1;
    printf("%i\n", prime());
    a = 11;
    printf("%i\n", prime());
    a  = 16;
    printf("%i\n", prime());
    a = 117;
    printf("%i\n", prime());

    return 0;
}