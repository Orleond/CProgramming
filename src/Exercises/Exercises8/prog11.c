#include <stdio.h>

int arraySum(int arr[], int numberOfElem) {
    int sum = 0;
    for (int i = 0; i < numberOfElem; i++) {
        sum += arr[i];
    }

    return sum;
}

int main(void) {
    int arr = {1, 2, 3};
    printf("%i", arraySum(arr, 3));

    return 0;
}