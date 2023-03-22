#include <stdio.h>

/**
 *main - entry point and usin' header files
 *
 *Descriptions: test functions
 *
 *Return: will return no thing
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
                {
                        if (i != 98)
                        {
                                printf("%d, ", i);
                        }
                        else
                        {
                                printf("%d", i);
                        }
                }
	}
}
