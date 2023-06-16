#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum
 *            of all the data (n) of a dlistint_t linked list.
 * @head: pointer to head of list
 * Return: sum of list data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (head == NULL)
		return (0);
	else
		return (current->n + sum_dlistint(current->next));
}
