#include "main.h"

/**
 *_isalpha - check case
 *@c: the character that will be checked
 *
 *Return: will return 1 or 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else if (c >= 65 && c <= 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
