#include "main.h"

/**
 *print_alphabet_x10 - function to print alph
 *
 *Return: will return nothinq
*/

void print_alphabet_x10(void)
{
	int j;
	char alp;
	int i;

	for (j = 1; j <= 10; j++)
	{
		i = 1;
		alp = 97;
		while (i <= 26)
		{
			_putchar(alp);
			i = i + 1;
			alp = alp + 1;
		}
		_putchar('\n');
	}
}
