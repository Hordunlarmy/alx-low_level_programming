#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * @head: pointer to pointer to head of list
 * @idx: where nth node should be added
 * @n: data for new node
 * Return: inserts a new node at a given position.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr = *head;
	unsigned int node = 0;

	temp->n = n;
	temp->next = NULL;

	if (temp == NULL)
		return (0);

	if (idx == 0)
	{
		temp->next = ptr;
		*head = temp;
		return (temp);
	}

	while (node < (idx - 1))
	{
		if (ptr == NULL || ptr->next == NULL)
			return (0);
		ptr = ptr->next;
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}
