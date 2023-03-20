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
	int i;

	for (i = '0'; i <= '9'; (int)i++)
	{
		putchar(i);
		if (i == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
