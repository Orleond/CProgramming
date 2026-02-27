#include <stdio.h>
int main(void) {
	int number, right_digit;
    _Bool flag = 0;

	printf("Enter your number: ");
	scanf("%i", &number);
    if (number < 0) {
        number = -number;
        flag = 1;
    }
	while(number != 0) {
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}
    if (flag) {
        printf("-");
    }
	printf("\n");

	return 0;
}
