#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet
 * in reverse followed by new line
 *
 * Return: 0 success
 *
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
