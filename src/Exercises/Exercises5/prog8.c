#include <stdio.h>
int main(void) {
	int n, number, userNumber, triangularNumber, counter; 
	
	printf("Сколько чисел вы желаете вычислить? ");
	scanf("%i", &userNumber);

	for(counter = 1; counter <= userNumber; ++counter) {
		printf("What triangular number do you want? ");
		scanf("%i", &number);
		triangularNumber = 0;
		for( n = 1; n <= number; ++n)
			triangularNumber += n;
		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}
	return 0;
}
