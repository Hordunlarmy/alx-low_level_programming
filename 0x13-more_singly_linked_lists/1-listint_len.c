#include "lists.h"

/**
 * listint_len - Entry point
 * @h: pointer to head of list
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t r_value = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		r_value++;
	}
	return (r_value);
}
