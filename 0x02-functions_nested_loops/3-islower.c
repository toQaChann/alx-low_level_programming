#include "main.h"

/**
 *_islower - check case
 *@c: the character that will be checked
 *
 *Return: will return 1 or 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
