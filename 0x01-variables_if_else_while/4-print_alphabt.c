#include <stdio.h>

/**
 * main - entry point
 *
 * Description: code to print alhps
 *
 * Return; alwasy have value of 0
*/

int main(void)
{
	char alp;

	alp = 'a';
	while (alp <= 'z')
	{
		if (alp != 'e' || alp != 'q')
		{
			putchar(alp);
		}
	alp = alp + 1;
	}
	putchar('\n');
	return (0);
}
