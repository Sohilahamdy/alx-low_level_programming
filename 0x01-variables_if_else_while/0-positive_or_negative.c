#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A Positive anything is better than negative nothing
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is ne1gative\n", n);
	return (0);
}
