#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print nums
 *
 * Return: always return 0
*/

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; (int)i++)
	{
		for (j = ((int)i) + 1; j <= '9'; (int)j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
