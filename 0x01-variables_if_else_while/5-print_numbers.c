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
	int num;

	num = 0;
	for (num; num <= 10; num++)
		printf("%d", num);
	printf("\n");
}
