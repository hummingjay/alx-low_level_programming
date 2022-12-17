#include <stdio.h>

/**
 * program that prints numbers 1 - 100 followed by new line
 * but multiples of 3 print fizz and multiples of
 * 5 buzz. multiples of 3 and 5 = fizzbuzz
 */
int main()
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("Fizz Buzz");
			printf(" ")
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
