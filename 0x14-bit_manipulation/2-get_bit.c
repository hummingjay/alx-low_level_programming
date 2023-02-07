#include "main.h"

/**
 * get_bit - function that returns value of a bit
 * at a given index
 *
 * @n: didgit
 * @index: index of bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int new_num = n >> (index - 1);

	return (new_num & 1);
}
