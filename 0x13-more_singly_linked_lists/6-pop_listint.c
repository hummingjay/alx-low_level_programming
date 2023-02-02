#include "lists.h"

/**
 * pop_listint - function that deketes the head node of a
 * listint_t linked list
 *
 * @head: head
 * Return: head nodes's data
 */
int pop_listint(listint_t **head)
{
	int data;

	listint_t *new;

	if (*head == NULL)
		return (0);
	data = (*head)->n;

	new = *head;
	*head = (8head)->next;

	free(new);

	return (data)
}
