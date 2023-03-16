#include "lists.h"

/**
 * sum_dlistint - function that returns sum of all data 
 * n of a dlistint_t linked list
 *
 * @head: pointer to head node or current node
 *
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (head == 0)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
