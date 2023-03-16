#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a  dlistint_t
 *
 * @head: pointer to pointer to head bode
 * @n: data to be added
 * Return: address of new element and null if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* the type for new node is that pointed to by pointer*/
	dlistint_t *new_node;

	if (!head)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_n));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
	{
		(*head)->prev = new_node;
	}
	free(new_node);

	*head = new_node;

	return (new_node);
}
