// Базовые преобразования в языке программирования C
#include <stdio.h>
int main(void) {
	float f1 = 123.125, f2;
	int i1, i2 = -150;
	char c = 'a';

	i1 = f1; // Преобразование вещественного числа в целое.
	printf("%f assigned to an int produces %i\n", f1, i1);

	f1 = i2; // Преобразование целого числа в вещественное.
	printf("%i assigned to a float produces %f\n", i2, f1);

	f1 = i2 / 100; // Целочисленное деление.
	printf("%i divided by 100 produces %f\n", i2, f1);

	f2 = i2 / 100.0; // Деление целого числа на вещественное
	printf("%i devided by 100.0 produces %f\n", i2, f2);

	f2 = (float) i2 / 100; // Оператор явного приведения типов.
	printf("(float) %i devided by 100 produces %f\n", i2, f2);

	return 0;
}
