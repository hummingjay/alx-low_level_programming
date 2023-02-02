#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beggining of a listint_int list
 *
 * @head: pointer to head node
 * @n: value
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
