#include "lists.h"
#include <string.h>

/**
 * *add_node - Entry point
 * @head: pointer to pointer to list
 * @str: new str node
 * Return: Always 0 (Success)
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *temp = malloc(sizeof(list_t));
	char *dup = strdup(str);

	if (temp == NULL)
		return (0);

	while (*(str + count))
		count++;

	temp->len = count;
	temp->str = dup;
	temp->next = *head;
	*head = temp;

	return (*head);

}
