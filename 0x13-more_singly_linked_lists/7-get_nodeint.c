#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head: pointer to head of list
 * @index: index to find nth node
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;

	while (i < index && head->next != NULL)
	{
		head = head->next;
		i++;
	}

	if (i < index)
		return (NULL);

	return (head);

}
