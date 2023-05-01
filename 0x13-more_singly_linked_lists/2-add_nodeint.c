#include "lists.h"

/**
 * add_nodeint - Entry point
 * @head: pointer to pointer to head of list
 * @n: data in node
 * Return: adds a new node at the beginning of a listint_t list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (0);

	temp->n = n;
	temp->next = NULL;

	temp->next = *head;
	*head = temp;

	return (*head);
}
