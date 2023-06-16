#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head pointer to list
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t r_value = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		r_value++;
	}
	return (r_value);
}
