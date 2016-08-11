/*
Write a while loop that calculates dlog2
xe for a double
value x ≥ 1, by counting how many times x can be halved
before it becomes less than one.
*/

#include <stdio.h>
#include <stdlib.h>



int
main(int argc, char *argv[]) {

	int x,
		count;
	double input;

	printf("log_2_(x)\nEnter a value for x: ");

	if (scanf("%lf", &input) != 1) {
		printf("Incorrect input\nMust be greater than 1\n");
		exit(EXIT_FAILURE);
	}

	x = input;

	count = 0;

	while (x > 1) {
		x /= 2;
		count++;
		
	}

	printf("%d\n", count);

	return 0;
}