#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *add_node - function that inserts new node at the
 * beginning of a list_t list
 * @head: current position
 * @str: new string to add
 *
 * Return: address of new element or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;

	if (head == NULL)
		return (NULL);

	/*the new node type cast then allocate space to it*/
	new = (struct list_t *) malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;
	/*return address of new element*/
	return (new);
}
