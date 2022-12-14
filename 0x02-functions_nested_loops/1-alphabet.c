#include "stdio.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * using putchar
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
