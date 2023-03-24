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
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
			if ( j == i )
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
