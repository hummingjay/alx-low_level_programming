#include "main.h"
#include <stdio.h>

/**
 * rev_string - function to reverse a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int j, a, y, z;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	a = 0;
	z = j;
	j--;
	while (a < z / 2)
	{
		y = s[a];
		s[a] = s[j];
		s[j] = y;
		j--;
		a++;
	}
}
