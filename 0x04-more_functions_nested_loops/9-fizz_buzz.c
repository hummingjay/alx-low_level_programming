#include <stdio.h>
#include "main.h"

/**
 * program that prints numbers 1 - 100 followed by new line
 * but multiples of 3 print fizz and multiples of
 * 5 buzz. multiples of 3 and 5 = fizzbuzz
 *
 * Return: 0 success
 */
int main()
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("Fizz Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
