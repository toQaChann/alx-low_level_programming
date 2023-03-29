#include "main.h"

/**
 *print_rev- print
 *@s: a pointer
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int c, i;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
