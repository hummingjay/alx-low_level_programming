#include "main.h"

/**
 * print_alphabet_x10 - function prints 10 times
 * the alphabet in lowercase followed by new line
 *
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	int n, tot;

	tot = 0;

	while (tot < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		tot++;
		_putchar('\n');
	}
}
