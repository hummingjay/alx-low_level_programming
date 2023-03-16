#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 *
 * @head: pointer to head node
 * @index: position of node to be fetched
 * Return: pointer to nth node and null if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *this_node = head;
	unsigned int i = 0;

	/* Check if this pointer is NULL and if it index */
	while (this_node != NULL && i < index)
	{
		this_node = this_node->next;
		i++;
	}
	/* If your node or NODE before yours is reached is NULL return NULL*/
	if (this_node == NULL)
		return NULL;

	/* Return pointer to current node*/
	return (this_node);
}
