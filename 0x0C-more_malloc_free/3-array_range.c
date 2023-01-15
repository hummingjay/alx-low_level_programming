#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum values
 * @max: maximum values
 *
 * Return: if min > max return NULL and if malloc fails
 * If succes pointer to new array
 */
int *array_range(int min, int max)
{
	int *p;
	int range, i;

	if (min > max)
		return (NULL);
	range = max - min + 1;

	p = malloc(range * sizeof(*p));
	if (p == NULL)
		return (NULL);
	/*arrange from min to max starting from min*/
	for (i = 0; i < range; min++, i++)
		p[i] = min;
	return (p);
}
