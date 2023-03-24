#include "main.h"

/**
 *print_triangle - check case
 *@size: len of line
 *
 *Return: will return nothing
*/

void print_triangle(int size)
{
	int i, j, p;

	p = size;
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j < p)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			if (j == size && i != size)
			{
				_putchar('\n');
			}
		}
		--p;
	}
}
