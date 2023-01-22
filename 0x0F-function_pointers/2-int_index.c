#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: pointer to array
 * @size: number of elements in the array
 * @cmp: pointer to function that compares values
 * 
 * Return: index of the first element where cmp != 0,
 * return -1 if none match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* !(cmp) - since non 0 is true this will return -1 if 0 */
	if (size <= 0 || !(cmp) || !(array))
		return (-1);
	for (i = -1; i++ < size;)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
