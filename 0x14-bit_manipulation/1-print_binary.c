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
	int i = 0, k, bit;

	if (n == 0)
		_putchar('0');

	while (n != 0)
	{
		i++;
		n = n >> 1;
	}
	for (bit = i - 1; bit >= 0; bit--)
	{
		k = n >> bit;

		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
