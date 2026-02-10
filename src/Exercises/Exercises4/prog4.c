#include <stdio.h>
int main(void) {
	int f = 27;
	float c = (f - 32) / 1.8;

	printf("27 градусов по Фаренгейту равняется %g градусам по Цельсию\n", c);

	return 0;
}
