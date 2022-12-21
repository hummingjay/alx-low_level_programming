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
	int j, a;

	a = 1;
	b = 0;
	n = 100;
	for (;src[b] != '\0'; ++a, ++b)
	{
		dest[a] = src[b];
	}
	dest[a] ='\0';
	return (dest);
}
