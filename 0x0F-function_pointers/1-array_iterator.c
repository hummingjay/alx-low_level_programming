#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as
 * a parameter
 *
 * @size: size of array
 * @action: pointer to needed function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	(array[size])(*action);
}
