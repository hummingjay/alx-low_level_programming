#include <stdio.h>
#include "lists.h"
#include <strings.h>
#include <stdlib.h>

/**
 * print_list - function that prints all elements
 * of a list_t
 * @h: pointer to list of list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
