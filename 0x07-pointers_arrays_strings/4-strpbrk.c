#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 *
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			return(s);
		}
	}
	return ();
}
