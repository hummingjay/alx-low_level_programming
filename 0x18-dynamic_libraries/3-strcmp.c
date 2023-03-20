#include "main.h"
#include <string.h>

/**
 * _strcmp - function to compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int a, r;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			r = s1[a] - s2[a];
			break;
		}
		else if (s1[a] == s2[a])
		{
			r = s1[a] - s2[a];
			continue;
		}
	}
	return (r);
}
