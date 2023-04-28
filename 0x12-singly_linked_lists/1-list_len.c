#include "lists.h"

/**
 * list_len - Entry point
 * @h: pointer to list
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
