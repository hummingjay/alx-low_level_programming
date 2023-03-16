#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of
 * dlistint_t list
 * @h: Pointer to the head or current node which is a node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	/* define stop with pointer h */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
