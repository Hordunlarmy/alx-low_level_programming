#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: pointer to pointer to head of list
 * Return: deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	while (*head != NULL)
	{
		ptr = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(ptr);
	}

	return (n);

}
