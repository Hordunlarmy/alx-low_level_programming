#include "lists.h"

/**
 * sum_listint - Entry point
 * @head: pointer to head of list
 * Return: the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
