#include "lists.h"

/**
 * free_list - Entry point
 * @head: pointer to list
 * Return: frees a list_t list.
 */
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *temp;

	while ((temp = ptr) != NULL)
	{
		ptr = ptr->next;
		free(temp->str);
		free(temp);
	}
}
