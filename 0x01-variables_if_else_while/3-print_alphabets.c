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
		putchar(alpL);
	while (alpU <= 90)
		putchar(alpU);
	putchar('\n');
	return (0);
}
