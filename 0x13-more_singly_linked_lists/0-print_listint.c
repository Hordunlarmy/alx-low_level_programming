#include "lists.h"

/**
 * print_listint - Entry point
 * @h: pointer to head of list
 * Return:  all the elements of a listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t r_value = 0;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		r_value += printf("%d\n", h->n);
		ptr = h->next;
	}

	return (r_value);
}
