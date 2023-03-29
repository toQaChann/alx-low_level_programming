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

	c = 0;
	j = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	const int a = c;
	char arr[a];
	for (i = c; i >= 0; i--)
	{
		arr[j] = s[i];
	}
	for (i = 0; i < c; i++)
	{
		s[c] = arr[c];
	}
}
