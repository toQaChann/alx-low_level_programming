#include <stdio.h>

/**
 * main - entry point
 *
 * Description: code to print num
 *
 * Return: alwasy have value of 0
*/

int main(void)
{
	char num;
	int i;
	char alp;

	num = '0';
	for (i = 0; i < 10; i++)
	{
		putchar(num);
		num = (int)num + 1;
	}
	for (alp = 97; alp <= 102; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
