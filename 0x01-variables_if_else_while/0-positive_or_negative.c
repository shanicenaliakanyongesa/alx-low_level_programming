#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 * Description:This program will assign a random number to the variable n.
 *  Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*coded */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
