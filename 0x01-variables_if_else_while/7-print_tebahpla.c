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
	char alpL;

	alpL = 122;
	while (alpL >= 97)
	{
		putchar(alpL);
		alpL--;
	}
	putchar('\n');
	return (0);
}
