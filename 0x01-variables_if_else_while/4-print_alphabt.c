#include <stdio.h>

/**
 * main - entry point
 *
 * Description: code to print alhps
 *
 * Return: alwasy have value of 0
*/

int main(void)
{
	char alp;

	alp = 97;
	while (alp <= 122)
	{
		if (alp == 101 || alp == 113)
		{
			alp++;
			continue;
		}
		else
		{
			putchar(alp);
			alp++;
		}
	}
	putchar('\n');
	return (0);
}
