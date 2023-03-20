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

	num = '0';
	for (i = 0; i < 10; i++)
	{
		putchar(num);
		num = (int)num + 1;
	}
	putchar('\n');
	return (0);
}
