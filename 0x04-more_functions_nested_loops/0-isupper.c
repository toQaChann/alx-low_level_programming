#include "main.h"

/**
 *_isupper - check case
 *@c: the start number
 *
 *Return: will return 0 or 1
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
