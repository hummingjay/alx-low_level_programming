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
	
	for (i = 0; s[i] != '\0' && s[i] != c; i++)
	{
		if (s[i] != c)
		{
			continue;
		}
		else if (s[i] == c)
		{
			s += i;
			break;
		}
	}
	return ('\0');
}
