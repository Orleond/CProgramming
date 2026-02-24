/* Программа расчета суммы 200 треугольных чисел.
   Введение в цикл for. */
#include <stdio.h>
int main(void) {
	int n = 1, triangularNumber = 0;
	
	while (n <= 200) {
		triangularNumber = triangularNumber + n;
		n = n + 1;
	}
	printf("The 200th triangular number is %i\n", triangularNumber);

	return 0;
}
