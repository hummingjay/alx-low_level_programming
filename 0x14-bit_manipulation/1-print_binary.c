#include "main.h"

/**
 * print_binary - function that prints the binary 
 * representation of a number
 * @n: digit
 *
 * Return: is void
 */
void print_binary(unsigned long int n)
{
	char rem;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n == 1)
	{
		_putchar('1');
	}

	if (n > 1)
	{
		n = n / 2;
		rem = n % 2;
		_putchar('rem');
	}
}
