#include "search_algos.h"

/**
 * binary_search - func that searches thru array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: returns index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int i, S = (int)size;
	int left = 0, right = S - 1, mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = (right + left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			/* return the index if the value is found */
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	/* if value not found */
	return (-1);
}
