#include "lists.h"

/**
 * free_listint2 - Entry point
 * @head: pointer to pointer to head of list
 * Return: frees a listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	head = NULL;
}
