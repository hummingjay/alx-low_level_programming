#include "main.h"

/**
 * int _islower - function to check for 
 * lowercase characters
 *
 * Return: 1 when int c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
