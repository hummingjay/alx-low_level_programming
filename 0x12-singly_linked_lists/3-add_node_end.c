#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds new node at
 * end of a list_t list
 *
 * @head: current lcation of node
 * @str: string to be added
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	new->len = 1;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
