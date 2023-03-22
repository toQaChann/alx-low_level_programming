#include "main.h"

/**
 *print_alphabet - function to print alph
 *
 *Return: will return nothinq (void)
*/

void print_alphabet(void)
{
	char alp;
	int i;

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
