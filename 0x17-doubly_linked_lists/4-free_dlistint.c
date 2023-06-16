#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *prev = NULL;

	while (current != NULL)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
}
