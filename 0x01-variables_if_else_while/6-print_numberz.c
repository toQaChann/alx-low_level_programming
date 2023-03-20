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

	num = '0';
	for (int i = 0; i < 10; i++)
	{
		putchar(num);
		num = (int)num + 1;
	}
	putchar('\n');
	return (0);
}
