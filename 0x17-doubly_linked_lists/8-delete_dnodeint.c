#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * of a dlistint_t linked list.
 * @head: Pointer to pointer to head of the list.
 * @index: Index of the node to delete. Index starts at 0.
 *
 * Return: 1 if succeeded, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_delete, *temp = *head;
	unsigned int i;

	if (*head == NULL) /* empty list */
		return (-1);

	if (index == 0) /* delete head */
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* find the node to delete */
	for (i = 0; i < index - 1 && temp != NULL; i++)
		temp = temp->next;

	/* index out of range */
	if (temp == NULL || temp->next == NULL)
		return (-1);

	node_to_delete = temp->next;
	temp->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = temp;
	free(node_to_delete);
	return (1);
}
