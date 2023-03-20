#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @last: number's last digit
 * Return: value of last digit
 */
int print_last_digit(int last)
{
	int pld;

	pld = (last % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
