#include "main.h"

/**
 * set_bit - function that sets value of bit to 1 at index
 * @index: index
 * @n: digit
 * Return: 1 if succes and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
