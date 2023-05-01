#include "lists.h"

/**
 * print_listint - Entry point
 * @h: pointer to head of list
 * Return:  all the elements of a listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t r_value = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		r_value++;
	}

	return (r_value);
}
