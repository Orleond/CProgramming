#include <stdio.h>
int main(void) {
	int number, sum = 0;

	printf("Введите число: ");
	scanf("%i", &number);

	while(number != 0) {
		sum += number % 10;
		number /= 10;
	}

	printf("Сумма цифр введенного числа = %i\n", sum);

	return 0;
}
