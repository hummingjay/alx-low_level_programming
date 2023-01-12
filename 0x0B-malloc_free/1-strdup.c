#include "main.h"
#include <stdlib.h>

/**
 * _strdup() - function that returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to be copied
 *
 * Return: If str is null return NULL else if success return a pointer to
 * the duplicated string and NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *copy;
	int i,len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
		len++;
		if (len < 1)
			return (NULL);
		copy = malloc(len * sizeof(char));
		if (copy == NULL)
		{
			free(copy);
			return (NULL);
		}
		for (i = 0; i < len; i++)
			p[i] = str[i];
		copy[i] = '\0';
		return (copy);
	}
}
