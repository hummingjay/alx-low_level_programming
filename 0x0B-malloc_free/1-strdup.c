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
	for (len = 0; str[len]; len++)
	{
		copy = malloc(sizeof(char) * len);
	}

	if (copy == Null)
		return (NULL);
	while ((copy[i] = str[i]) != '\0')
		i++;

	return (copy);
