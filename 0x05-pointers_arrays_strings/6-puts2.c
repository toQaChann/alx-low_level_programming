#include "main.h"

/**
 *puts2- print
 *@str: a pointer
 *
 * Return: len
*/

void puts2(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\n')
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
