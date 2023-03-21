#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string to count
 *
 * Return: string length value
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
