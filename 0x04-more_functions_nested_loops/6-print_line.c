#include "main.h"

/**
 *print_line - check case
 *@n: len of line
 *
 *Return: will return nothing
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
