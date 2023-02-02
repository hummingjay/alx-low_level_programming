#include "lists.h"

/**
 * print_listint -prints all elements of a listnt_t list
 * @h: pointer to list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	/*begin loop to print all elements*/
	for (i = 0; h; i++)
	{
		/*print the element of the list at i*/
		printf("%d\n", h->n);
		/*set the pointer to next location to repeat loop*/
		h = h->next;
	}
	return (i);
}
