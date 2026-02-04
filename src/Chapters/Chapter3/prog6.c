/* Эта программа складывает два целых числа
и отображает результат на экране */
#include <stdio.h>
int main(void) {
	// Описываем переменные
	int value1, value2, sum;

	// Определяем значения и рассчитываем сумму
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;

	// Отображаем результат
	printf("The sum of %i and %i is %i\n", value1, value2, sum);
	return 0;
}
