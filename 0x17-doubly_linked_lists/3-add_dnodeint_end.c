#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 *                   at the end of a dlistint_t list.
 * @head: pointer to head pointer
 * @n: value of new node
 * Return: pointer to new list head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
