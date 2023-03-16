#include "lists.h"

/**
 * dlistint_len - function that returns number of elements in a
 * linked dlistint_t list
 *
 * @h: Pointer to head node or current node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
