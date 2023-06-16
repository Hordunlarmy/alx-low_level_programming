#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns
 *                        the nth node of a dlistint_t linked list.
 * @head: pointer to head of list
 * @index: nth node
 * Return: pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	if (current == NULL)
		return (NULL);

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	return (current);
}
