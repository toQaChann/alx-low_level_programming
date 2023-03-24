#include "main.h"

/**
 *print_square - check case
 *@size: len of line
 *
 *Return: will return nothing
*/

void print_square(int size)
{
	int i, j;
	
	for (i = 1; i <= size; i++)
	{
		if (size <= 0 && size % 2 != 0)
		{
			break;
		}
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		if (i != size)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
