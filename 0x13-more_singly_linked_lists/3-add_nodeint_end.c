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
	listint_t *ptr = *head;

	if (temp == NULL)
		return (0);

	temp->n = n;
	temp->next = NULL;

	if (ptr == NULL)
		ptr = temp;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;

	return (*head);
}
