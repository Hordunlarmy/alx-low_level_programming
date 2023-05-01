#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * @head: pointer to a pointer to head of list
 * @n: the data in node
 * Return:  adds a new node at the end of a listint_t list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr;

	if (temp == NULL)
		return (0);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else if (*head != NULL)
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}

	return (temp);
}
