#include "main.h"
#include <stdio.h>

/**
 * print_rev - string printrd in reverse
 * followed by new line
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int arr = 0;

	while (s[arr] != '\0')
	{
		arr++;
	}

	for (arr -= 1; arr >= 0; arr--)
	{
		_putchar(s[arr]);
	}
	_putchar('\n');
}
