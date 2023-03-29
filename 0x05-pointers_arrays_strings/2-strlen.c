#include "main.h"

/**
 *_strlen- length of s
 *@s: a pointer
 *
 * Return: len
*/

int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
