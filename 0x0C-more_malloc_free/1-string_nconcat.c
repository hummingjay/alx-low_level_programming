#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concanates two strings
 * @s1: string one destination
 * @s2: string to truncate to n bytes
 * @n: size of string size to truncate to
 *
 * Return: Null if fail if n >= s2 use s2 complete
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *copy;
	unsigned int s1size, s2size, buffersize;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	s1size = sizeof(s1);
	s2size = sizeof(s2);

	buffersize = s1size + s2size;

	copy = malloc(buffersize * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for(n = 0; n <= buffersize - 1; n++)
	{
		if (n < s1size)
		{
			copy[n] = s1[n];
		}
		else
		{
			copy[n] = s2[n - s1size];
		}
	}
	s1[buffersize] = '\0';

	return (copy);
}
