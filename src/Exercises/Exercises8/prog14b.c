#include <stdio.h>
int arr[] = {1, 2, 3};
int numberOfElem = 3;

int arraySum() {
    int sum = 0;
    for (int i = 0; i < numberOfElem; i++) {
        sum += arr[i];
    }

    return sum;
}

int main(void) {

    printf("%i\n", arraySum());

    return 0;
}