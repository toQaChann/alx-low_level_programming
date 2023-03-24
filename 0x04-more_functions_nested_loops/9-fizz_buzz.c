#include <stdio.h>

/**
 *main - entry point and usin' header files
 *
 *Descriptions: test functions
 *
 *Return: will return 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 || i % 5 != 0)
		{
			printf("%d ", i);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz\n");
			}
		}
	}
	return (0);
}
