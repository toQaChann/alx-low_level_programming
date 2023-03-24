#include "main.h"

/**
 *print_diagonal - check case
 *@n: len of line
 *Return: will return nothing
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		for (j = 1; j <= i; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		if (i != n)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
