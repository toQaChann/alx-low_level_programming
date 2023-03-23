#include "main.h"

/**
 *print_last_digit - check case
 *@n: the character that will be checked
 *
 *Return: will return the value of operation
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
