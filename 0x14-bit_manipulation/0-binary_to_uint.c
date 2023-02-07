#include "main.h"
#include <stdio.h>
/**
 * _strlen - calculte lenght of string
 * @s: input
 * Return: string length
 */
unsigned int _stlen(const char *s)
{
	int i;
	for (i = 0; s[i]; i++);
	return (i);
}

/**
 * binary_to_uint - function that converts binary number
 * to an unsigned int
 *
 * @b: pointer to string of 0 and 1
 * Return: converted number or 0 if in b != 0 | 1, b= NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, base = 1, length = _stlen(b);

	if (b == NULL)
		return (0);

	for (i = (length - 1); b[i]; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			result += base;
		base *= 2;
	}
	return (result);
}
