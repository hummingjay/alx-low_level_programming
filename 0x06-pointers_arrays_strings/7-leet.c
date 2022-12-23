#include "holberton.h"

/**
  * leet - Encodes a string into 1337
  * @str: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *s)
{
	int a, i;
	char j[] = {'A', 'E', 'O', 'T', 'L'};
	char t[] = {'4', '3', '0', '7', '1'};

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == j[a] || s[a] + 32 = j[a])
		{
			s[a] = t[a];
		}
	}
	return (s);
}
