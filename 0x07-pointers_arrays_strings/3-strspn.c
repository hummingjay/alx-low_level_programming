#include "main.h"

/**
 * strspn -  function that gets the length of a prefix substring
 * @s: string pointer
 * @accept: ..
 *
 * Return: number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, value;
	
	value=0

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[i] == s[i])
		{
			value++;
		}
	}
	return (value);
}
