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

	alpL = 97;
	while (alpL <= 122)
	{
		putchar(alpL);
		alpL++;
	}
	putchar('\n');
	return (0);
}
