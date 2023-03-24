#include "main.h"

/**
 *print_diagonal - check case
 *@n: len of line
 *Return: will return nothing
*/

void print_diagonal(int n)
{
	int i, j;
	
	for (i = 1; i <= size; i++)
	{
		if (size <= 0 )
		{
			break;
		}
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
