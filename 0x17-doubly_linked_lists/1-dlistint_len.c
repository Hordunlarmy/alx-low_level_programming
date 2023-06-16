#include "lists.h"

/**
* dlistint_len -  a function that returns the number
*               of elements in a linked dlistint_t list.
* @h: pointer to head of list
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (0);

	/**
	* while (temp != NULL)
	*{
	*	temp = temp->next;
	*	r_value++;
	*}
	*return (r_value);
	*/

	else
		return (1 + dlistint_len(temp->next));
}
