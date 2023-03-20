#include "lists.h"

/**
 * listint_len - function that returns number of elements
 * in the linked list
 *
 * @h: pointer to node
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
