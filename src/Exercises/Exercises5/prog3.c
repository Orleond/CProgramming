#include <stdio.h>
int main(void) {
	int n = 5;
	int triangularNumber;

	for(n; n <= 50; n += 5) {
		triangularNumber = n * (n + 1) / 2;
		printf("Triangular number for %i is %i\n", n, triangularNumber);
	}

	return 0;
}
