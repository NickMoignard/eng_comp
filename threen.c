/* 	While Loop Example ~ exploring the 3n + 1 problem

	~ A for or while loop continues when the guard is true, and
		cannot terminate until it is false.
	~ To choose a guard, decide what condition must be true at
		the end of the loop, and then negate it.
	~ Every iteration must move one step closer to making the
		guard false.	

*/

#include <stdlib.h>
#include <stdio.h>

#define PERLINE 8

int
main(int argc, char *argv[]) {
	int n,
		cycles,
		max;

	printf("Enter starting value for n: ");
	if (scanf("%d", &n) != 1) {
		printf("Incorrect input\n");
		exit(EXIT_FAILURE);
	}
	/* a value has been read */
	max = n;
	cycles = 0;
	while (n>1) {
		printf("%5d ", n);

		if (n%2==0) {
			n = n/2;
		} else {
			n = 3*n+1;
		}

		if (n>max) {
			max = n;
		}
		cycles += 1;
		if (cycles%PERLINE == 0) {
			printf("\n");
		}
	}
	printf("\n%d cycles consumed, maximum was %d\n", cycles, max);

	return 0;
}
