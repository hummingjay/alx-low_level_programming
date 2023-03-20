#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);
	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;
	/*return address of new element*/
	return (new);
}
