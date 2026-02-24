#include <stdio.h>
int main(void) {
	int factorial = 1;
	for (int i = 10; i > 0; i--) {
		factorial *= i;
		printf("Факториал числа %i - %i\n", i, factorial);
	}

	return 0;
}
