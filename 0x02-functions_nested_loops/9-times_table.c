#include "main.h"

/**
 * times_table - prints the multiple table 
 * of 9 from 0
 * s = row
 * Return: times table
 */
void times_table(void)
{
	int s,h,e;

	for (s = 0; s < 10; s++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for(h = 1; h <= 9; h++)
		{
			e = (s * h);
			if ((h / 10) > 0)
			{
				_putchar((e / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((e % 10) + '0');

			if (h < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
