#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end at the end of a listint_t list
 *
 * @head: pointer to head
 * @n: value
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;

/*assign ptr to head, then traverse list with ptr*/
	ptr = *head;

/*create new node that consists the data part and next part*/
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

/*updating the data(beginning of node)and next part of new node*/
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

/*to traverse the list now if ptr is not the final node*/
	while (ptr->next != NULL)
	{
		/*updates the ptr sequentially*/
		ptr = ptr->next;
	}
/*when the above loop is true it exits then update value below*/
	ptr->next = new;
	return (*head);
}
