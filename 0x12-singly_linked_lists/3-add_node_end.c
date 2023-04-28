#include "lists.h"
#include <string.h>

/**
 * add_node_end - Entry point
 * @head: pointer to pointer to list
 * @str: new node string
 * Return:  adds a new node at the end of a list_t list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *current;
	list_t *temp = malloc(sizeof(list_t));
	char *dup = strdup(str);

	if (dup == NULL)
	{
		free(temp);
		return (0);
	}

	while (*(str + count))
		count++;

	temp->len = count;
	temp->str = dup;
	current = *head;

	if (current == NULL)
		*head = temp;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = temp;
	}

	return (*head);
}
