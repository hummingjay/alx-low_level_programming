#include "main.h"

/**
 * _memset() - function that fills the first n bytes of the memory
 * pointed to by s with the constant byte b
 * @s:pointer
 * @p:pointed to
 *
 * Return: Pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
