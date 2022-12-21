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
	int j = 0, a = 0;

	for (a < n; src[a] !="\0"; j++, a++)
	{
		dest[j] = src[a];
	}
	return (dest);
}
