#include "main.h"

/**
 *print_to_98 - check case
 *@n: the start number
 *
 *Return: will return noting
*/

void print_to_98(int n)
{
	int i, j, p, q, z;

	if (n > 98)
	{
		for (i = 98; i <= n; i++)
		{
			j = i % 10;
			p = i / 10;
			q = p % 10;
			if (p <= 9)
			{
				_putchar(q + '0');
				_putchar(j + '0');
			}
			else
			{
				z = p / 10;
				_putchar(z + '0');
				_putchar(q + '0');
				_putchar(j + '0');
			}
			if (i != n)
			{
				_putchar(',');
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			j = i % 10;
			p = i / 10;
			_putchar(p + '0');
			_putchar(j + '0');
			if (i != n)
			{
				_putchar(',');
			}
		}
	}
	_putchar('\n');
}
