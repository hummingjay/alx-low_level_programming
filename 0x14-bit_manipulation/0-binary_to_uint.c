#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts binary number
 * to an unsigned int
 *
 * @b: pointer to string of 0 and 1
 * Return: converted number or 0 if in b != 0 | 1, b= NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i,base = 1;

	if (b == NUll)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != 0 && b[i] != 1)
			return (0);
	}

	while (i >= 0)
	{
		/* find value of current base then add to result and traverse backward*/
		result = result + (b[i] * base);
		base *= 2;
		i--;
	}
	return(result);
}
