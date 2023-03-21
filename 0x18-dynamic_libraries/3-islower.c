#include "main.h"

/**
 * _islower - function to check for
 * lowercase characters
 * @c: single letter input
 * Return: 1 when int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
