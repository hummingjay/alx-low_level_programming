#include "main.h"

/**
 * _strchr - function that locates a character
 * in a string
 * @s: string to be read
 * @c: character to be located
 *
 * Return: pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; i != /0; i++)
	{
		if (s[i] != c)
		{
			return (NULL);
			continue;
		}
		else if (s[i] == c)
		{
			return (\0);
			break;
		}
	}
}
