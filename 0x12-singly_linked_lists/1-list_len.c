#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to list_t list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	/*value of size_t*/
	size_t n = 0;

	/*begin loop for going through the nodes*/
	while (h)
	{
		/*increament will go till limit*/
		n++;
		h = h->next;
	}
	return (n);
}
