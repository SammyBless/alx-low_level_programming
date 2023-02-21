#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - Entry point
 * retur: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		print("%i is positive\n", n);
	else if (n<0)
		print("%i is negative\n", n);
	else
		print("%i is zero\n", n);

	return (0);
}
