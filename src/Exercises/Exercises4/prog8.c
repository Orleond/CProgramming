#include <stdio.h>
int main(void) {
	int i = 365, j = 7;

	int next_multiple = i + j - i % j;
	printf("Значение следующего целочисленного значение после %i,\nкоторое будет делиться без остатка на %i будет число %i\n", i, j, next_multiple);

	i = 12258, j = 23;

	next_multiple = i + j - i % j;
	printf("\nЗначение следующего целочисленного значение после %i,\nкоторое будет делиться без остатка на %i будет число %i\n", i, j, next_multiple);
	
	i = 996, j = 4;

	next_multiple = i + j - i % j;
	printf("\nЗначение следующего целочисленного значение после %i,\nкоторое будет делиться без остатка на %i будет число %i\n", i, j, next_multiple);

	return 0;
}
