#include "main.h"

/**
 *swap_int- replace value
 *@a: a pointer
 *@b: a pointer
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
