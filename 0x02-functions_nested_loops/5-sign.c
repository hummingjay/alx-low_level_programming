#include "main.h"

/**
 * print_sign - function that prints
 * sign of number
 * @n: specific number input
 * Return: 1  and prints + if n greater than 0 returns
 * 0 and prints 0 if n is 0, returns-1 and prints - if
 * n less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
