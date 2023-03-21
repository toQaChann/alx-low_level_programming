#include "main.h"

/**
 * main - entry point and usin' header files
 *
 * Descriptions: test functions
 *
 * Return: will return 0
*/

int main(void)
{
	int j;
	char st[] = "_putchar";

	for (j = 0; st[j] != '\0'; j++)
	{
		_putchar(st[j]);
	}
	_putchar('\n');
	return (0);
}
