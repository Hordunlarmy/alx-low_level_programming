#include "lists.h"
#include <stdio.h>

/**
 * print_list - Entry point
 * @h: pointer to list
 * Return: all the elements of a list_t list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
