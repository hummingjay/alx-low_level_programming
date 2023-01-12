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
	char *p;
	unsigned int len, j;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	p = malloc(len * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < len; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
