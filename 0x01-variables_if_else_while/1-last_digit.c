#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Description: a c program to know the last digit
 *
 * Return: alwayse return 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int r;

	r = n % 10;
	if (r < 0)
	r = r * -1;
	if (r > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, r);
	else if (r == 0)
	printf("Last digit of %d is %d and is 0\n", n, r);
	else if (r < 6 && r != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	return (0);
}
