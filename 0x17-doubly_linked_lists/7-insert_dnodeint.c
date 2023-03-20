#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 *
 * @h: Pointer to pointer to head
 * @idx: Position node to be added
 * @n: data in node
 * Return: address of new node or null if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t new_node, *temp = *h;
	unsigned int i;
	/* create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	/* if idx is 0 */
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Insert new node and the pointers for prev and next */
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
	}
	temp->next = new_node;
	return (new_node);
}
