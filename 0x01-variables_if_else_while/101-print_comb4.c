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
	int p;

	for (i = '0'; i <= '9'; (int)i++)
	{
		for (j = ((int)i) + 1; j <= '9'; (int)j++)
		{
			for (p = ((int)j) + 1; p <= '9'; (int)p++)
			{
				putchar(i);
				putchar(j);
				putchar(p);
				if (i == '7')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
