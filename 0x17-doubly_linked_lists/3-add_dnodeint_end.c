#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 *
 * @head: pointer to pointer to head
 * @n: data to add
 *
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	/* CHeck if list is empty or not and if empty head is NULL */
	if (*head == NULL)
	{
		/* sets prev to NULL to show no node before */
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Traverse list until no next node found */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* assign in final node pointer to next as new_node */
	temp->next = new_node;
	/* assign pointer to prev in new node */
	new_node->prev = temp;

	return (new_node);
}
