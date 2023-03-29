#include "main.h"

/**
 *rev_string- print
 *@s: a pointer
 *
 * Return: len
*/

void rev_string(char *s)
{
	int c, i, j;
	char *str;

	c = 0;
	j = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	for (i = c; i >= 0; i--)
	{
		str[j] = s[i];
		j++;
	}
	for (j; j < c; j++)
	{
		s[j] = str[j];
	}
}
