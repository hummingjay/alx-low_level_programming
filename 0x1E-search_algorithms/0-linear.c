# include "search_algos.h"
/**
 * linear_search - func that searches for a value in array
 * @array: pointer to first element of the array
 * @size: the number of elements in array
 * @value: Value to be searched
 *
 * Return: returns first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		//return -1 if array is null
		return -1;
	}

	for (size_t i = 0; i < size; i++)
	{
		//print value being compares
		printf("%d\n", array[i]);

		if (array[i] == value)
		{
			//return index of value
			return i;
		}
	}
	// return -1 if value not found
	return -1;
}
