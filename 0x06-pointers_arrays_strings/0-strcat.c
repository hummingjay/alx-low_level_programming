#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest:first string
 * @src:second string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		++a;
	}
	for (b = 0; src[b] != '\0'; ++a, ++b)
	{
		dest[a] = src[b];
	}

	dest[a] = '\0';

	return (dest);
}
