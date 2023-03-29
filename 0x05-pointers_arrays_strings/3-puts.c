#include "main.h"

/**
 *_puts- print
 *@str: a pointer
 *
 * Return: len
*/

void _puts(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');

}
