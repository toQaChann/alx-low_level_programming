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
	char alpL;
	char alpU;

	alpL = 97;
	alpU = 65;
	while (alpL <= 122)
	{
		putchar(alpL);
		alpL = alpL + 1;
	}
	while (alpU <= 90)
	{
		putchar(alpU);
		alpU = alpU + 1;
	}
	putchar('\n');
	return (0);
}
