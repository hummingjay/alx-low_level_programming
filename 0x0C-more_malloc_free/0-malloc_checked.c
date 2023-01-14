#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns pointer to allocated memory
 * @b:size of memory
 * if fail exit normally with status 98
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/*void * is automatically and safely promoted to any pointer type*/
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
