#include "main.h"

/**
 *times_table - check case
 *
 *Return: will return noting
*/

void times_table(void)
{
	int r;
	int n;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (j == 0)
			{
				_putchar(r + '0');
				_putchar(',');
			}
			else if (j > 0 && r <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
				if (j != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				n = r % 10;
				r = r / 10;
				_putchar(' ');
				_putchar(r + '0');
				_putchar(n + '0');
				if (j != 9)
				{
					_putchar(',');
				}
			}
		}
		putchar('\n');
	}
}
