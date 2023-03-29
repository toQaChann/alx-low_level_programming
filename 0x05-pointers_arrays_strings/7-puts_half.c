#include "main.h"

/**
 *puts_half- print
 *@str: a pointer
 *
 * Return: len
*/

void puts_half(char *str)
{
	int c, a;

	c = 0;
	while (str[c] != '\n')
	{
		c++;
	}
	a = c - 1;
	a = a / 2;
	while (str[a] != '\n')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');

}
