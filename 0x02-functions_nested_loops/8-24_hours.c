#include "main.h"

/**
 * jack_bauer - prints every min of the day
 * of Jack Bauer starting from "00:00" to "23:59"
 * h - hour, m=minutes
 *
 * Return: 24 hr clock line per line
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 60; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(';');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
