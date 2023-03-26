#include "main.h"

/**
 *more_numbers - check case
 *
 *Return: will return nothing
*/

void more_numbers(void)
{
	int i, num, p;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			p = num;
			if (num > 9)
			{
				_putchar('1');
				p = num % 10;
			}
			_putchar(p + '0');

		}
		_putchar('\n');
	}
}
