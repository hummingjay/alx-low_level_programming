#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: size of memory to print
 * @c: char to initialize with
 *
 * Return: pointer to array, or NULL if it fails, fails when size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	/*pointer to array*/
	char *p;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));
		if (p == 0)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
