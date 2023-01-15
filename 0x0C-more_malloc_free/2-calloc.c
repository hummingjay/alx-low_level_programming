#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * of nmemeb elements of size bytes each and returns pointer
 *
 * @nmemb:number of blocks
 * @size:size of each block
 *
 * Return:if nmemb or size is 0 return NULL if malloc 
 * fails return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *point;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(size * nmemb);

	if (point == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		point[i] = 0;
	return (point);
}
