#include "lists.h"

/**
 * free_listint - Entry point
 * @head: pointer to head of list
 * Return:  frees a listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
