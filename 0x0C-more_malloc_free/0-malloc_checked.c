#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns pointer to allocated memory
 * @b:size of memory
 *
 * Return: if malloc fails returns 98 else return b
 */
void *malloc_checked(unsigned int b)
{
	/*void * is automatically and safely promoted to any pointer type*/
	void *p;

	p = malloc(b);

	if (malloc == NULL)
		return (98);
	return (b);
}
