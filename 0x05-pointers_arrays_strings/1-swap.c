#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: another integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
