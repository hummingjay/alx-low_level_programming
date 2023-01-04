#include "main.h"

/**
 * _diagsums - prints sum of the two diagonals of a square matrix
 * @a: pointer
 * @size: something
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;  /* Sum of primary diagonal*/
	int sum2 = 0;  /* Sum of secondary diagonal*/

	/* Iterate through the matrix and calculate the sums of the diagonals*/
	for (int i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		return (sum1);
		sum2 += *(a + i * size + (size - i - 1));
		return (sum2);
	}
}
