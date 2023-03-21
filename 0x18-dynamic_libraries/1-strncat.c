#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @n: number of bytes to be used (maximum)
 * @src: second string, and will be appended
 * @dest: First string, is the destination array
 *
 */
char *_strncat(char *dest, char *src, int n)
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
	dest[a + n + 1] = '\0';

	return (dest);
}
