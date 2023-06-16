#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 *                           a new node at a given position.
 * @h: pointer to head pointer
 * @idx: nth node
 * @n: new node value
 * Return: pointer to head of updated list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (current == NULL)
		return (NULL);

	while (idx != 0)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		idx--;
	}

	new_node->prev = current->prev;
	new_node->next = current;
	current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}
