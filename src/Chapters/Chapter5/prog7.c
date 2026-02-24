/* Программа находит наибольший общий делитель
   для двух целых положительных чисел */
#include <stdio.h>
int main(void) {
	int u, v, temp;

	printf("Please type in two nonnegative integers. \n");
	scanf("%i%i", &u, &v);

	while (v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}
	printf("their greatest common divisor is %i\n", u);

	return 0;
}
