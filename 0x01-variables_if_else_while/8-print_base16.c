#include <stdio.h>

/**
 * main - program that prints all the numbers
 * of base 16 in lowercase followed by new line
 *
 * Return: 0 success
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
