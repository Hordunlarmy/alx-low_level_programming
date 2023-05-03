#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: pointer to pointer to head of list
 * @index: index of node to be deleted
 * Return: deletes the node at index index
 * of a listint_t linked list.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *ptr = *head;
	unsigned int node = 0;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (node < (index - 1))
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		node++;
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);

	return (1);
}
