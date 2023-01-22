#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as
 * a parameter
 * @array: input array
 * @size: size of array
 * @action: pointer to needed function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
			action(array[i]);
	}
}
